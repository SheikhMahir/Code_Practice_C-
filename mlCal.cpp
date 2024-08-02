#include<iostream>
using namespace std;
int main()
{
    string userInput;
    cout << "Enter your calculation : ";
    cin >> userInput;
    cout << userInput.size();
    int a = userInput;
    cout << a << endl;
    // 235 + 4567 + 987
    /*for(int i=0; i <userInput.size(); i++){
        int currentValue=0;
        string currentOperator = '';
        if(userInput[i]== '+' || userInput == '-' || userInput == '*' || userInput=='/'){
            currentOperator = userInput[i];
        }
        else{

        }


    }*/
}

