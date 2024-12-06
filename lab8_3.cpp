/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include <string>
using namespace std;



int main(){

    int age,height;
    long double bounty;
    string Character;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100)
        {
            Character = "Chopper";
        }
        else if(height < 180)
        {
            Character = "Usopp";
        }
        else if(height >= 180)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            bounty = bounty/1000000;
            if (bounty > 1100)
            {
                Character = "Zoro";
            }
            else Character = "Sanji";
            
        }
        

    }
    else{
        if (age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            bounty = bounty/1000000;
            if (bounty > 500)
            {
                Character = "Jinbe";
            }
            else Character = "Franky";
            
        }
        else {
            Character = "Brook";
        }
        

    }

    cout << "Your character = " << Character;
   
    
    /*cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your bounty: ";
    cin >> bounty;*/



}

