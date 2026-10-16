/******************************
* Автор:   Кучина Мария       *
* Задание: Циклы с ветвлением *
* Вариант: 10                 *
******************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

  double channelWidth = 0.015;
  double gasDensity = 1.1;
  double dynamicViscosity = 0.000018;
  double reynoldsThreshold = 2500.0;
  double lowReFactor = 2.62;
  double lowReExponent = 0.65;
  double highReFactor = 0.125;
  double highReExponent = 0.26;
  double velocityCount = 5;
  double gasVelocity;
  double reynoldsNumber;
  double resistanceCoefficient;

  cout << "Enter " << velocityCount << " speed values W" << endl;

  for (int velocityIndex = 0; velocityIndex < velocityCount; ++velocityIndex) {
      cin >> gasVelocity;

      reynoldsNumber = gasVelocity * channelWidth * gasDensity / dynamicViscosity;

      if (reynoldsNumber < reynoldsThreshold) {
            resistanceCoefficient = lowReFactor / pow(reynoldsNumber, lowReExponent);
      }
      else {
            resistanceCoefficient = highReFactor / pow(reynoldsNumber, highReExponent);
      }

   cout << " | " << setw(10) << fixed << setprecision(2) << gasVelocity
          << " | " << setw(9) << fixed << setprecision(2) << reynoldsNumber
          << " | " << setw(9) << fixed << setprecision(5) << resistanceCoefficient
          << " |" << endl;
  }

  return 0;
}