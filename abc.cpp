#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(12);
    q.push(34);
    cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"front element of queue is: "<<q.front()<<endl;
    if(!q.empty()){
        cout<<"queue is not empty"<<endl;
    }else{
        cout<<"queue os empty"<<endl;
    }
    q.pop();
    cout<<"front element of queue is: "<<q.front()<<endl;
    q.pop();
    

    return 0;
}
