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

int min(int arr[], int n) {
  int min = 11;
  int pos = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
      pos = i;
    }
  }

  return pos;
}

int minPositive(int arr[], int n) {
  int min = 11;
  int pos = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] < min && arr[i] >= 0) {
      min = arr[i];
      pos = i;
    }
  }

  return pos;
}

int minPositiveOdd(int arr[], int n) {
  int min = 11;
  int pos = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] < min && arr[i] >= 0 && arr[i] % 2 == 0) {
      min = arr[i];
      pos = i;
    }
  }

  return pos;
}
int isEven(int n) { return n % 2 != 0; }
/*
 * int nth - Define how many numbers you want to omit
 * */
int even(int arr[], int n, int nth) {

  for (int i = 0; i < n; i++) {
    if (isEven(arr[i])) {
      if (nth > 0)
        nth--;
      else
        return i;
    }
  }

  return -1;
}

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
}
int main() {
  int *arr, key, i, p;
  arr = new int[LENGHT];
  srand(time(NULL));

  for (i = 0; i < LENGHT; i++) {
    arr[i] = rand() % 20 - 10;
  }

  p = max(arr, LENGHT);
  cout << "Pozycja max: " << p << endl;

  p = min(arr, LENGHT);
  cout << "Pozycja min: " << p << endl;

  p = minPositive(arr, LENGHT);
  cout << "Pozycja min dodatnia: " << p << endl;

  p = minPositiveOdd(arr, LENGHT);
  cout << "Pozycja min dodatnia parzysta: " << p << endl;

  p = even(arr, LENGHT, 1);
  cout << "Pozycja 1 nieparzysta: " << p << endl;

  p = even(arr, LENGHT, 2);
  cout << "Pozycja 2 nieparzysta: " << p << endl;

  printArr(arr, LENGHT);
  delete[] arr;
  return 0;
}
