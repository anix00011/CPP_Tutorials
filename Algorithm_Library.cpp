#LEXICOGRAPHICAL_COMPARE
The C++ function std::algorithm::lexicographical_compare() tests whether one range is lexicographically less than another or not. 
A lexicographical comparison is the kind of comparison generally used to sort words alphabetically in dictionaries.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
   vector<string> v1 = {"One", "Two", "Three"};
   vector<string> v2 = {"one", "two", "three"};
   bool result;

   result = lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());

   if (result == true)
      cout << "v1 is less than v2." << endl;

   v1[0] = "two";

   result = lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());

   if (result == false)
      cout << "v1 is not less than v2." << endl;

   return 0;
}
Output:
v1 is less than v2.
v1 is not less than v2.
\\***************************************************************************************************************************************
#NEXT_PERMUTATION
It is used to rearrange the elements in the range [first, last) into the next lexicographically greater permutation.
A permutation is each one of the N! possible arrangements the elements can take (where N is the number of elements in the range).
Different permutations can be ordered according to how they compare lexicographically to each other.

#include <algorithm> 
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 1, 2, 3 };
 
    sort(arr, arr + 3);
 
    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    } while (next_permutation(arr, arr + 3));
 
    cout << "After loop: " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << '\n';
 
    return 0;
}

Output:
The 3! possible permutations with 3 elements:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
After loop: 1 2 3
\\***************************************************************************************************************************************
#PREV_PERMUTATION
It is used to rearranges the elements in the range [first, last) into the previous lexicographically-ordered permutation.
A permutation is each one of the N! possible arrangements the elements can take (where N is the number of elements in the range).
Different permutations can be ordered according to how they compare lexicographicaly to each other.

#include <algorithm>  
#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1, 2, 3 };
 
    sort(arr, arr + 3);
    reverse(arr, arr + 3);
 
    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    } while (prev_permutation(arr, arr + 3));
 
    cout << "After loop: " << arr[0] << ' ' << arr[1] 
         << ' ' << arr[2] << '\n';
 
    return 0;
}

Output:
The 3! possible permutations with 3 elements:
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3
After loop: 3 2 1
\\***************************************************************************************************************************************
#MINMAX
C++ defined functions to get smallest and largest elements among 2 or in a container using different functions.
But there are also functions that are used to get both smallest and largest element using a single function, “minmax()” function achieves this task for us. 
This function is defined in “algorithm” header file. This article would deal in its implementation and other related functions.

minmax(a, b): This function returns a pair, in which 1st element is of minimum of the two elements and the 2nd element is maximum of 2 elements.
minmax(array of elements): This function returns similarly as 1st version. Only difference is that in this version, the accepted argument is a list of integers/strings among which maximum and minimum are obtained. Useful in cases when we need to find maximum and minimum elements in list without sorting.
 
#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
     
pair<int, int> mnmx;
  
mnmx = minmax(53, 23);
     
cout << "The minimum value obtained is : ";
cout << mnmx.first;
cout << "\nThe maximum value obtained is : ";
cout << mnmx.second ;
     
// Using minmax((array of elements) 
mnmx = minmax({2, 5, 1, 6, 3});
     
// printing minimum and maximum values.
cout << "\n\nThe minimum value obtained is : ";
cout << mnmx.first;
cout << "\nThe maximum value obtained is : ";
cout << mnmx.second;
     
}

Output:
The minimum value obtained is : 23
The maximum value obtained is : 53

The minimum value obtained is : 1
The maximum value obtained is : 6
\\***************************************************************************************************************************************
#Reverse
Reverses the order of the elements in the range [first,last).
                                                 
// reverse algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

int main () {
  std::vector<int> myvector;

  // set some values:
  for (int i=1; i<10; ++i) myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9

  std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
Output:
myvector contains: 9 8 7 6 5 4 3 2 1
\\***************************************************************************************************************************************
#UNIQUE
Removes all but the first element from every consecutive group of equivalent elements in the range [first,last).

#include <iostream>     // std::cout
#include <algorithm>    // std::unique, std::distance
#include <vector>       // std::vector

bool myfunction (int i, int j) {
  return (i==j);
}

int main () {
  int myints[] = {10,20,20,20,30,30,20,20,10};           // 10 20 20 20 30 30 20 20 10
  std::vector<int> myvector (myints,myints+9);

  // using default comparison:
  std::vector<int>::iterator it;
  it = std::unique (myvector.begin(), myvector.end());   // 10 20 30 20 10 ?  ?  ?  ?
                                                         //                ^

  myvector.resize( std::distance(myvector.begin(),it) ); // 10 20 30 20 10

  // using predicate comparison:
  std::unique (myvector.begin(), myvector.end(), myfunction);   // (no changes)

  // print out content:
  std::cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
Output:
myvector contains: 10 20 30 20 10

\\***************************************************************************************************************************************

\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
