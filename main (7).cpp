#include <iostream>  //basic input and output streams

using namespace std;

int farToCel(int degrees);
void getInput(double &measurement);
void getConversionChoice(char &conversionChoice);
void convert(double &measurement, char &conversionChoice);
void displayDegrees(double degress, char choice);

int main() {
double measurement;
char conversionChoice;

getInput(measurement);
  while (measurement >= 0){
    convert(measurement, conversionChoice);
  displayDegrees(measurement, conversionChoice);
    getInput(measurement);
  }
  return 0;
}  //end of main


void getInput(double &measurement){
  cout << "Enter degrees(negative quits): ";
  cin >> measurement;
}

void convert(double &measurement, char &conversionChoice){
  getConversionChoice(conversionChoice);
  //converts celcius to farenheit
  if (conversionChoice == 'f')
    measurement = (measurement * 9.0) / 5.0 + 32;
  //converts farenheit to celcius
  if (conversionChoice == 'c')
    measurement = (measurement - 32.0) * 5.0 / 9.0;
}

void getConversionChoice(char &conversionChoice){
  cout << "Would you like to convert to farenheit(f) or to celius(c): ";
  cin >> conversionChoice;
}

void displayDegrees(double degress, char choice){
  if (choice == 'c')
    cout << "Celcius: ";
  if (choice == 'f')
    cout << "Farenheit: ";
  cout << degress << endl;
}