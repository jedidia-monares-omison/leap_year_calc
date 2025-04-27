#include <iostream>

int main() {
  
  int year;

  std::cout << "Year: \n";
  std::cin >> year;

  if ((year > 999) && (year <= 9999))
  {    //checks if year is four digits
    if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
        std::cout << "The year falls on a leap year!\n";
      }
    else{
        std::cout << "The year does not fall on a leap year!\n";
      } 
    }
  else{
    std::cout << "The year must have 4 digits!" << std::endl;
  }  
}
