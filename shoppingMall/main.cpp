#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "               WELCOME TO THE SHOPPING MALL" << endl;
    cout << "Select One Of The Following: "<<endl<<"1. Only Mobile\n 2. Only Powerbank\n 3.Mobile With Powerbank\n 4. nothing\n" << endl;
    cin>>num;

    switch(num)
    {

    case 1:
        cout<<"You Got 5% Discount"<<endl;
        break;
    case 2:
        cout<<"You Got 5% Discount"<<endl;
        break;
    case 3:
        cout<<"You Got 10% Discount"<<endl;
        break;
    case 4:
        cout<<"Press enter to EXIT"<<endl;
        break;
    default:
        cout<<"PLEASE SELECT THE VALID OPTION."<<endl;
        break;
    }
    return 0;
}
