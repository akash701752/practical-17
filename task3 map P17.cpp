/*  
    Practical 17
    Que 17.3  : 
    Map:
    1. Insert elements into a <int, string> map
    2. insert elements in random order
    3. Iterate this map using iterator and print its keys and values
    4. Find an element as key from this map
    5. assigning the elements from map1 to map2
    6. remove all elements with key = x (any key present in map)
    7. Find size, max size of a map
    8. checks if this map is empty or not
    9. Clear a map
    
*/ 
#include<iostream>
#include<map>

using namespace std;
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A"<<endl ;
    map <int , int> map1 ;
    map1.insert(pair<int, int>(1, 40));
    map1.insert(pair<int, int>(2, 30));
    map1.insert(pair<int, int>(3, 60));
    map1.insert(pair<int, int>(4, 20));
    map1.insert(pair<int, int>(5, 50));
    map1.insert(pair<int, int>(6, 50));
    map1.insert(pair<int, int>(7, 10));
    //printing map
    map<int, int>::iterator it;
    cout << "\nThe map1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    
    for(it= map1.begin();it!=map1.end();++it)
    {
        cout<<"\t"<<it->first<<"\t"<<it->second <<endl;
    }
    //Assigning map1 to map2
    map <int,int> map2(map1.begin(),map1.end()) ;
    cout<<"Printing Elemnts of Map 2 "<<endl ;
    for(it= map2.begin();it!=map2.end();++it)
    {
        cout<<"\t"<<it->first<<"\t"<<it->second <<endl;
    }
    
    //Finding Key in Map
    cout<<"Finding Key 3 in Map "<<endl ;
    it =map1.find(3) ;
        cout<<"\t"<<it->first<<"\t"<<it->second <<endl ;
    // Removing a element 
    cout<<"Removing Element with key 4 " ;
    map2.erase(4) ;
    cout<<endl ;
    for(it= map2.begin();it!=map2.end();++it)
    {
        cout<<"\t"<<it->first<<"\t"<<it->second <<endl;
    }
    //Size and Max size 
    cout<<"The size of Map1  is : "<<map1.size() <<endl ;
    cout<<"The size of Map2  is : "<<map2.size() <<endl ;
    cout<<"The MAX size of Map1  is : "<<map1.max_size() <<endl ;
    cout<<"The MAX size of Map2  is : "<<map2.max_size() <<endl ;
    
    // Check for emptyness
    if(map1.empty()==1)
        cout<<"MAP 1 is Empty "<<endl ;
    else
        cout<<"MAP 1 is NOT Empty "<<endl ;
    
    cout<<"Clearing Map 1"<<endl ;
    map1.clear() ;
    return 0 ;
}
