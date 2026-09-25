class MyCircularQueue {
public:
    vector<int> q;
    int front,rear,size,cap;

    MyCircularQueue(int k) {
        q.resize(k);
        cap=k;
        front=0;
        rear=0;
        size=0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;

        q[rear]=value;
        rear=(rear+1)%cap;
        size++;

        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;

        front=(front+1)%cap;
        size--;

        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return q[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return q[(rear-1+cap)%cap];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==cap;
    }
};