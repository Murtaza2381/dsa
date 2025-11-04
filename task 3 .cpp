//#include <iostream>
//using namespace std;
//
//const int MAX = 50;
//const int NAME_LEN = 50;
//
//
//struct Student 
//{
//    char name[NAME_LEN];
//    int score;
//    int timeTaken;
//};
//
//// Linear Queue
//class LinearQueue
//{
//private:
//    Student queue[MAX];
//    int front;
//    int rear;
//
//public:
//    LinearQueue() 
//    {
//        front = 0;
//        rear = -1;
//    }
//
//    bool isEmpty() 
//    {
//        return front > rear;
//    }
//
//    bool isFull() 
//    {
//        return rear == MAX - 1;
//    }
//
//    void enqueue(Student s)
//    {
//        if (isFull()) 
//        {
//            cout << "Queue is full. Cannot add student.\n";
//            return;
//        }
//        rear++;
//        for (int i = 0; i < NAME_LEN; i++)
//            queue[rear].name[i] = s.name[i];
//        queue[rear].score = s.score;
//        queue[rear].timeTaken = s.timeTaken;
//    }
//
//    Student dequeue() 
//    {
//        Student s;
//        s.name[0] = '\0';
//        s.score = 0;
//        s.timeTaken = 0;
//
//        if (isEmpty())
//        {
//            cout << "Queue is empty. No student to dequeue.\n";
//            return s;
//        }
//        for (int i = 0; i < NAME_LEN; i++)
//            s.name[i] = queue[front].name[i];
//        s.score = queue[front].score;
//        s.timeTaken = queue[front].timeTaken;
//        front++;
//        return s;
//    }
//
//    void display() 
//    {
//        if (isEmpty()) 
//        {
//            cout << "Queue is empty.\n";
//            return;
//        }
//        for (int i = front; i <= rear; i++) {
//            cout << "Name: ";
//            for (int j = 0; j < NAME_LEN && queue[i].name[j] != '\0'; j++)
//                cout << queue[i].name[j];
//            cout << ", Score: " << queue[i].score
//                << ", Time Taken: " << queue[i].timeTaken << " seconds\n";
//        }
//    }
//};
//
//int main() 
//{
//    LinearQueue waitingQueue, completedQueue;
//    Student s;
//    int choice;
//
//    do {
//        cout << "\n--- Quiz Competition Menu ---\n";
//        cout << "1. Add a student to the waiting queue\n";
//        cout << "2. Start the quiz and enter scores\n";
//        cout << "3. Display completed student scores\n";
//        cout << "4. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        cin.ignore(); // remove newline from buffer
//
//        if (choice == 1) {
//            if (waitingQueue.isFull())
//            {
//                cout << "Waiting queue is full. Cannot add student.\n";
//                continue;
//            }
//
//            cout << "Enter student name (no spaces): ";
//            for (int i = 0; i < NAME_LEN; i++) s.name[i] = '\0';
//            int i = 0;
//            char ch;
//            while (i < NAME_LEN - 1) {
//                ch = cin.get();
//                if (ch == '\n') break;
//                s.name[i++] = ch;
//            }
//
//            s.score = 0;
//            s.timeTaken = 0;
//            waitingQueue.enqueue(s);
//            cout << "Student added to waiting queue.\n";
//        }
//        else if (choice == 2) {
//            if (waitingQueue.isEmpty()) {
//                cout << "All students have completed the quiz.\n";
//            }
//            else {
//                s = waitingQueue.dequeue();
//                cout << "Enter score for ";
//                for (int i = 0; s.name[i] != '\0'; i++) cout << s.name[i];
//                cout << ": ";
//                cin >> s.score;
//                cout << "Enter time taken (seconds) for ";
//                for (int i = 0; s.name[i] != '\0'; i++) cout << s.name[i];
//                cout << ": ";
//                cin >> s.timeTaken;
//                completedQueue.enqueue(s);
//                cout << "Student ";
//                for (int i = 0; s.name[i] != '\0'; i++) cout << s.name[i];
//                cout << " completed the quiz.\n";
//
//                if (waitingQueue.isEmpty())
//                    cout << "Quiz has ended. All students completed.\n";
//            }
//        }
//        else if (choice == 3)
//        {
//            cout << "\n--- Completed Student Scores ---\n";
//            completedQueue.display();
//        }
//        else if (choice == 4)
//        {
//            cout << "Exiting program. Goodbye!\n";
//        }
//        else {
//            cout << "Invalid choice. Try again.\n";
//        }
//
//    } while (choice != 4);
//
//    return 0;
//}
