#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    s.pop();
    if(s.empty()){
        cout<<"true";
    }else{
        cout<<"false";
    }
}