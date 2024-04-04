#include <iostream>
using namespace std;
int main() {
// initialize an array without specifying size
double numbers[] = {7.1, 5.33, 6.55, 12.4, 35.0, 27.3};
double sum = 0;
int count = 0;
double average;
cout << "The numbers are: ";
// print array elements use of range-based for loop
for (const double &n : numbers) {
cout << n << " ";
sum += n; // calculate the sum
++count; // count the no. of array elements
}
cout << "\nTheir Sum = " << sum << endl; // print the sum
average = sum / count; // find the average
cout << "Their Average = " << average << endl;
return 0;
}
