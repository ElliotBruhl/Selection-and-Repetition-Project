#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream file1;
  file1.open("file1.txt");
  ifstream file2;
  file2.open("file2.txt");
  ofstream file3;
  file3.open("file3.txt");

  string file1str;
  string file2str;

  getline(file1, file1str);
  getline(file2, file2str);

  while (!file1.eof() || !file2.eof()) {
    if (file1.eof()) {
      file3 << file2str << endl;
      getline(file2, file2str);
    } else if (file2.eof()) {
      file3 << file1str << endl;
      getline(file1, file1str);
    } else {
      if (file1str < file2str) {
        file3 << file1str << endl;
        getline(file1, file1str);
      } else {
        file3 << file2str << endl;
        getline(file2, file2str);
      }
    }
  }

  file1.close();
  file2.close();
  file3.close();

  return 0;
}