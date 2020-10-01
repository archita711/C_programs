#include<iostream>
#include<algorithm>
using namespace std;
void display(int *array, int size) {
for(int i = 1; i<=size; i++)
cout << array[i] << " ";
cout << endl;}
int getMax(int array[], int size) {
int max = array[1];
for(int i = 2; i<=size; i++) {
if(array[i] > max)
max = array[i];}
return max; }
void countSort(int *array, int size) {
int output[size+1];
int max = getMax(array, size);
int count[max+1];     
for(int i = 0; i<=max; i++)
count[i] = 0;     
for(int i = 1; i <=size; i++)
count[array[i]]++;  
 for(int i = 1; i<=max; i++)
count[i] += count[i-1];     
for(int i = size; i>=1; i--) {
output[count[array[i]]] = array[i];
count[array[i]] -= 1; }
for(int i = 1; i<=size; i++) {
array[i] = output[i]; }}
int main() {
int n;
printf("\n\t\t\t>>>>>>>>>>>>>>> COUNTING SORT PROGRAM <<<<<<<<<<<<<<<");
printf("\n\n\t\t------------By Souraj Mukhopadhyay (17SCSE101049) -------------");
cout << "\nEnter the number of elements: ";
cin >> n;
int arr[n+1];       //create an array with given number of elements
cout << "\nEnter elements:" << endl;
for(int i = 1; i<=n; i++) {
cin >> arr[i];}
cout << "\nArray before Sorting: ";
display(arr, n);
countSort(arr, n);
cout << "\nArray after Sorting: ";
display(arr, n);}

