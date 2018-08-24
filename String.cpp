#std::string::compare

Compares the value of the string object (or a substring) to the sequence of characters specified by its arguments.

#include <iostream>
#include <string>

int main ()
{
  std::string str1 ("green apple");
  std::string str2 ("red apple");

  if (str1.compare(str2) != 0)
    std::cout << str1 << " is not " << str2 << '\n';

  if (str1.compare(6,5,"apple") == 0)
    std::cout << "still, " << str1 << " is an apple\n";

  if (str2.compare(str2.size()-5,5,"apple") == 0)
    std::cout << "and " << str2 << " is also an apple\n";

  if (str1.compare(6,5,str2,4,5) == 0)
    std::cout << "therefore, both are apples\n";

  return 0;
}
Edit & Run


Output:
green apple is not red apple
still, green apple is an apple
and red apple is also an apple
therefore, both are apples
//****************************************************************************************************************************************
#size_t

Unsigned integral type
Alias of one of the fundamental unsigned integer types.
It is a type able to represent the size of any object in bytes: size_t is the type returned by the sizeof operator and is widely used in the standard library to represent sizes and counts.
//****************************************************************************************************************************************
#std::string::npos
  
string::npos is a constant (probably -1) representing a non-position. It's returned by method find when the pattern was not found.
//****************************************************************************************************************************************
#std::string::find

Searches the string for the first occurrence of the sequence specified by its arguments.

#include <iostream>       // std::cout
#include <string>         // std::string

int main ()
{
  std::string str ("There are two needles in this haystack with needles.");
  std::string str2 ("needle");

  // different member versions of find in the same order as above:
  std::size_t found = str.find(str2);
  if (found!=std::string::npos)
    std::cout << "first 'needle' found at: " << found << '\n';

  found=str.find("needles are small",found+1,6);
  if (found!=std::string::npos)
    std::cout << "second 'needle' found at: " << found << '\n';

  found=str.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';

  found=str.find('.');
  if (found!=std::string::npos)
    std::cout << "Period found at: " << found << '\n';

  // let's replace the first needle:
  str.replace(str.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';

  return 0;
}
Edit & Run

Output:
first 'needle' found at: 14
second 'needle' found at: 44
'haystack' also found at: 30
Period found at: 51
There are two prepositions in this haystack with needles.
//****************************************************************************************************************************************
#std::string::substr

Returns a newly constructed string object with its value initialized to a copy of a substring of this object.

#include <iostream>
#include <string>

int main ()
{
  std::string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  std::string str2 = str.substr (3,5);     // "think"

  std::size_t pos = str.find("live");      // position of "live" in str

  std::string str3 = str.substr (pos);     // get from "live" to the end

  std::cout << str2 << ' ' << str3 << '\n';

  return 0;
}
Edit & Run


Output:
think live in details.
//****************************************************************************************************************************************
#std::string::pop_back

Erases the last character of the string, effectively reducing its length by one.

#include <iostream>
#include <string>

int main ()
{
  std::string str ("hello world!");
  str.pop_back();
  std::cout << str << '\n';
  return 0;
}

Output:
hello world
//****************************************************************************************************************************************
#std::string::append

Extends the string by appending additional characters at the end of its current value

#include <iostream>
#include <string>

int main ()
{
  std::string str;
  std::string str2="Writing ";
  std::string str3="print 10 and then 5 more";

  str.append(str2);                       // "Writing "
  str.append(str3,6,3);                   // "10 "
  str.append("dots are cool",5);          // "dots "
  str.append("here: ");                   // "here: "
  str.append(10u,'.');                    // ".........."
  str.append(str3.begin()+8,str3.end());  // " and then 5 more"
  str.append<int>(5,0x2E);                // "....."

  std::cout << str << '\n';
  return 0;
}

Output:
Writing 10 dots here: .......... and then 5 more.....

//****************************************************************************************************************************************
#std::string::insert

Inserts additional characters into the string right before the character indicated by pos (or p)

#include <iostream>
#include <string>

int main ()
{
  std::string str="to be question";
  std::string str2="the ";
  std::string str3="or not to be";
  std::string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  str.insert(6,str3,3,4);             // to be (not )the question
  str.insert(10,"that is cool",8);    // to be not (that is )the question
  str.insert(10,"to be ");            // to be not (to be )that is the question
  str.insert(15,1,':');               // to be not to be(:) that is the question
  it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
  str.insert (it+2,str3.begin(),str3.begin()+3); // (or )

  std::cout << str << '\n';
  return 0;
}

Output:
to be, or not to be: that is the question...

//****************************************************************************************************************************************
#std::string::resize()
  
resize() lets you change the number of characters. Here are we will describe two syntaxes supported by std::string::resize() 
  
#include <iostream>
#include <string>
using namespace std;
  
// Function to demonstrate insert
void resizeDemo(string str)
{
  
    // Resizes str to a string with
    // 5 initial charcters only 
    str.resize(5);
    cout << "Using resize : ";
    cout << str;
}
 
// Driver code
int main()
{
    string str("GeeksforGeeks ");
  
    cout << "Original String : " << str << endl;
    resizeDemo(str);
  
    return 0;
}

Output:
Original String : GeeksforGeeks 
Using resize : Geeks
//****************************************************************************************************************************************

//****************************************************************************************************************************************

//****************************************************************************************************************************************
