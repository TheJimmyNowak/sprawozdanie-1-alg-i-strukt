#include <ctime>
#include <iostream>
#include <stdlib.h>

using namespace std;

#define LENGHT 100

void printArr(int Z[], bool L[], int n) {
  for (int i = 0; i < n; i++) {
    cout << i << "." << L[i] << Z[i] << endl;
  }
}

int main() {
  int *Z, key, i, p;
  bool *L;
  Z = new int[LENGHT];
  L = new bool[LENGHT];
  srand(time(NULL));

  for (i = 0; i < LENGHT; i++) {
    Z[i] = rand() % 10;
  }

  key = rand() % 10;

  for (i = 0; i < LENGHT; i++) {
    if (Z[i] == key)
      L[i] = true;
  }
  printArr(Z, LENGHT);
  delete[] Z;
  return 0;
}
