#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#define NOT_EXIST_ID -1


void input_file(vector<string> &recipe, char* file_name) {
  ifstream ifs(file_name);
  string tmp;
  while(getline(ifs, tmp)){
    recipe.push_back(tmp);
  }
}

void print_recipe_all(vector<string> &recipe_data) {
  for(int id=0; id<recipe_data.size(); id++) {
    cout << id << ": " << recipe_data[id] << endl;
  }

  return;
}

void print_recipe_by_id(vector<string> &recipe_data, unsigned int id) {
  cout << id << ": " << recipe_data[id] << endl;

  return;
}

int main(int argc, char* argv[]) {
  vector<string> recipe_data;
  char* recipe_name = argv[1];

  input_file(recipe_data, recipe_name);

  int id = (argc >= 3) ? atoi(argv[2]) :  NOT_EXIST_ID;
  if(id == NOT_EXIST_ID) print_recipe_all(recipe_data);
  else                   print_recipe_by_id(recipe_data, id);

  return 0;
}
