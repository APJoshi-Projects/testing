
#include <iostream>
using namespace std;

int main ()
{
	int x=1,i,y; 
for(i=0;i<5;i++) 
    x+=3; 
x%=5;  
if(x%2==0) 
   cout<<"x is even"; 
else 
   cout<<"x is odd";
	return 0;
}