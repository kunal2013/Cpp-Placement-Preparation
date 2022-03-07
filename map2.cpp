// map
// mysirG

# include <iostream>
# include <map>
# include <string>
using namespace std ;

int main()
{
    map <int,string> customer ;  // string is key and int is value
    // insert at compile time
    customer [100] = "Gajendra" ;
    customer [123] = "Dilip" ;
    customer [145] = "Aditya" ;
    customer [200] = "Rajesh" ;

    map <int,string> c {{100,"prity"},{123,"radha"},{145,"ganga"},{200,"yamuna"} } ;

    cout << customer[100] << endl ;
    cout << customer [200] << endl<<endl ;

    map<int,string> :: iterator p = customer.begin() ;
    while (p != customer.end())
    {
        cout << p->second << endl ;    // also can use (*p).second
        p++ ;
    }
}

/*  Output

Gajendra
Rajesh

Gajendra
Dilip
Aditya
Rajesh

*/
