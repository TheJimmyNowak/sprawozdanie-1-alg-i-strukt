#include <ctime>
#include <iostream>

using namespace std;

int main() {
  int *D, lenght, k, i, p;
  cout << "Podaj rozmiar tablicy: " << endl;
  cin >> lenght;
  D = new int[lenght];
  cout << "Podaj elementy tablicy: " << endl;
  for (i = 0; i < lenght; i++) {
    cin >> D[i];
  }
  cout << "Podaj klucz: ";
  cin >> k;

  p = -1;

  for (int i = 0; i <= lenght / 2; i++) {
    if (D[i] == k) {
      p = i + 1;
      break;
    }
  }
  cout << "Pozycja: " << p << endl;
  delete[] D;
  return 0;
}
