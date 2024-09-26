#include <iostream>
using namespace std;
int main()
{

}

Stack() {
    top = nullptr;
}

void push (int element) {
    Node * newNode = new Node (element);
    if(top==nullptr) {
        top=newNode;
    }else{
        newNode->next=top;
        top=newNode;
    }
}




int main() {
    Stack st;
}

st.push(22);
st.push(43);
st.push(44);
st.push(22);
st.push(43);
st.push(44);
st.push(47);


cout<<st.peek()<<endl;
st.pop();

cout<<st.peek()<<endl;
st.pop();

cout<<st.peek()<<endl;
st.pop();

cout<<st.peek()<<endl;
st.pop();

