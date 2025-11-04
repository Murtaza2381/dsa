//#include <iostream>
//using namespace std;
//
//const int MAX = 50;
//const int ID_LEN = 20;
//
//struct Flight
//{
//    char flightID[ID_LEN];
//};
//
//
//class LinearQueue
//{
//private:
//    Flight queue[MAX];
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
//    void enqueue(Flight f) 
//    {
//        if (isFull())
//        {
//            cout << "Queue is full. Cannot add flight.\n";
//            return;
//        }
//        rear++;
//        for (int i = 0; i < ID_LEN; i++)
//            queue[rear].flightID[i] = f.flightID[i];
//    }
//
//    Flight dequeue()
//    {
//        Flight f;
//        f.flightID[0] = '\0';
//        if (isEmpty()) {
//            cout << "Queue is empty. No flight to dequeue.\n";
//            return f;
//        }
//        for (int i = 0; i < ID_LEN; i++)
//            f.flightID[i] = queue[front].flightID[i];
//        front++;
//        return f;
//    }
//
//    void display() 
//    {
//        if (isEmpty()) 
//        {
//            cout << "Queue is empty.\n";
//            return;
//        }
//        for (int i = front; i <= rear; i++) 
//        {
//            for (int j = 0; j < ID_LEN && queue[i].flightID[j] != '\0'; j++)
//                cout << queue[i].flightID[j];
//            cout << " ";
//        }
//        cout << endl;
//    }
//};
//
//
//void readFlightID(char id[], int length)
//{
//    int i = 0;
//    char ch;
//    while (i < length - 1) 
//    {
//        ch = cin.get();
//        if (ch == '\n') break;
//        id[i++] = ch;
//    }
//    id[i] = '\0';
//    if (i == length - 1) {
//        while (cin.get() != '\n'); 
//    }
//}
//
//int main()
//{
//    LinearQueue EmergencyQueue, PassengerQueue, CargoQueue;
//    Flight f;
//    int choice;
//
//    do {
//        cout << "\n--- Airport Landing System Menu ---\n";
//        cout << "1. Add a flight\n";
//        cout << "2. Land next flight\n";
//        cout << "3. Display waiting flights\n";
//        cout << "4. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        cin.ignore(); // remove newline
//
//        if (choice == 1) 
//        {
//            int type;
//            cout << "Enter flight type (1-Emergency, 2-Passenger, 3-Cargo): ";
//            cin >> type;
//            cin.ignore(); // remove newline
//            cout << "Enter flight ID: ";
//            for (int i = 0; i < ID_LEN; i++) f.flightID[i] = '\0';
//            readFlightID(f.flightID, ID_LEN);
//
//            if (type == 1) EmergencyQueue.enqueue(f);
//            else if (type == 2) PassengerQueue.enqueue(f);
//            else if (type == 3) CargoQueue.enqueue(f);
//            else cout << "Invalid flight type!\n";
//
//        }
//        else if (choice == 2)
//        {
//            if (!EmergencyQueue.isEmpty())
//            {
//                f = EmergencyQueue.dequeue();
//                cout << "Emergency flight ";
//            }
//            else if (!PassengerQueue.isEmpty())
//            {
//                f = PassengerQueue.dequeue();
//                cout << "Passenger flight ";
//            }
//            else if (!CargoQueue.isEmpty()) 
//            {
//                f = CargoQueue.dequeue();
//                cout << "Cargo flight ";
//            }
//            else {
//                cout << "No flights waiting to land.\n";
//                continue;
//            }
//            for (int i = 0; f.flightID[i] != '\0'; i++)
//                cout << f.flightID[i];
//            cout << " has landed.\n";
//
//        }
//        else if (choice == 3) 
//        {
//            cout << "\n--- Waiting Flights ---\n";
//            cout << "Emergency: ";
//            EmergencyQueue.display();
//            cout << "Passenger: ";
//            PassengerQueue.display();
//            cout << "Cargo: ";
//            CargoQueue.display();
//
//        }
//        else if (choice == 4)
//        {
//            cout << "Exiting program.\n";
//        }
//        else
//        {
//            cout << "Invalid choice. Try again.\n";
//        }
//
//    } while (choice != 4);
//
//    return 0;
//}
