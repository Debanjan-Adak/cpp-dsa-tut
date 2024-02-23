#include <iostream>
using namespace std;
int binsearch(int arr[], int size, int key)
{
    int mid, start = 0, end = size - 1;
    

    while (start <= end)
    {
        // cout<<"hello loop";
        mid = (start + end) / 2;
        if (arr[mid] > key)
        end = mid-1 ;
        
        else if (arr[mid] < key)
        start = mid+1 ;
        else
        return mid;
 
        
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 6, 7, 9, 15, 21, 35, 47, 89};
    int n, f, l, m;
    cout << "Enter the element you want to search: " << endl;
    cin >> n;
    m = binsearch(arr, sizeof(arr) / sizeof(int), n);
    //cout << "main";
    if (m == -1)
        cout << "Value not found :-(" << endl;
    else
        cout << "Value found at index: " << m << endl;
    return 0;
}
