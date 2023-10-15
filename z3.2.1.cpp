#include <iostream>

using namespace std;

int WySzukaj(int T[], int n, int k) {
  for (int i = 0; i < n; i++)
    if (T[i] == k)
      return i;
  return -1;
}
int main() {
  int *D, n, k, i, p;
  cout << "Podaj rozmiar tablicy: " << endl;
  cin >> n;
  D = new int[n];
  cout << "Podaj elementy tablicy: " << endl;
  for (i = 0; i < n; i++) {
    cin >> D[i];
  }
  cout << "Podaj klucz: ";
  cin >> k;

  p = -1;

  for (int i = 0; i < n; i++) {
    if (D[i] == k) { // jeśli jest klucz w tablicy
      p = i + 1;
      break; // to zapamiętaj pozycję (indeks) klucza
    }
  }
  cout << "Szukany element jest na pozycji: " << p << endl << endl;
  delete[] D;
  return 0;
}
