//
//  CS32_week5.cpp
//
//  Created by Zhou Ren on 2/6/15.
//  Copyright (c) 2015 Zhou Ren. All rights reserved.
//

/*
//solution to advanced problem 1:
#include <iostream>
using namespace std;

bool exactSum(int a[], int n, int targetSum)
{
    if (n == 0)
        return false;
    if (a[0] == targetSum)
        return true;
    return exactSum(a + 1, n - 1, targetSum - a[0]) ||
    exactSum(a + 1, n - 1, targetSum);
}

int main(){
    int a[]= {1,2,3};
    cout <<exactSum(a, sizeof(a)/sizeof(a[0]), 2);
    
}
*/


//solution to advanced problem 2:
#include <iostream>
using namespace std;

bool isPrimeRecursive(int num, int divisor)
{
    cout << "Checking to see if " << num << " is divisible by " << divisor << endl;
    if(divisor == 1)
    {
        cout << num << " must be a prime number, as we got to the case where divisor = 1";
        return true;
    }
    
    /*
     You may not have encountered the % (modulus) before. This operator gives us the
     remainder of a division. For example 10 % 3 returns 1, because 3 divides into 10 three times and has
     a remainder of 1. A remainder of 0 means that we were able to evenly divide two numbers (such as 4 / 2.)
     Since a prime number can only be divisible by itself and 1, we must return false if the result of the modulus is 0, as that
     means we found another number we can divide evenly by.
     */
    
    if(num % divisor == 0)
    {
        cout << num << " is evenly divisble by " << divisor << " thus it must not be a prime number" << endl;
        return false;
    }
    else
    {
        cout << num << " is not evenly divisible by " << divisor << ", recurse deeper" << endl;
        return isPrimeRecursive(num, divisor - 1);
    }
}
    
/*
 It sometimes helps to have a function that 'primes the pump' for recursion.
 This function here allows the user to just pass in num and not worry about the divisor param.
 */
bool isPrimeNumber(int num)
{
    cout << "Checking to see if " << num << " is prime" << endl;
    
    //1 is not a prime number.
    if(num <= 1)
    {
        cout << num << " is not prime" << endl;
        return false;
    }
    
    return isPrimeRecursive(num, num - 1); //you can start the divisor from int i=sqrt(num) other than num-1;
}

int main()
{
    isPrimeNumber(2);
    cout << endl << endl;
    isPrimeNumber(6);
    cout << endl << endl;
    isPrimeNumber(11);
    return 0;
}

    
/* //4.
 #include <iostream>
 using namespace::std;
 
 class ABC{
 public:
 virtual void fun()=0;
 };
 
 class OPQ:public ABC{
 virtual void fun(){
 cout << "hello world!"<<endl;
 }
 };
 
 int main(){
 ABC A;
 ABC* x = new OPQ();
 ABC* y = new ABC();
 }
 */


/* //3.
 #include <iostream>
 using namespace std;
 class Person
 {
 public:
 void Play()
 { cout << "Person::Play" << endl; };
 void Study()
 { cout << "Person::Study" << endl; }
 };
 class Student: public Person
 {
 public:
 void Play() // What if I add virtual keyword here?
 { cout << "Student::Play" << endl; }
 virtual void Study()
 { cout << "Student::Study" << endl;}
 };
 class UCLAStudent : public Student
 {
 public:
 void Play()
 { cout << "UCLAStudent::Play!" <<endl; }
 void Study()
 { cout << "UCLAStudent::Study!" << endl; }
 };
 void activity( Student &s )
 // After adding virtual keyword, if I change Student &s to Person &s ?
 {
 s.Play();
 s.Study();
 }
 int main() {
 UCLAStudent ucla;
 activity(ucla);
 }
 */



/* // 2.
 // A student wrote the following program and expected the output as:
 //Base value is: 0
 //Derived value is: 10
 
 #include <iostream>
 using namespace std;
 
 class Base
 {
 private:
 int base_value;
 public:
 Base(int n): base_value(n) {}
 int getValue() { return base_value; }
 };
 class Derived : public Base
 {
 private:
 int derived_value;
 public:
 Derived(int n): Base(n) { derived_value = n + 10; }
 int getValue() { return derived_value; }
 void output()
 {
 cout << "Base value is:" << Base::base_value << endl;
 cout << "Derived value is: " << getValue() << endl;
 }
 };
 int main()
 {
 Derived d(0);
 d.output();
 }
 */


/* // 1.
 #include <iostream>
 using namespace std;
 class Base
 {
 public:
 void output(int n)
 {
 cout << "Hello Base" << n << endl;
 }
 };
 class Derived : public Base
 {
 public:
 void output()
 {
 cout << "Hello Derived" << endl;
 }
 };
 int main()
 {
 Base b;
 b.output(1);
 Derived d;
 d.output();
 d.Base::output(2);
 }
 */