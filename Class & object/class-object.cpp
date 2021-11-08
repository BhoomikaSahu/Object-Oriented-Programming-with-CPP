/*CLASS:-
        Class is a user-defined data type which defines its properties and its
        functions. Class is the only logical representation of the data. For
        example, Human being is a class. The body parts of a human being are its
        properties, and the actions performed by the body parts are known as
        functions. The class does not occupy any memory space till the time an
        object is instantiated.

OBJECT:-
        Object is a run-time entity. It is an instance of the class. An object can represent a person, place or any other item. An object can operate on both data members and member functions.
        
        Ex : student s = new student();
    Note :- 
            When an object is created using a new keyword, then space is
            allocated for the variable in a heap, and the starting address is stored in
            the stack memory. When an object is created without a new keyword,
            then space is not allocated in the heap memory, and the object contains
            the null value in the stack.
*/

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
