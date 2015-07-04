#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  ifstream ifs(argv[1]);
  string recipe_data;
  while(getline(ifs, recipe_data)){
    cout << recipe_data << endl;
  }

  return 0;
}
