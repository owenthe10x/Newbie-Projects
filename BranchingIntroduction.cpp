#include <iostream>
using namespace std;

int mood;

void IfElse(int mood){
    if(mood == 1){
        cout << "Your mood is Happy, so you should wear White!";
    }else if(mood == 2){
        cout << "Your mood is Sad, so you should wear Black!";
    }else if(mood == 3){
        cout << "Your mood is Angry, so you should wear Red!";
    }else if(mood == 4){
        cout << "Your mood is Tired, so you should wear Grey!";
    }else if(mood == 5){
        cout << "Your mood is Excited, so you should wear Yellow!";
    }else cout << "You entered the wrong code!!";
}

void SwitchCase(int mood){
    switch(mood){
        case 1:
            cout << "Your mood is Happy, so you should wear White!";
            break;
        case 2:
            cout << "Your mood is Sad, so you should wear Black!";
            break;
        case 3:
            cout << "Your mood is Angry, so you should wear Red!";
            break;
        case 4:
            cout << "Your mood is Tired, so you should wear Grey!";
            break;
        case 5:
            cout << "Your mood is Excited, so you should wear Yellow!";
            break;
        default:
            cout << "You entered the wrong code!!";
    }
}

main(){
    cout << "***Program to Choose Clothes Color Depending Your Mood***" << endl;


    cout << "\nThe Mood Code";
    cout << "\nHappy = 1";
    cout << "\nSad = 2";
    cout << "\nAngry = 3";
    cout << "\nTired = 4";
    cout << "\nExcited = 5" << endl;

    cout << "\nWhat is your mood? (1/2/3/4/5)\n";
    cin >> mood;

    cout << "Program If Else: "; IfElse(mood);
    cout << "\n\n";
    cout << "Program Switch Case: "; SwitchCase(mood);


    cin.get();
    return 0;
}
