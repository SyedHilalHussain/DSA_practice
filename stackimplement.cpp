#include <iostream>
#include <iomanip>
#include <stack>
using namespace std;

int main()
{
    stack<char> st1;
    stack<char> st2;
    string s="Data structure";
    int size=sizeof(s);
    cout<<size;
    for (int i = 0; i <=size; i++)
    {
        st1.push(s[i]);
    }
    for (int i = 0; i < size; i++)
    {
        char c= st1.top();
        st1.pop();
        st2.push(c);

    }
    for (int i = 0; i < int(st2.size()) + 1; i++)
    {
        cout << st2.top();
        st2.pop();
    }
    cout<<st2.size();
    
return 0;
}




// #include <iostream>

// #include <stack>
// #include <string>
// using namespace std;

// int main(){
//     stack<char> stringstack1;
//     stack<char> stringstack2;
//     string word = "Data Structures";
//     int size = sizeof(word);
 
//     for (int i = 0; i < size; i++)
//     {
//         stringstack1.push(word[i]);
//     }

//     for (int i = 0; i < size; i++)
//     {
//         char c = stringstack1.top();
//         stringstack1.pop();
//         stringstack2.push(c);
//     }
//     // Print Stack
//     for (int i = 0; i < int(stringstack2.size()) + 1; i++)
//     {
//         cout << stringstack2.top();
//         stringstack2.pop();
//     }
    
//     return 0;
// }
