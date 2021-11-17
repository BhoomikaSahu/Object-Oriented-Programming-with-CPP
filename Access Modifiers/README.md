## Access Modifiers
Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.

*There are 3 types of access modifiers available in C++:*

1. Public
2. Private
3. Protected

***Note:*** If we do not specify any access modifiers for the members inside the class then by default the access modifier for the members will be Private.

### Public:
All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 

*Example:* [Link](https://github.com/BhoomikaSahu/Object-Oriented-Programming-with-CPP/blob/d0d1ffa146ad2ff4bcfe16f60f57f9c68e949825/Access%20Modifiers/public.cpp)

### Private:
The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of a class. 

*Example:* [Link](https://github.com/BhoomikaSahu/Object-Oriented-Programming-with-CPP/blob/6b0c8e9de08e6445e0a7298859be3000fc5fe135/Access%20Modifiers/private.cpp)

### Protected
Protected access modifier is similar to private access modifier in the sense that it can’t be accessed outside of it’s class unless with the help of friend class, the difference is that the class members declared as Protected can be accessed by any subclass(derived class) of that class as well. 

***Note:*** This access through inheritance can alter the access modifier of the elements of base class in derived class depending on the modes of Inheritance.

*Example:* [Link](https://github.com/BhoomikaSahu/Object-Oriented-Programming-with-CPP/blob/d0d1ffa146ad2ff4bcfe16f60f57f9c68e949825/Access%20Modifiers/protected.cpp)
