//#include <iostream>
//using namespace std;
//
//const int MAX = 5;
//const int NAME_LEN = 50;
//const int TRANS_LEN = 50;
//
//struct Customer 
//{
//    char name[NAME_LEN];
//    char transaction[TRANS_LEN];
//};
//
//
//class CircularQueue 
//{
//private:
//    Customer queue[MAX];
//    int front;
//    int rear;
//    int count;
//
//public:
//    CircularQueue() 
//    {
//        front = 0;
//        rear = -1;
//        count = 0;
//    }
//
//    bool isEmpty() {
//        return count == 0;
//    }
//
//    bool isFull() {
//        return count == MAX;
//    }
//
//    void enqueue(Customer c) {
//        if (isFull()) {
//            cout << "Error: Queue is full. Cannot add more customers (Overflow)." << endl;
//            return;
//        }
//        rear = (rear + 1) % MAX;
//        queue[rear] = c;
//        count++;
//        cout << "Customer added to the queue." << endl;
//    }
//
//    Customer dequeue()
//    {
//        Customer c;
//        c.name[0] = '\0';
//        c.transaction[0] = '\0';
//
//        if (isEmpty()) {
//            cout << "Error: Queue is empty. No customer to serve (Underflow)." << endl;
//            return c;
//        }
//        c = queue[front];
//        front = (front + 1) % MAX;
//        count--;
//        return c;
//    }
//
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "No customers in the queue." << endl;
//            return;
//        }
//        cout << "Customers waiting in the queue:" << endl;
//        for (int i = 0; i < count; i++) {
//            int index = (front + i) % MAX;
//
//            // Print name manually until null character
//            cout << i + 1 << ". Name: ";
//            for (int j = 0; queue[index].name[j] != '\0'; j++)
//                cout << queue[index].name[j];
//
//            cout << ", Transaction: ";
//            for (int j = 0; queue[index].transaction[j] != '\0'; j++)
//                cout << queue[index].transaction[j];
//
//            cout << endl;
//        }
//    }
//
//    int size() {
//        return count;
//    }
//};
//
//void readInput(char arr[], int length) 
//{
//    int i = 0;
//    char ch;
//    while (i < length - 1) {
//        ch = cin.get();
//        if (ch == '\n')
//            break;
//        arr[i++] = ch;
//    }
//    arr[i] = '\0';
//   
//    if (i == length - 1) {
//        while (cin.get() != '\n');
//    }
//}
//
//int main() 
//{
//    CircularQueue cq;
//    Customer c;
//    int choice;
//
//    do {
//        cout << "\n--- Bank Queue Menu ---\n";
//        cout << "1. Add a customer (enqueue)\n";
//        cout << "2. Serve a customer (dequeue)\n";
//        cout << "3. Display all waiting customers\n";
//        cout << "4. Show total number of customers waiting\n";
//        cout << "5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        cin.get(); 
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter customer name: ";
//            readInput(c.name, NAME_LEN);
//
//            cout << "Enter transaction type: ";
//            readInput(c.transaction, TRANS_LEN);
//
//            cq.enqueue(c);
//            break;
//
//        case 2:
//            c = cq.dequeue();
//            if (c.name[0] != '\0') 
//            {
//                cout << "Served Customer: ";
//                for (int i = 0; c.name[i] != '\0'; i++) cout << c.name[i];
//                cout << ", Transaction: ";
//                for (int i = 0; c.transaction[i] != '\0'; i++) cout << c.transaction[i];
//                cout << endl;
//            }
//            break;
//
//        case 3:
//            cq.display();
//            break;
//
//        case 4:
//            cout << "Total customers waiting: " << cq.size() << endl;
//            break;
//
//        case 5:
//            cout << "Exiting program. Goodbye!" << endl;
//            break;
//
//        default:
//            cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice != 5);
//
//    return 0;
//}
