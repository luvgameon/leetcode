class MyCircularQueue {
       int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
          size = k;
        arr = new int[k];
        front = -1;
        rear = -1;
        
        
    }
    
    bool enQueue(int x) {
       if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0;
        }
        else if(rear == size-1 && front != 0) {
            rear = 0;
        } 
        else
        {
             rear++;
        }
        arr[rear] = x;
        return true;
        
    }
    
    bool deQueue() {
        
       if(isEmpty()){//to check queue is empty
            return false;
        }
        
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
        
    }
    
    int Rear() {
       if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
       if(front == -1)
            return true;
        else
            return false;
    }
    
    bool isFull() {
       if( (front == 0 && rear == size-1) || ((front != 0 && size>1) && rear == (front-1)%(size-1) ) ) {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */