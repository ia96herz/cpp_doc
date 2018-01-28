#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> container;
  for (int i=0; i<10; i++) {
    container.push_back(i);
  }
  replace(
    container.begin(), container.end(), 1, 100);
  vector<int>::iterator it;
  for (it=container.begin(); it!=container.end(); it++) {
    cout << *it << endl;
  }
  return 0;
}

