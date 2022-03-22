#include <iostream>

using namespace std;

int main()
{
    float balance=1000;
    int num1;
    float amnt;
    float depbal;
    do
    {
        cout<<"enter the number for the following operation"<<endl;
        cout<<"1. WITHDRAWAL 2. DEPOSIT  3.CHECK BALANCE"<<endl;
        cin>>num1;

        switch(num1)
        {

            case 1:

                cout<<"enter the amount for withdrawal.";
                cin>>amnt;
                if(amnt>1000){
                cout<<"please enter valid ammount."<<endl;
                }
                else
                {
                    balance=balance-amnt;
                    cout<<"your" <<amnt << "has withdrawaled. your current balance is "<<balance<<endl;
                }
                break;
        case 2:
                cout<<"enter amount you want to deposit "<<endl;
                cin>>depbal;
                balance = balance + amnt;
                cout<<"successfully deposited.";
                cout<<"your current balance is "<<balance<<endl;
                break;
        case 3:
                cout<<"your current balance is "<<balance<<endl;
                break;
                default:

        case 4:
            exit(0);
        default:
            cout<<"enter valid option";
                break;

        }
    }while(num!=4);
}
