# Signed-and-unsigned-data-types
#include <iostream>
using namespace std;
void printarray (int arg[], int length) {
for (int n=0; n<length; n++)
cout << arg[n] << " "; cout << "\n";
}
int main ()
{
int firstarray[] = {5, 10, 15};
int secondarray[] = {2, 4, 6, 8, 10};
printarray (firstarray,2);
printarray (secondarray,5);
return 0;
}
// The function above outputs a specific amount of values from the arraydepending on the specified in the function's prototype.



#include <iostream>
#include <cmath>
using namespace std;
//overflow
 signed long int value1=2147483650;
 
//underflow
 signed long  int value2=-2147483650;
 
 //overflow
 unsigned long int value3=429496729989;

//underflow
unsigned long int value4=-4294967299;

//overflow
signed short int value5=32769;
//underflow
signed short int value6=-32769;
//overflow
unsigned short int value7=65539;
//underflow
 unsigned short int value8=-65542;
 
 
//overflow
 signed char value9= 129;
 //underflow
 signed char value10 =-129;
 //overflow
 unsigned char value11= 258;
 //underflow
 unsigned char value12= -25;
 
 int main()
{
	//int unsigned and signed 
	//short
	//char
  cout<<value1<<endl;
  cout<<value2<<endl;
  cout<<value3<<endl;
  cout<<value4<<endl;
  cout<<value5<<endl;
  cout<<value6<<endl;
  cout<<value7<<endl;
  cout<<value8<<endl;
  cout<<value9<<endl;
  cout<<value10<<endl;
  cout<<value11<<endl;
  cout<<value12<<endl;
  return 0;
  }
