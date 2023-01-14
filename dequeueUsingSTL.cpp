#include<bits/stdc++.h>
using namespace std;


int main(){
    
    deque<int> d;

    d.push_back(14);
    d.push_front(35);

    cout<<d.front()<<" "<<d.back()<<endl;

    d.pop_back();

    cout<<d.front()<<" "<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"Empty queue!"<<endl;
    }
    else{
        cout<<"Not empty queue!"<<endl;
    }



    return 0;
}