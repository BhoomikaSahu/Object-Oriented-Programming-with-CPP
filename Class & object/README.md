## Class
A class in C++ is the building block, that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

***For Example***: Consider the Class of Cars. There may be many cars with different names and brand but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.

## Object
Object is a run-time entity. It is an instance of the class.
When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

## Difference between Class and Structure

In C++, a structure is the same as a class except for a few differences. The most important of them is security. A Structure is not secure and cannot hide its implementation details from the end-user while a class is secure and can hide its programming and designing details. 

Following are the points that expound on this difference: 
1) Members of a class are private by default and members of a structure are public by default.

***For example:*** program 1 fails in compilation and program 2 works fine.

2) When deriving a struct from a class/struct, the default access-specifier for a base class/struct is public. And when deriving a class, the default access specifier is private. 

***For example:*** program 3 fails in compilation and program 4 works fine. 

