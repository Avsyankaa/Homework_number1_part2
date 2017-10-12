#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>
using namespace std;
int check(char* a1) {
  int error;
  for (int i = 0; i < strlen(a1); i++) {
    if ((a1[i] != '1') && (a1[i] != '2') && (a1[i] != '3') && (a1[i] != '4') &&
        (a1[i] != '5') && (a1[i] != '6') && (a1[i] != '7') && (a1[i] != '8') &&
        (a1[i] != '9') && (a1[i] != '0'))
      error = 1;
  }
  if (error == 1) {
    cerr << "Bad integer";
  }
  return error;
}
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
double div(double a, int b) {
  double rez;
  rez = a / b;
  return rez;
}
int mod(int a, int b) {
  cout << "Enter a value for the module" << endl;
  int m;
  cin >> m;
  return ((a - b) % m);
}
double pow(double a) {
  cout << "Enter a value for the power" << endl;
  char p[10];
  cin >> p;
  int error;
  double a1 = a;
  for (int i = 0; i < strlen(p); i++) {
    if ((p[i] != '1') && (p[i] != '2') && (p[i] != '3') && (p[i] != '4') &&
        (p[i] != '5') && (p[i] != '6') && (p[i] != '7') && (p[i] != '8') &&
        (p[i] != '9') && (p[i] != '0'))
      error = 1;
  }
  if (error == 1) {
    cerr << "Bad integer";
  } else {
    int p1 = atoi(p);
    if (p1 > 0) {
      while (p1 > 1) {
        a = a1 * a;
        p1--;
      }
    } else {
      if (p1 < 0) {
        a = 1 / a;
        while (p1 < -1) {
          a = a / a1;
          p1++;
        }
      } else
        a = 1;
    }
  }
  return a;
}
int rol(int a) { return (a << 1); }
int ror(int a) { return (a >> 1); }
int nott(int a) { return (!a); }
int andd(int a, int b) { return (a & b); }
int orr(int a, int b) { return (a | b); }
int main() {
  while (1) {
    cout << endl
         << "Select the operation [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
    char operand;
    cin >> operand;
    char a1[10];
    char b1[10];
    int a, b, error;
    switch (operand) {
      case '+':
        cout << "Enter the first figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << "Enter the second figure" << endl;
          cin >> b1;
          if (!check(b1)) {
            cout << add(atoi(a1), atoi(b1)) << endl;
          }
        }
        break;
      case '-':
        cout << "Enter the first figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << "Enter the second figure" << endl;
          cin >> b1;
          if (!check(b1)) {
            cout << sub(atoi(a1), atoi(b1)) << endl;
          }
        }
        break;
      case '*':
        cout << "Enter the first figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << "Enter the second figure" << endl;
          cin >> b1;
          if (!check(b1)) {
            cout << mul(atoi(a1), atoi(b1)) << endl;
          }
        }
        break;
      case '/':
        cout << "Enter the first figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << "Enter the second figure" << endl;
          cin >> b1;
          if (!check(b1)) {
            if (atoi(b1) != 0) {
              cout << div(double(atoi(a1)), atoi(b1)) << endl;
            } else
              cout << "Error.There are 0 in the denominator " << endl;
          }
        }
        break;
      case '%':
        cout << "Enter the first figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << "Enter the second figure" << endl;
          cin >> b1;
          if (!check(b1)) {
            cout << mod(atoi(a1), atoi(b1)) << endl;
          }
        }
        break;
      case '^':
        cout << "Enter a figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << pow((double)atoi(a1));
        }
        break;
      case '<':
        cout << "Enter a figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << rol(atoi(a1)) << endl;
        }
        break;
      case '>':
        cout << "Enter a figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << ror(atoi(a1)) << endl;
        }
        break;
      case '!':
        cout << "Enter a figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << nott(atoi(a1)) << endl;
        }
        break;
      case '&':
        cout << "Enter the first figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << "Enter the second figure" << endl;
          cin >> b1;
          if (!check(b1)) {
            cout << andd(atoi(a1), atoi(b1)) << endl;
          }
        }
        break;
      case '|':
        cout << "Enter the first figure" << endl;
        cin >> a1;
        if (!check(a1)) {
          cout << "Enter the second figure" << endl;
          cin >> b1;
          if (!check(b1)) {
            cout << orr(atoi(a1), atoi(b1)) << endl;
          }
        }
        break;
      default:
        cout << "Error" << endl;
    }
  }
  return 0;
}
