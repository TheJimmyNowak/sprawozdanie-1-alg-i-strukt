#include <ctime>
#include <iostream>
#include <stdlib.h>

using namespace std;

#define LENGHT 10

int max(int arr[], int n) {
  int max = -11;
  int pos = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      pos = i;
    }
  }

  return pos;
}

int main() {
  int *arr, key, i, p;
  arr = new int[LENGHT];
  srand(time(NULL));

  for (i = 0; i < LENGHT; i++) {
    arr[i] = rand() % 20 - 10;
  }

  p = max(arr, LENGHT);
  cout << "Pozycja: " << p << endl;
  delete[] arr;
  return 0;
}
