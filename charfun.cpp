#include <string>
#include <iostream>

using namespace std;

int main()
{
   char var1;
   cout<<"Please enter a letter";
   cin>>var1;
   if (islower(var1))
      cout<<"It's lowercase";
   else
      cout<<"it's upper";
system("PAUSE");
return 0;


}
