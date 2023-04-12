//battingavg.cpp
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
int hits, atbats;
double bavg, mavg;


hits = 3;
atbats = 10;
bavg = hits / atbats;
cout<<"The batting avg (by /) is: "<<bavg;
mavg = hits % atbats;
mavg = mavg *.111;
cout<<"\nThe batting avg (by %) is: "<<mavg<<endl;
system("PAUSE");
return 0;
}
