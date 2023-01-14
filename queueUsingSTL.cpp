#include<bits/stdc++.h>
using namespace std;


int main(){
    //create a queue of int type
    queue<int> q;

    q.push(11);

    q.push(13);

    cout<<q.size()<<endl;

    cout<<q.front()<<endl;

    cout<<q.back()<<endl;

    q.pop();

    if(q.empty()){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<"Queue is not empty!"<<endl;
    }



    return 0;
}