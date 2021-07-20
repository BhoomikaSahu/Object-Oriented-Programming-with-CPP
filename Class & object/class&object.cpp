#include<iostream>
using namespace std;

class student{
    public:
    //variable Declaration
    string name;
    int age;
    char gender;
    void read()
    {
        cin >> name ;
        cin >> age;
        cin >> gender ;
    }// Read Function
    void print()
    {
        cout << name << endl ;
        cout << age << endl ;
        cout << gender << endl ;
    }// Print Function
};// Class of student

int main()
{
    int n;
    cout << "Enter no. of Entities" ;
    cin >> n;
    student arr[n];         // Declare Object
    for(int i=0; i<n; i++)
    {
        arr[i].read();      // Read Entities
    }
    for(int i=0; i<n; i++)
    {
        arr[i].print();     // Print Entities
    }
    return 0;
}
