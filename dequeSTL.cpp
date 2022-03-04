#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;

    d.push_front(18);
    d.push_back(25);

    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<"\nElement in 1st position : "<<d.at(1)<<endl;

    cout<<"Front element : "<<d.front()<<endl;
    cout<<"Front element : "<<d.back()<<endl;


    cout<<"Empty Array : "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size();
    //d.erase(d.begin(), d.begin()+1);
    cout<<"After erase "<<d.size();


  /*  cout<<"\nbefor pop front?: ";
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    //d.pop_back();

    cout<<"after pop front? : ";
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
*/
}

