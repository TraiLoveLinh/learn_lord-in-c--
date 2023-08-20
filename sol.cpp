#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int N = 8;
const string TF = "hoanvi.txt";

struct TS {
  char data[N];
};

void swap(char &a, char &b) {
  char temp = a;
  a = b;
  b = temp;
}

void print(TS &s) {
  cout << s.data << " ";
}

void generatePermutations(TS &s, int i) {
  if (i == N) {
    print(s);
    return;
  }

  for (int j = i; j < N; j++) {
    swap(s.data[i], s.data[j]);
    generatePermutations(s, i + 1);
    swap(s.data[i], s.data[j]);
  }
}

int main() {
  TS s = {'1', '2', '3', '4', '5', '6', '7', '8'};
  int d = 0;
  long int Lt = clock();
  ofstream f(TF);
  generatePermutations(s, 1);
  f.close();
  long int T = clock();

  cout << "So hoan vi la: " << d << endl;
  cout << "Mat thoi gian la: " << (T - Lt) / 18.2 << " giay" << endl;

  return 0;
}
