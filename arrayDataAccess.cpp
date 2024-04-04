#include <iostream>
using namespace std;
#include <iomanip>
#define N 5
int main () {
int newArray[N];
int n = 0, p =0;
// Initializing elements of array seperately
for (n=0; n<N; n++) {
newArray[n] = n+50; }
// print heading
cout << "Element" << setw(10) << "Value" << endl;
// print element's value in loop
for (p=0; p<N; p++) {
cout << setw(5) << p << setw(10) << newArray[p] << endl;
}
return 0;
}
