#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
 
class Train
{
  public:
  int train_num;
  string destination;
  string dest_time;
};
 
int main() {   
    int i = 0;
    Train list[5];
    
    while (i < 5) {        
        cout << "Please, enter information for train number " << i + 1 << endl;
        cout << "Destination of train: ";
        cin >> list[i].destination;
        list[i].train_num = i + 1;
        cout << "Time of departure: ";
        cin >> list[i].dest_time;        
        cout << endl;
        i = i + 1;
    }
        
    int num = 0;
    bool correct_number = false;
    i = 0;
    cout << "Please, enter number of necessary train: ";
    cin >> num;
    cout << endl;
    
    while (i < 5) {
      if (list[i].train_num == num) {
        cout << "Train number " << i + 1 << " departuring to " << list[i].destination << " in " << list[i].dest_time;
        correct_number = true;
      }
      i = i + 1;
    }

    if (correct_number == false) {
     cout << "Error, wrong number" << endl;
     exit(0);
    }    
}
