// Concurrency in Computer System

#include <iostream>
#include <thread>

using namespace std;

// Equivalent of Java's MyThread class
void runThread() {
    for (int i = 1; i <= 5; i++) {
        cout << "I am thread no. "
             << this_thread::get_id()
             << " | Count: " << i << endl;
    }
}

int main() {
    // Equivalent of:
    // Thread t1 = new MyThread();
    // Thread t2 = new MyThread();

    thread t1(runThread);
    thread t2(runThread);

    // Wait for both threads to finish
    t1.join();
    t2.join();

    return 0;
}