#include <iostream>
#include<fstream>
#include <sstream>
using namespace std;
int main()
{int k;
int m=0;
string s;
  /* ofstream ofs("prime.txt",ios::app);
   for(int i=2;i<=1000;i++)
   {k=1;
       for(int b=i-1;b>1;b--)
       {
           if(i%b==0)
           {
             k=0;
           }
       }
       if(k==1)
       {
         //  cout<<" "<<i;
           ofs<<i<<"\n";
       }
   }
   cout<<"File Create Successfully";
   ofs.close();*/

   ifstream ifs("prime.txt");
   while(getline(ifs,s))
   {
       stringstream geek(s);
       geek>>k;
       cout<<k<<" ";
       m=m+k;
   }
   cout<<"\n\n\n\n"<<m;
    ifs.close();
    return 0;
}
