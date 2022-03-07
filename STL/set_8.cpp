// C++ program to create Set of Pairs from vector

#include <iostream>
# include <set>
# include<vector>
# include <utility>
using namespace std;

typedef pair<int, int> pairs;

// const needed to be assigned with defining and can not be changed afterwards.
void display(const set<pairs>& s)     // const is not necessary
{
	bool found = false;
	/* range-based for loops
	  syntax :
       for ( variable : collection/sequence)
	  It executes a for loop over a range especially container.
	  It is more readable equivalent to typical for loop.
	     */
    for (auto const &x : s)
    {
		found = true;
		cout << "(" << x.first << ", " << x.second << ")" << " ";
	}
	if (not found)
    {
		cout << "No valid pair\n";
	}
}

int main()
{
	vector<int> v{ 2, 3, 1, 6, 8, 8, 10, 2 };
	set<pairs> s ;
	for (int i = 0; i < v.size() - 1; i++)    // second last will work properly enough for making pairs
        {
		for (int j = i + 1; j < v.size(); j++)
		 {
			if (v[i] % 2 == 0 && v[j] % 2 == 0)     // check for even number
			{
				pairs x = make_pair(v[i], v[j]);       // makes pairs of even numbers
				s.insert(x);                                      // inserts into the set
			}
		}
	}
	display(s);            // to display the pairs
	s.clear();      // to clear the set
}
