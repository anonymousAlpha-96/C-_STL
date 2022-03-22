//Standerd template library for stack
#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("A");
    s.push("B");
    s.push("C");
    s.push("D");
    cout<<"\nString top element : ";
    cout<<s.top();
    s.pop();
    cout<<"\nString top element : ";
    cout<<s.top();
      s.pop();
    cout<<"\nString top element : ";
      cout<<s.top();
      s.pop();
    cout<<"\nString top element : ";
      cout<<s.top();
      s.pop();
    cout<<"\nString top element : ";
    cout<<s.top();
//    for(int i:s)
//    {
//        cout<<" "<<i;
//    }

    return 0;
}
