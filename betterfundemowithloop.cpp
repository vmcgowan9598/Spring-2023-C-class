//betterfundemowithloop.java
#include <iostream>
using namespace std;
#include <stdlib.h>
int Product(int n, int p)  //declarator
{
return n*p;        //function body
}
int Sum(int n, int p)
{
return n+p;
}
int Difference(int n, int p)  //declarator
{
return n-p;        //function body
}
float Dividend(float n, float p)
{
return n/p;
}
int main()
{
int fnumb, snumb, i, s;
cout<<"Keep entering numbers for your equations, to stop, enter 9999 "<<endl;   
cout<<"Enter first number ";   
cin>>fnumb;
while (fnumb != 9999)
{
cout<<"\nEnter second number ";  
cin>>snumb;
cout<<"Do you want to add (enter 1), multiply (enter 2), subtract (enter 3) or divide(enter 4)";   
cin>>s;
if (s==1)
   cout<<" The numbers added are:  "<<Sum(fnumb, snumb);
else
  if (s==2)
   cout<<"The numbers multiplied are:  "<<Product(fnumb, snumb);
  else
    if (s==3)
      cout<<"The numbers multiplied are:  "<<Difference(fnumb, snumb);
   else
    if (s==4)
       cout<<"The numbers multiplied are:  "<<Dividend(fnumb, snumb);
    else
      if (s==9999)
         cout<<"Thanks for using my calculator"<<endl;
      else
         cout<<"You entered an invalid number"<<endl;
cout<<"\nEnter first number ";   
cin>>fnumb; 
	} 
    system("PAUSE");  
    return 0;
}
