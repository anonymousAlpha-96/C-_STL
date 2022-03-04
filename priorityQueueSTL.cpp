#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //max heap
    priority_queue<int>maxi;

    priority_queue<int, vector<int>,greater<int>> mini;

    maxi.push(25);
    maxi.push(18);
    maxi.push(2);
    maxi.push(26);

    cout<<" Maxi Size : "<<maxi.size()<<endl;

    int n = maxi.size();
    for(int i = 0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<"Empty or not : "<<maxi.empty();


    cout<<"\nmini heap starts from here : "<<endl;
    mini.push(25);
    mini.push(18);
    mini.push(2);
    mini.push(26);

    cout<<" Maxi Size : "<<mini.size()<<endl;

    int m = mini.size();
    for(int i = 0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Empty or not : "<<mini.empty();

}
