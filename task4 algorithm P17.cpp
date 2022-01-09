/*  
    Practical 17
    Que 17.4  : 
    Algorithm :
    1. Covert Array into Vector
    2. Sort an Vector
    3. Reverse a vector
    4. Max element in a Vector
    5. Min element in a Vector
    6. Occurrences of x in vector
    7. Sort an Array
    8. Binary Search in an Array
    
*/ 
#include<iostream>
#include<algorithm>
#include<vector>

void show(int arr[],int) ;
void BinarySearch() ;
using namespace std;
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A"<<endl ;
    int arr[5] = {1,3,2,5,4} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v1(arr, arr+n);
    //printing vector
    cout<<"Vector Using Array" <<endl ;
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i <<" " ;
    }
    //Sort a vector
    cout<<"\nSorting a Vector Using STL "<<endl ;
    sort(v1.begin(),v1.end()) ;
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i <<" " ;
    }
    //Reversing a vector 
    cout<<"\nReversing a Vector Using STL "<<endl ;
    reverse(v1.begin(),v1.end()) ;
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i <<" " ;
    }
    // MAx and Min Element in Vector 
    cout<<"\nMax Elemnet in Vector is : "<<*max_element(v1.begin(),v1.end()) <<endl ;
    cout<<"Min Elemnet in Vector is : "<<*min_element(v1.begin(),v1.end()) <<endl ;
    //Occurance of x in Vector
    cout<<"\nOccurrence of 3 in Vector : "<<count(v1.begin(),v1.end(),3) <<endl ;
    // Sort a Array 
    int i , j ;
    cout<<"\nSorting of Array "<<endl ;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-1-i;j++) // Bibble Sort
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j] ;
                arr[j]   = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i] <<" " ;
    }
    // Binary Search in Array 
    cout<<"\n\nBinary Search "<<endl ;
    BinarySearch() ;
    return 0 ;
}
void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" " ;
    }
}
void BinarySearch()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nBinary search \n";
    int num ;
    cout<<"Enter Number to Search in Array : ";
    cin>>num ;
    if (binary_search(a, a + asize, num))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    cout << "\n\nNow we want to search again";
    cout<<"\nEnter Number to Search in Array : ";
    cin>>num ;
    if (binary_search(a, a + asize, num))
        cout << "\nElement found in the array";
    else
    cout << "\nElement not found in the array";
}
