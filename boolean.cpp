//boolean.cpp
#include <iostream>
using namespace std;
#include <stdlib.h>
//typedef int Boolean;
//const Boolean true=1;
//const Boolean false=0;

int main()
{
	int SATscore;
	float GPA;
	bool status;

	cout<<"Enter the student's SAT score ";
	cin>>SATscore;
	if (SATscore >=900)
	{  //if
		status = true;
	    cout<<"\nEnter the student's GPA ";
	    cin>>GPA;
	    if (GPA >= 2.5)
		   status = true;
	    else
	    	status = false;
    }  //end if
    else 
		status = false;
	if (status)
		cout<<"You've been accepted!"<<endl;
	else
		cout<<"Sorry, you're rejected."<<endl;
    system("PAUSE");
	return 0;
}
