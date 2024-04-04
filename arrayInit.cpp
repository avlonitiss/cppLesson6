#include <iostream>
using namespace std;
#define N 10
int main()
{
int newArray[N];
int n = 0;
for(n=0; n<N; n++) {
newArray[n] = n;
cout << newArray[n] << endl;
}
return 0;
}
