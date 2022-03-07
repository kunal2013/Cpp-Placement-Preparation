// Map data structure
// It store values with a key
// used to make Hash-table
// Map is an associative array

# include<iostream>
# include <map>
using namespace std ;

int main()
{
map <string, int> marksMap ;
marksMap["Harry"] = 98 ;
marksMap ["Jack"] = 59 ;
marksMap ["Rohan"] = 2 ;

marksMap.insert ({{"Kozume",169.2},{"Kuroo",187.7}}) ;
map<string,int> :: iterator iter ;  // start inserting
                                                          // iter is comparable to pointers in array i.e. define a pointer and assign address
for(iter = marksMap.begin(); iter != marksMap.end(); iter++)
{
    cout <<(*iter).first<<" "<<iter->second <<"\n" ;    // first and second represent data member of that position.
}
cout << "The size is : "<<marksMap.size() << endl ;
cout << "The max size is : "<<marksMap.max_size() << endl ;   // this much element
cout << "The empty's return value is : "<<marksMap.empty() << endl ;   // 0 for not empty
return 0 ;
}

// output

/*

Harry 98
Jack 59
Kozume 169
Kuroo 187
Rohan 2
The size is : 5
The max size is : 256204778801521550
The empty's return value is : 0

*/

