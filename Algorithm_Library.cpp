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
\\***************************************************************************************************************************************
\\***************************************************************************************************************************************
