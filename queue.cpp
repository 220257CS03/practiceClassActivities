#include <iostream>
#define MAX_SIZE 3

using namespace std;

class Queue{
public:
    int qfront;
    int qrear;
    int count;
    int maxQueueSize;
    int q[MAX_SIZE];
    
    Queue(){
        qfront = -1;
        qrear = -1;
        maxQueueSize = MAX_SIZE;
        count = 0;
    }
    void enQueue(int num){
        if(qrear == -1 && qfront == -1){
            qfront += 1;
            q[qfront] = num;
            qrear = (qrear + 1) % maxQueueSize;
            q[qrear] = num;
        }else if(count == maxQueueSize){
            cout<<"Queue is full";
        }else{
            qrear = (qrear + 1) % maxQueueSize;
        }
        count++;
    }
    void deQueue(){
        if(qfront != -1){
            count--;
            q[qfront] = 0;
            qfront = (qfront + 1) % maxQueueSize;
        }else if(count == 0){
            cout<<"Queue is empty";
        }else if(qfront == qrear){
            count--;
            qfront = -1;
            qrear = -1;
        }
    }
    bool isEmpty(){
        return qrear == -1 && qfront == -1;
    }
    bool isFull(){
        return count == maxQueueSize;
    }
    int front(){
        return q[qfront];
    }
    int back(){
        return q[qrear];
    }
    void displayQueue(){
        int i = qfront;
        int c= count;
        while(c){
            cout<<q[i]<<" ";
            i = (i + 1) % maxQueueSize;
            c--;
        }
        cout<<endl;
    }
};

int main() {
    Queue q;
    q.deQueue();
    q.displayQueue();
    q.enQueue(5);
    q.displayQueue();
    q.enQueue(50);
    q.displayQueue();
    q.enQueue(500);
    q.displayQueue();
    q.deQueue();
    q.displayQueue();
    q.deQueue();
    q.displayQueue();
    q.enQueue(20);
    q.displayQueue();
    q.enQueue(200);
    q.displayQueue();
    
    
    return 0;
}
