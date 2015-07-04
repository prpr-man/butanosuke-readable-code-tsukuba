#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void input_file(vector<string> &recipe, char* file_name) {
  ifstream ifs(file_name);
  string tmp;
  while(getline(ifs, tmp)){
    recipe.push_back(tmp);
  }
}

int main(int argc, char* argv[]) {
  vector<string> recipe_data;
  char* recipe_name = argv[1];

  input_file(recipe_data, recipe_name);
  for(int id=0; id<recipe_data.size(); id++) {
    cout << id << ": " << recipe_data[id] << endl;
  }
  return 0;
}
