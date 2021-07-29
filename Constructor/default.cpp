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
        cout << "Name : ";
        cin >> name;
        cout << "Age : ";
        cin >> age;
        cout << "Gender : ";
        cin >> gender;
    }// Read Function
    void print()
    {
        cout << "Name : " << name << endl ;
        cout << "Age : " << age << endl ;
        cout << "Gender : " << gender << endl ;
    }// Print Function
};// Class of student

int main()
{
    int n;
    cout << "Enter no. of Entities : " ;
    cin >> n;
    student arr[n];         // Declare an Object
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