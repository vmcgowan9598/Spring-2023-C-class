//battingavgfun.cpp
#include <iostream>
using namespace std;
#include <stdlib.h>
float BattingAvg(int h, int ab)  //declarator
{
return (float)h/(float)ab;        //function body
}
int main()
{
int i, hits, atbats;
for (i=1; i<4; i++)
{
cout<<"How many hits does player have? ";
cin>>hits;
cout<<"How many at bats does player have? ";
cin>>atbats;
cout<<"Player has "<<hits<<" hits and "<<atbats<<" at bats with a batting avg of "<<BattingAvg(hits, atbats)<<endl;   //call to function
}
system("PAUSE");
return 0;
}

