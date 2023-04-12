//battingavgfile.cpp
#include <iostream>
#include <fstream>
using namespace std;
#include <stdlib.h>
float BattingAvg(int h, int ab)  //declarator
{
return (float)h/(float)ab;        //function body
}
int main()
{
ifstream input;      
ofstream output; 
input.open("playerdata.txt");    //open the files
output.open("c:\\battingavg.txt");
int i, hits, atbats;
string name;
for (i=1; i<5; i++)
{
input>>name>>hits>>atbats;
output<<name<<" has "<<hits<<" hits and "<<atbats<<" at bats with a batting avg of "<<BattingAvg(hits, atbats)<<endl;   //call to function
}
system("PAUSE");
return 0;
}

