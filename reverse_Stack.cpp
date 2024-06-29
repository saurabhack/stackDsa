#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void reverse_stack(stack<int> st){
    vector<int> arr;
    int i=0;
    while(!st.empty()){
        arr.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse_stack(st);
    return 0;
}