// testing some cases in vector of vectors

# include<iostream>
# include <vector>
using namespace std ;

int main()
{
  vector<vector<int>> vec{ { 1, 2, 3 },
                                                 { 4, 5, 6 },
                                                 { 7, 8, 9, 4 },
                                                 { 22 } };

  vector<vector<int>> vec1 = vec ;
  for (int i = 0 ; i <vec1.size() ; i++)
    {
        for ( auto it = vec1[i].begin() ; it != vec1[i].end() ; it++)
            cout << *it << " ";
        cout << endl;
    }

    //////////////////////////////////////////
    vec[1].erase(vec[1].begin()+1) ;
    cout <<"\n#########\n\n" ;
      for (int i = 0 ; i <vec.size() ; i++)
    {
        for ( auto it = vec[i].begin() ; it != vec[i].end() ; it++)
            cout << *it << " ";
        cout << endl;
    }

    ////////////////////////////////////////
      auto it = vec.begin() ;
      vec.erase(it+1) ;
         cout <<"\n*************\n\n" ;
      for (int i = 0 ; i <vec.size() ; i++)
    {
        for ( auto it = vec[i].begin() ; it != vec[i].end() ; it++)
            cout << *it << " ";
        cout << endl;
    }

    return 0 ;
}



