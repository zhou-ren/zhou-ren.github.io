//
//  main.cpp
//  CS32_1B_week7_code
//
//  Created by Zhou Ren on 2/19/15.
//  Copyright (c) 2015 Zhou Ren. All rights reserved.
//

/*
//1
//The following code prints all elements in the array a[]in the order they appear in the array. What is asimple change you can make to the code, such that the elements are printed in the reverse order?
#include <iostream>
using namespace std;

void printArrayInOrder(const double a[], int n){
    if (n == 0)
        return;
    
    cout << a[0] << endl;
    printArrayInOrder(a + 1, n - 1);
}
 
 solution:
 printArrayInOrder(a + 1, n - 1);
 cout << a[0] << endl;
*/


/*
//2
//Given two positive integers m and n such that m < n, the greatest common divisor of m and n is the same as the greatest common divisor of m and n-m. Use this fact to write a recursive function gcd(). (Suggestion: try a few examples on paper prior to writing code.)

//solution:
int gcd(int m, int n){
    if (n == m)
        return m;
    n = n - m;
    if (m < n)
        return gcd(m, n);
    return gcd(n, m);
}
 //Can you improve this by exploiting the fact that greatest common divisor of m and n (where m < n) is equal to the greatest common divisor of (n % m) and m?
*/


/*
//3
//Write a function powerOfTwo that, given a non-negative number x, returns 2x (2^x, or “2 raised to power x”) recursively, assuming 2x is something that can be represented as an integer. Do not use a loop, and do not use the character '*' anywhere in your code.
 
 solution1: (Noting the fact that 2^x = 2^(x-1) + 2^(x-1))
 int powerOfTwo(int x)
 {
 if (x == 0)
 return 1;
 return powerOfTwo(x – 1) + powerOfTwo(x – 1);
 }
 
 other solutions:
 //can you improve the complexity from O(n) to O(log n).
 */


/*
//4
//consider the following program:
#include <iostream>
#include <string>
using namespace::std;

class A{
public:
    A() : m_msg("Apple") {}
    A(string msg) : m_msg(msg) {}
    virtual ~A() { message(); }
    
    void message() const
    {
        cout << m_msg << endl; }
private:
    string m_msg;
};

class B : public A{
public:
    B() : A("Orange") {}
    B(string msg) : A(msg), m_a(msg) {}
    
    void message() const
    {
        m_a.message(); }
private: A m_a;
};

int main() {
    A *b1 = new B;
    B *b2 = new B;
    A *b3 = new B("Apple");
    b1->message();
    b2->message();
    b3->message();
    delete b1;
    delete b2;
    delete b3;
}
 
 //what does it output? How many times will you see the word Apple in the output? How about Orange?
 //What if we make A's message() virtual, i.e., "virtual void message() const;" what does it output? How many times will you see the word Apple in the output? How about Orange?
*/


/*
//5
 //Using a stack, write a function that takes in an infix arithmetic expression exp, which may involve parentheses ((, )), curly braces ({, }), and square brackets ([, ]), and returns true if they are balanced, false otherwise. If the expression does not include any parentheses, curly braces, or square brackets, it should return true.
 //For example:
 //(2 + 4) * 6                                    balanced
 //[(2 + 4) * {15 - 20}]                          balanced
 //({12+30]]                                      unbalanced
 //(({{[[<<<_*_>>>]]}}))                          balanced
 //(((( )))))))))))                               unbalanced
 
//solution:
#include <string>
#include <stack>
#include <iostream>
using namespace std;

bool balanced(const string &exp)
{
    stack<char> parenStack;
    for(int i = 0; i < exp.size(); ++i)
    {
        char ch = exp[i];
        switch(ch) {
            case '(':
            case '{':
            case '[':
                parenStack.push(ch);
                break;
            case ')':
            case '}':
            case ']':
                if (parenStack.empty())  // Extra closed paren?
                    return false;
                if ((parenStack.top() == '(' && ch == ')') || (parenStack.top() == '{' && ch == '}') || (parenStack.top() == '[' && ch == ']'))
                {
                    parenStack.pop();
                } else {
                    return false;
                    break; }
        }
    }
    // Mismatch?
    // Extra open paren?
    if (!parenStack.empty())
        return false;
    return true;
}
int main(){
    
    cout<<balanced("(({{[[<<<_*_>>>]]}}))") <<endl;
    
}
*/