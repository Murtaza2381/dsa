//#include <iostream>
//using namespace std;
//
//const int MAX = 50;
//const int PID_LEN = 10;
//
//struct Process
//{
//    char pid[PID_LEN];
//    int burstTime;
//};
//
//class ProcessQueue 
//{
//private:
//    Process queue[MAX];
//    int front, rear;
//
//public:
//    ProcessQueue() 
//    {
//        front = 0;
//        rear = -1;
//    }
//
//    bool isEmpty()
//    { return front > rear; 
//    }
//    bool isFull() 
//    { return rear == MAX - 1; 
//    }
//
//    void addProcess(Process p)
//    {
//        if (isFull()) 
//        {
//            cout << "Queue is full.\n";
//            return;
//        }
//        rear++;
//        for (int i = 0; i < PID_LEN; i++)
//            queue[rear].pid[i] = p.pid[i];
//        queue[rear].burstTime = p.burstTime;
//    }
//
//    Process dequeue()
//    {
//        Process p;
//        p.pid[0] = '\0';
//        p.burstTime = 0;
//        if (isEmpty())
//        {
//            cout << "Queue is empty.\n";
//            return p;
//        }
//        for (int i = 0; i < PID_LEN; i++)
//            p.pid[i] = queue[front].pid[i];
//        p.burstTime = queue[front].burstTime;
//        front++;
//        return p;
//    }
//
//    void executeNext(int timeSlice) 
//    {
//        if (isEmpty()) 
//        {
//            cout << "No process to execute.\n";
//            return;
//        }
//
//        Process p = dequeue();
//        cout << "Executing process ";
//        for (int i = 0; p.pid[i] != '\0'; i++) cout << p.pid[i];
//
//        if (p.burstTime <= timeSlice) 
//        {
//            cout << " for " << p.burstTime << " units. Process finished.\n";
//        }
//        else
//        {
//            p.burstTime -= timeSlice;
//            cout << " for " << timeSlice << " units. Remaining burst time = " << p.burstTime << endl;
//            addProcess(p);
//        }
//    }
//
//    bool hasProcesses() 
//    { return !isEmpty();
//    }
//};
//
//int main()
//{
//    ProcessQueue readyQueue;
//    Process p1 = { {'P','1','\0'}, 10 };
//    Process p2 = { {'P','2','\0'}, 4 };
//    Process p3 = { {'P','3','\0'}, 6 };
//    int timeSlice = 3;
//
//
//    readyQueue.addProcess(p1);
//    readyQueue.addProcess(p2);
//    readyQueue.addProcess(p3);
//
//    cout << "Starting Round Robin Scheduling with time slice = " << timeSlice << endl;
//
//    int step = 1;
//    while (readyQueue.hasProcesses()) 
//    //{
//        cout << "Step " << step++ << ": ";
//        readyQueue.executeNext(timeSlice);
//    }
//
//    cout << "\nAll processes completed.\n";
//    return 0;
//}
