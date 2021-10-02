#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "WELCOME TO DICE ROLLER 101\n\n" << endl;

    char roll;

    while(true){
        cout << "Roll Dice? (y/n): ";
        cin >> roll;
        if(roll == 'y'){
            cout << "Result: " << 1 + (rand() % 6);
        } else if(roll == 'n'){
            cout << "END"<< endl;
            break;
        } else{
            cout<< "Wrong command, insert only yes/no!"<<endl;
        } cout << endl;


    }


}
