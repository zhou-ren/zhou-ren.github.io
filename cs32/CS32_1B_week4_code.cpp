//
//  main.cpp
//  CS32_1B_week4
//
//  Created by Zhou Ren on 1/30/15.
//  Copyright (c) 2015 Zhou Ren. All rights reserved.
//  Credit goes to Kung-Hua Chang for sharing the practice problems.
//

/*
//Problem #1: What is the output of the following program?
#include <iostream> 
using namespace std;
virtual void hello()
{
    cout << "Hello World!" << endl;
}

int main()
{
    hello();
}
 */


/*
// Problem #2: What is the output of the following program? 
 //How many times will class A’s destructor get called?
#include <iostream> 
using namespace std;
class A { public:
    ~A() {
        cout << "A is destructed!" << endl; }
};
int main() {
    A a;
    a.~A(); // !!!
}
*/

/*
//Problem #3: What is the output of the following program?
#include <iostream> 
using namespace std;
class Base
{
public:
    Base() { cout << "1" ; }
    ~Base() { cout << "3"; }
};
class Derived : public Base {
public:
    Derived() { cout << "2"; }
    ~Derived() { cout << "4"; } };
int main() {
    Derived d; // How about Base b; ?
}
*/

/*
//Problem #4: What is the output of the following program?
#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    Base(int n) { cout << "1" ; }
    ~Base() { cout << "3"; }
};
class Derived : public Base {
public:
    Derived(string s, int n):Base(n) { cout << "2"; }
    ~Derived() { cout << "4"; }
};

int main() {
    //Derived *ptr = new Derived();
    // How about
    //Base *ptr = new Base(); //?
    Base *ptr = new Derived("abs",2); //?
    //Derived* ptr = new Base(2);
}
*/

/*
//Problem #5: What is the output of the following program?
#include <iostream> 
using namespace std;
class A {
public:
    virtual void output(int n) {
        cout << "A" << n << endl;
    }
};
class B : public A {
public:
    virtual void output(int n) {
        A::output(1000);
        cout << "B" << n << endl;
    }
};
int main() {
    B b;
    b.output(5);
}
*/


//Problem #6: Without changing the main() function, what can be done inside B’s member function output(int n) to generate the following output? Please do not answer cout << “A1000” << endl;......
//A1000
//B5


/*
//Problem #7: What is the output of the following program?
#include <iostream> 
using namespace std;

class A
{
public:
     void output() {
        cout << "A" << endl;
    }
};

class B : public A {
public:
     void output(int n) {
        cout << "B" << n << endl;
    }
};

int main() {
    B b;
    b.output(2);
    b.A::output();
}
// Do functions overload across Base and Derived classes?
*/

/*
//Problem #8: What is the output of the following program?
#include <iostream> 
using namespace std;
class Base {
public:
    Base() { }
    ~Base( ) { }
    virtual void creation() {
        cout << "Base::creation()" << endl;
    }
    virtual void cleanup( ) {
        cout << "Base::cleanup()" << endl;
    }
};
class Derived :public Base {
public:
    Derived ( ) {
        creation( ) ;
    }
    ~Derived ( ) {
        cleanup( );
    }
};
class Last : public Derived {
public :
    Last( ) { }
    ~Last() {
        cleanup( );
    }
    void cleanup()
    {
        cout << "Last::cleanup()" << endl;
    }
};

int main() {
    Last L;
}
*/


/*
//Problem #9: A student wrote the following program to determine whether an input 
 //string is a palindrome or not by using stack. A palindrome is a sequence of 
 //characters that reads the same backward or forward. For example, ABBA is a 
 //palindrome and ABCA is not a palindrome. Unfortunately, there are bugs there.
 //Could you please help this student find the bug?
#include <iostream>
#include <string>
#include <stack> 
using namespace std;
int main() {
    string str;
    cout <<"Please enter a string: ";
    cin >> str;
    int i, len = str.size();
    stack<char> s;
    
    for(i=0; i<len/2; i++)
        s.push( str[i] );
    if (len%2) {
        i++;
    }
    for(;i<len;i++) {
        if(s.top() != str[i])
            break;
        s.pop();
    }
    if(i == len)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is NOT a palindrome." << endl;

}
*/


