// lab07.cpp
// Name: Antonio Mora
//Date: 6/10/2024
// Description: This program will create a queue of employees and then print them out.
#include <iostream>
#include <string>

#include "Employee.cpp"
#include "DoublyLinkedQueue.cpp"

using namespace std;

int main() 
{
    // Part 1: Queue of integers
    Queue<int> intQueue;
    int x = 0, k = 0;
    cout << "Enqueue positive numbers (enter 0 to stop): ";
    cin >> x;
    while (x != 0) 
    {
        intQueue.enqueue(x);
        cin >> x;
    }
  
    intQueue.print();
    cout << "How many numbers to be removed from queue: ";
    cin >> k;
    for (int i = 0; i < k; i++) 
    {
        intQueue.dequeue();
    }
    intQueue.print();

    // Part 2: Queue of strings
    Queue<string> stringQueue;
    string str;
    cout << "Enqueue strings (enter exit to stop): ";
    cin >> str;
    while (str != "exit") 
    {
        stringQueue.enqueue(str);
        cin >> str;
    }
  
    stringQueue.print();
    cout << "How many strings to be removed from queue: ";
    cin >> k;
    for (int i = 0; i < k; i++) 
    {
        stringQueue.dequeue();
    }
  
    stringQueue.print();

    // Part 3: Queue of Employee objects
    Queue<Employee> employeeQueue;
    int id;
    string name, dept;
    cout << "Enqueue employee's id, name, dept (enter id 0 to stop): ";
    cin >> id;
    while (id != 0) 
    {
        cin >> name >> dept;
        Employee emp(id, name, dept);
        employeeQueue.enqueue(emp);
        cout << "Enqueue employee's id, name, dept: ";
        cin >> id;
    }
  
    employeeQueue.print();
    cout << "How many employees to be removed from queue: ";
    cin >> k;
    for (int i = 0; i < k; i++) 
    {
        employeeQueue.dequeue();
    }
  
    employeeQueue.print();

    return 0;
}