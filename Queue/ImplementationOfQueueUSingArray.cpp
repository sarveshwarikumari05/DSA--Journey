class myQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;
    int count;

public:
    myQueue(int n) {
        size = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }

    void enqueue(int x) {
        if (isFull())
            return;

        rear = (rear + 1) % size;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        if (isEmpty())
            return;

        front = (front + 1) % size;
        count--;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int getRear() {
        if (isEmpty())
            return -1;

        return arr[rear];
    }
};
//This code implements a queue using a circular array.
//Time Complexity for enqueue and dequeue: O(1), Space Complexity: O(n)