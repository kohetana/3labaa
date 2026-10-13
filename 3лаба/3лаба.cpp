/* Author: Kuchina M.A.*
 * Date : 13.10.2026   *
 * Option 10           *
 * Name : 3 labs       *
 ***********************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  
  double l = 0.015;
  double rho = 1.1;
  double mu = 1.8e-5;
  double W_values[5];

  cout << "Enter 5 speed values W " << endl;
    
  for (int i = 0; i < 5; ++i) {
        cin >> W_values[i];
  }

  cout << "\n----------------------------------------" << endl;
  cout << "|   W (м/с)  |    Re     |    xi     |" << endl;
  cout << "----------------------------------------" << endl;

  for (int i = 0; i < 5; ++i) {
  double W = W_values[i];

  double Re = (W * l * rho) / mu;

  double xi;
  if (Re < 2500) {
  xi = 2.62 / pow(Re, 0.65);
  } else {
  xi = 0.125 / pow(Re, 0.26);
  }

  cout << " | " << setw(10) << fixed << setprecision(2) << W
       << " | " << setw(9) << fixed << setprecision(2) << Re
       << " | " << setw(9) << fixed << setprecision(5) << xi << " |" << endl;
    }

    cout << "----------------------------------------" << endl;

    return 0;
}