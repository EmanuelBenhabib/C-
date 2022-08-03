#include<bits/stdc++.h>
using namespace std;

array<int> arr;
int main ()
{
int a;
int b;
int c;
cin >> a, b, c;
for (int i = 0; i < b; i++) {
for (int c = 0; c < b-1; c++) {
if (arr[c] > arr[c+1]) {
swap(arr[c], arr[c+1]);
}
}
}


}