/*
 //Problem #10: Please use Singly Linked List to implement Stack
 #include <iostream>
 using namespace std;
 
 class Stack {
 public:
 Stack()
 Stack(const Stack &s);
 ~Stack();
 
 void push(int n);
 void pop();
 int top();
 bool empty();
 void swap(Stack& s);
 Stack& operator=(const Stack& s);
 private:
 struct Node {
 Node *next;
 int value;
 };
 Node *head;
 };
 
 int main() {
 Stack A;
 for(int i=0;i<5;i++)
 A.push(i);
 
 Stack B(A);
 Stack C;
 C = A;
 while( !A.empty() ) {
 cout << A.top() << endl;
 A.pop();
 }
 return 0;
 }
 
 Stack::~Stack() {
 while(head != nullptr) {
 // Please add codes below
 
 }
 }
 
 void Stack::push(int n) {
 // Please add codes below
 
 }
 
 int Stack::top() {
 if( empty() ) {
 cout << "Stack is empty!!" << endl;
 exit(1);
 }
 // Please add code(s) below
 }
 
 bool Stack::empty() {
 // Please add code(s) below
 
 }
 
 void Stack::pop() {
 if( empty() ) {
 cout << "Stack is empty!!" << endl;
 return ;
 }
 // Please add code(s) below
 }
 Stack::Stack(const Stack &s) {
 if(s.head == nullptr) {
 head = nullptr;
 return ;
 }
 
 head = new Node;
 head->value = s.head->value;
 head->next = nullptr;
 // Please add codes below
 }
 void Stack::swap(Stack& s) {
 // Please add codes below
 }
 Stack& Stack::operator=(const Stack& s) {
 if(&s != this) {
 // Please add codes below
 }
 return *this;
 }
 */



/*
//Problem #11: Please use stack to reverse elements in a queue.
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
    int i;
    queue<int> q;
    stack<int> s;
    for(i=0;i<10;i++)
        q.push(i);
    
    while(!q.empty()) {
        s.push(q.front());
        q.pop();
        //
    }
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
        //
    }
    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    cout<< q.back();
}
*/


/*
// Problem #12: Please implement a queue using 2 stacks.
#include <iostream> 
#include <queue> 
#include <stack> 
#include <cassert> 
using namespace std;
class twoStacks{
public:
    twoStacks() { }
    
    void push(int value) {
        s1.push(value);
    }
    
    void moveFromS1toS2() {
        if (s2.empty()) {
            if (s1.empty()) {
                cout<<"both empty"<<endl;
                exit(1);
            }
            else{
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
        }
    }
    
    void moveFromS2toS1() {
        if (!s2.empty()) {
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    
    int front() {
        moveFromS1toS2();
        int a = s2.top();
        moveFromS2toS1();
        return a;
    }
    
    void pop() {
        //
        moveFromS1toS2();
        s2.pop();
        moveFromS2toS1();
    }

private:
    stack<int> s1; // enqueue
    stack<int> s2; // dequeue
};

int main() {
    int i;
    queue<int> q;
    twoStacks ts;
    for(i=0;i<10;i++) {
            q.push(i);
            ts.push(i);
    }
    q.pop();
    ts.pop();
    
    for(i=10;i<20;i++) {
        q.push(i);
        ts.push(i);
    }
    
    while( !q.empty() ) {
        assert( q.front() == ts.front() );
        q.pop();
        ts.pop();
    }
}
*/


//Interesting question 13: how to implement a stack using 2 queues...
#include <iostream> 
#include <queue> 
#include <stack> 
#include <cassert> 
using namespace std;

class twoQueues {
public:
    twoQueues() { }
    void push(int value);
    int pop();
private:
    queue<int> q1;
    queue<int> q2;
};

void twoQueues::push(int value) {
    if(q1.empty() && q2.empty()) // push into q1 if both are empty.
        q1.push(value);
    else if(q1.empty() && !q2.empty())
        q2.push(value);
    else if(!q1.empty() && q2.empty())
        q1.push(value);
    else {
        cerr << "Error: Both queues have values!" << endl; exit(1);
    }
}

int twoQueues::pop() {
    if( q1.empty() && q2.empty() ) {
        cerr << "Error: Both queues are empty!" << endl;
        exit(1);
    }
    else if( q1.empty() && !q2.empty() ) {
        int temp;
        while( !q2.empty() ) {
            temp = q2.front(); q2.pop();
            if(q2.empty())
                return temp;
            q1.push(temp);
        }
    }
    else if( !q1.empty() && q2.empty() ) {
        int temp;
        while( !q1.empty() ) {
            temp = q1.front();
            q1.pop();
            if(q1.empty())
                return temp;
            q2.push(temp);
        }
    }
    cerr << "Error: Both queues have values!" << endl;
    exit(1);
}

int main() {
    int i;
    stack<int> s;
    twoQueues tq;
    for(i=0;i<10;i++) {
        s.push(i);
        tq.push(i);
    }
    
    for(i=0;i<s.size();i++) {
        assert( s.top() == tq.pop() );
        s.pop();
    }
}
