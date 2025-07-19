//This program calculates different kinds of currencies to US Dollars.
// C++ libraries used: iostream, iomanip
#include <iostream> 
#include <iomanip>

using namespace std; 
int main() {
  
  double pesos; 
  double reais; 
  double soles; 

  cout << "Enter number of Colombian Pesos: "; 
  cin >> pesos; 
  cout << "Enter number of Brazilian Reais: ";
  cin >> reais; 
  cout << "Enter number of Peruvian Soles: "; 
  cin >> soles; 

  double us; 
  //1 peso = 0.00025 USD
  //1 reais = 0.18 USD
  //1 soles = 0.28 USD 
  us = pesos*0.00025; 
  us += reais*0.18;
  us += soles*0.28;

  cout << fixed << setprecision(2); 
  cout << "US Dollars = $" << us << endl; 

  return 0;
  
}