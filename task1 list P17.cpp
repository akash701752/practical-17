/*  
    Practical 17
    Que 17.1  : 
    List:
    1. Iterate a int list using iterator and print it
    2. Find size of a list
    3. Sort a list
    4. Reverse a list
    
*/ 

#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A"<<endl ;
    list<int> myList{3,2,1};
    //iterators
    list<int>::iterator p = myList.begin();
    cout<<"The List is "<<endl ;
    while (p != myList.end())
    {
        cout << *p << " ";
        p++;
    }
    // list.size()
    cout << "\nSize of List : " << myList.size() << endl;
    //list.sort()
    myList.sort();
    cout << "\nList after sorting: " << endl;
    for (auto itr = myList.begin(); itr != myList.end(); itr++)
    {
        cout << *itr << " ";
    }
    // list.reverse()
    myList.reverse();
    cout << "\n\nList after reversing: " << endl;
    for (auto itr = myList.begin(); itr != myList.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    return 0 ;
}
