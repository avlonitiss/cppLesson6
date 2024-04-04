#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
int i, num;
srand(time(NULL));
for (i=0; i < 5; i++)
{
num = rand()%10; // num will be a random number from 0 through 9
cout << "\nnum is : " << num <<endl;
}
return 0;
}
