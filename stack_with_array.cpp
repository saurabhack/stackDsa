#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(top==size-1){
            cout<<"stack is overflow"<<endl;
            return ;
        }
        arr[++top]=element;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return ;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        return arr[top];
    }
    bool is_empty(){
        if(top==-1){
            return true;
        }
        return false;
    }

};
int main(){
    stack st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    if(st.is_empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;
}