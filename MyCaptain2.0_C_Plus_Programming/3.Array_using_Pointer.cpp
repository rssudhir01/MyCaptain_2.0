#include <iostream>
using namespace std;

int main()
{
    int i, n, j;
    int *p;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of array : \n" ;

    for( i = 0; i < n; i++)
    {
        cin >> j;
        arr[i] = j;
    }
    p = arr;

    cout << "You entered : \n";
    for( i = 0; i < n; i++)
    {
        cout << *p << "\n";
        ++p;
    }

}
