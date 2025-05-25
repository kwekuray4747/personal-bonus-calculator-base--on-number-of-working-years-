#include <iostream>

using namespace std;
#include <cmath>
int main() {
//this programe is used to calculate the bonus of workers in a particular company based on the number of years they have worked there

    cout<<"WELCOME TO VANCETECH COMPANY LIMITED"<<endl;
    cout<<"please enter your name"<<endl;
    string name;
    getline(cin,name);

    //now ask the worker how log has he be working in the company
    cout<<"please for how many years have you been working in this companey"<<endl;
int number_of_working_years;
    cin>>number_of_working_years;

    //ask for confirmation
    cout<<"please please confirm; yes or no ?"<<endl;
string confirmation;
    cin>>confirmation;
    if(confirmation=="yes") {

if (number_of_working_years<=5) {
double bonus_rate=0.05;

        cout<<"Now you can proceed to check your bonus. "<<endl;
double bonus;
        bonus = number_of_working_years * bonus_rate;
cout<<"therefore your bonus is "<<bonus<<"%"<<endl;
}

        else if (number_of_working_years>=6) {
            double bonus_rate=0.1;
            cout<<"Now you can proceed to check your bonus. "<<endl;
            double bonus;
            bonus = number_of_working_years * bonus_rate;
            cout<<"therefore your bonus is "<<bonus<<"%"<<endl;



        }


        }

else if (confirmation=="no") {
cout<<"Please go back and re-enter the number of working years. "<<endl;



}



    }










