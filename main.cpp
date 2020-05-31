//NASA Spaceapps. Purify the Air Supply challenge. 
//Date: 31/05/2020
/*
This code inlcudes a preview of the OOP codificaion structure of 
our proposal, by creating a class that will represent
each mask connected to the monitoring unit, and an specific
class called CPU for the monitoring unit
We also inlcuded a preview of the interface when using 
the monitoring device, showcasing the functions that the 
product includes.
*/

#include <iostream> 
#include <cstring>
using namespace std;


class Mask {
public:
    //attributes
    double userTemperature;
    int Battery;
    double usageHours;
    int MaskId;
    string proprietary;


    //methods
    void filterAir();
    void setMaskId();
    void consultTemperature();
    void getBatteryLevel();

};

class CPU {  //This class represents an external monitoring device 
public:
//methods
  int amountOfMasks;
  int masksConnected[]; //array that contains the connected masks id's
  
//atributes
  CPU();
  void addMask();
  void deleteMask();
  void consultTemperature();
  void consultBattery();
};

CPU::CPU(){
amountOfMasks = 0;
}


int main() {

  CPU proccesingUnit;


  // graphic interface
  cout << "*******************************************" << endl;

  cout << "* Welcome to the user interface prototype *" << endl;
  cout << "*******************************************" << endl << endl;

  int decision;
  int tempID; 

  cout << "Please choose an option from the following menu:" <<endl;
  cout << "1. View paired masks list"  <<endl;
  cout << "2. Pair a new mask "  <<endl;
  cout << "3. Remove a mask from system "  <<endl;
  cout << "4. Print the information of a specific mask "  <<endl << endl;

  cout << "Please introduce the number of your choice "  <<endl;

  cin >> decision;

  if ( decision>=5 || decision < 1){
    cout <<"Invalid input."<< endl;

  }
  else {
    switch (decision){
      case 1:
        cout <<"Showing the list of the connected masks"<< endl;
        
        
        
        cout <<"Thanks for testing our prototype!"<< endl;
        break;
      case 2:
        cout <<"Introduce the masks' ID number "<< endl;
        proccesingUnit.amountOfMasks += 1;
        cout <<"Introduce the propietary's name "<< endl;
        cout <<"Thanks for testing our prototype!"<< endl;

        break;
      case 3:
        cout <<"Please introduce the ID of the mask you want to remove"<< endl;
        cout <<"Thanks for testing our prototype!"<< endl;
        break;
      case 4:
        cout <<"Please introduce the ID of the mask you want to monitor"<< endl;
        cin >> tempID;
        cout <<"Thanks for testing our prototype!"<< endl;
        break;
      }
    }

  
  cout <<endl << "*******************************************" << endl;

  cout << "*  Project Aircules. Interface prototype  *" << endl;
  cout << "*******************************************" << endl << endl;



    return 0;
  }