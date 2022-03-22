#include <iostream>

using namespace std;

int main()
{
    int meterval;
    cout<<"enter Metter-Value"<<endl;
    cin>>meterval;

    if(meterval>100)
    {
        float unitval=((meterval-100)*6.95)+(5.95*100);
        cout<<"The chargeble amount is ; "<<unitval<<endl;
    }
    else
   {
       int unitval=5.95*meterval;
       cout<<"The chargeble amount is: "<<unitval<<endl;
   }

    return 0;
}
