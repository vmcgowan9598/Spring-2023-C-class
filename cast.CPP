//cast.cpp
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
#include<stdlib.h>
int main()
{
    int x;

cout<<setiosflags(ios::fixed|ios::showpoint)<<setprecision(1);
cout<<"3.5 cast to and integer is: "<<int(3.5)<<endl;
cout<<"3 cast to a float is: "<<float(3)<<endl;
//float x=3.0;
cout<<"3 cast to a double is: "<<double(3)<<endl;
cout<<"3 cast to a char is "<<char(3)<<endl;
system("PAUSE");
return 0;
}
