#include <iostream>
#define MAX_SIZE 3
using namespace std;

class Stack{
    int maxStackSize;
    int stackTop;
    int st[MAX_SIZE];
public:
    Stack(){
        stackTop = 0;
        maxStackSize = MAX_SIZE;
    }
    void push(int num){
        if(stackTop == maxStackSize){
            cout<<"Full";
        }else{
            st[stackTop] = num;
            stackTop++;
        }
    }
    void pop(){
        if(stackTop == 0){
            cout<<"EMPTY";
        }else{
            st[stackTop] = 0;
            stackTop--;
        }
    }
    int top(){
        return st[stackTop - 1];
    }
};
int main(int argc, const char * argv[]) {
    
    Stack s;
    s.push(10);
    cout<<s.top()<<endl;
    s.push(90);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}
