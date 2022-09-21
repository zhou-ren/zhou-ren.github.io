//
//  main.cpp
//  CS32_1B_week6_code
//
//  Created by Zhou Ren on 2/12/15.
//  Copyright (c) 2015 Zhou Ren. All rights reserved.
//  Thanks to Kung Hua Chang for sharing some of the problems.
//



//1 what is the output of code below?
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> var;
    for(int i=0;i<5;i++)
        var.push_back(i);
    vector<int>::iterator it = var.begin();
    
    while(it != var.end()) {
        cout << *it << endl;
        it++;
    }
}



/*
//2 what's the output of the code below?
#include <iostream>
using namespace std;
int sum(int* begin, int* end)
{
    cout << "Use int sum()" << endl;
    int total = *begin++;
    while(begin != end)
    {
        total += *begin;
        begin++;
    }
    return total;
}

template <typename T>
T sum(T* begin, T* end)
{
    cout << "Use T sum()" << endl;
    T total = *begin++;
    while (begin != end)
    {
        total += *begin;
        begin++;
    }
    return total;
}
int main()
{
    double arr[] = { 0.5 , 1.5 , 2.5 , 3.5 };
    int values[] = { 1 , 2 , 3 , 4 };
    cout << "Sum of arr[] is " << sum(&arr[0],&arr[4]) << endl;
    cout << "Sum of values[] is " << sum(values , values + 4) << endl;
}
*/


/*
//3 fill in the blank below
#include <iostream> // no string is included…
using namespace std;
template <typename T>
class test {
public:
    test(T str): value( str ) { }
    T front() { return value; }
private:
    T value;
};
int main()
{
    test<char *> s("Hello World!");
    cout << s.front() << endl;
}
*/


/*
//4 there are 5 errors, find them.
#include <iostream>
using namespace std;
 
template<typename T>
struct pairs { T min_value, max_value; };

template<typename T>
pairs<T> min_max(T* begin, T* end)
{
    pairs<T> p;
    p.min_value = p.max_value = *begin++;
    while(begin != end)
    {
        if(*begin > p.max_value)
            p.max_value = *begin;
            if(*begin < p.min_value)
                p.min_value = *begin;
        begin++;
    }
    return p;
}
 
int main()
{
    double arr[] = { 5.5, 4.5, 3.5, 2.5, 1.5 };
    int values[] = { 1, 2, 3, 4, -1, 5 };
    
    pairs<double> dp;
    pairs<int> ip;
    dp = min_max(arr, arr + 5);
    ip = min_max(values, values + 6);
    cout << "min of arr[] is : " << dp.min_value
    << ", max of arr[] is : " << dp.max_value << endl;
    cout << "min of values[] is : " << ip.min_value
    << ", max of values[] is : " << ip.max_value << endl;
}
*/



//5 fill in the blank so that the code outputs:
/*
4
4
3
3
2
2
1
1
0
0
*/
/*
#include <iostream>
#include <stack>
using namespace std;
template<typename T>
class myStack : public stack
{
public:
    void push2(int n)
    {
        stack<T>::push(n);
        stack<T>::push(n);
    }
    void pop2()
    {
        stack<T>::pop();
        stack<T>::pop();
    }
};

int main()
{
    myStack<int> ms;
    for(int i=0;i<5;i++)
        ms.push2(i);
    
    auto size = ms.size();
    for(int i=0;i<size;i++)
    {
        cout << ms.top() << endl;
        ms.pop();
    }
}
*/



/*
//6. fill in the code below to output:
// Apple,Banana,Blackberry,Pineapple,Strawberry
// 1,2,3,4,5,6
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
class MyClass {
public:
    MyClass(T * begin , int n ) {
        T *end = begin+n;
        while( begin != end ) {
            name.push_back(*begin);
            begin++;
        }
        sort(name.begin(), name.end());
    }
    
    void output();
    
private:
    vector<T> name;
};

template <typename T>
void MyClass<T>::output(){
    typename vector<T>::iterator it = name.begin();
    cout << *it++;
    for( ; it != name.end() ; it++ )
        cout << "," << *it;
    cout << endl;
}


int main() {
    string str[5] = {"Pineapple","Strawberry","Banana","Apple","Blackberry"};
    MyClass<string> mc(str,5);
    mc.output();
    
    int in[] = {1,2,3,4,6,5};
    MyClass<int> mi(in, 6);
    mi.output();
}
*/
