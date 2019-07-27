#include <iostream>
#include <string>
using namespace std;

int main()
{

//create variables
int pin;
unsigned int number_of_digits = 0;
//prompt user
  cout << "Please input your four digit pin number: ";
  cin >> pin;
//loops over input to count digits
//saves the counted digits in the variable number_of_digits
do {
     ++number_of_digits;
     pin /= 10;
} while (pin);

//prints according to the number of digits input
if(number_of_digits == 4){
  cout << "Your pin has been accepted." << endl;
} else {
  cout << "Dude, I asked for a four digit number." << endl;
}
return 0;
}


