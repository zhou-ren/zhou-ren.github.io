//
//  main.cpp
//  Discussion4
//
//  Created by Zhou Ren on 10/24/13.
//  Copyright (c) 2013 Zhou Ren. All rights reserved.
//  Code of UCLA CS31 Discussion section 2B, Week 4 (pls read the code together with discussion note).
//


/*
//example 1
#include <iostream>
using namespace std;
int sum(int begin, int end);

int main() 
{
    cout << sum(1, 20) << endl;
    cout << sum(20, 50) << endl;
    int sum1, sum2;
    sum1 = sum(4, 8);
    sum2 = sum(1, 10) + sum(15, 20);
    // stores the sum of 1+...+10+15+...+20 into sum2
    cout << sum1 << " " << sum2 << endl;
    return 0;
}

int sum(int begin, int end)
{
    int temp = 0;
    for (int i = begin; i <= end; i++)
    {
        temp += i; }
    return temp;
}*/


/*
//question 1
#include <iostream>
using namespace std;
double func(double x);

int main()
{
    double x=2, y;
    y = func(x);
    cout << "2x + 5 = " << y << endl;
}
double func(double x)
{
    return (2*x + 5);
}
*/

/*
//question 2
#include <iostream>
using namespace std;
double func(double x);
int sum(int begin, int end);

int main()
{
    double x1=3, x2=72, y1, y2, y;
    y1 = func(x1);
    y2 = func(x2);
    y = sum(y1, y2);
    
    cout << "sum from f(3) to f(72) = " << y << endl;
}

int sum(int begin, int end)
{
    int temp = 0;
    for (int i = begin; i <= end; i++)
    {
        temp += i; }
    return temp;
}

double func(double x)
{
    return (2*x + 5);
}*/


/*
//question 3
#include <iostream>
using namespace std;
int mystery(int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "#";
    }
    if (len % 2 == 0)
        return len + 1;
    else
        return len + 3;
}
int main() {
    int y = 5;
    while (y < 10)
    {
        y = mystery(y);
    }
    return 0;
}
*/


/*
//example 2
#include <iostream>
using namespace std;
void f(int a)
{
    a = -1;
    return;
}

void g(int &a)
{
    a = -1;
    return;
}

int main()
{
    int i = 0;
    f(i);
    cout << i << endl;
    g(i);
    cout << i << endl;
    return 0;
}*/

/*
//example 3
#include <iostream>
using namespace std;
double rush(double currentTotal, double yards, int& count)
{
    count++;
    
    return currentTotal + yards;
}
int main()
{
    double rushTotal = 0;
    int rushCount = 0;
    rushTotal = rush(rushTotal, 10.5, rushCount);
    rushTotal = rush(rushTotal, 5.3, rushCount);
    rushTotal = rush(rushTotal, 7.2, rushCount);
    // ampersand!
    cout << "Our running back ran " << rushCount << " times and the total of "
    << rushTotal << " yards." << endl;
    return 0;
}
*/

/*
//substr test
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abc";
    string ss = s.substr(2, 1);
    string sss= s.replace(2, 2, "ab");
    cout << ss << "  " << sss << endl;
    return 0;
}
*/

/*
//problem 1
#include <iostream>
#include <string>
using namespace std;
void printEveryOther(string s);

int main()
{
    string s;
    cout << "input a string pls: \n";
    getline(cin, s);
    printEveryOther(s);
}
void printEveryOther(string s)
{
    for (int i = 0; i < s.size(); i+=2)
        cout << s[i];
    cout << endl;
    return;
}*/


/*
//problem 2
#include <iostream>
#include <string>
using namespace std;
string reverse(string s);

int main()
{
    string s;
    cout << "input a string pls: \n";
    getline(cin, s);
    s = reverse(s);
    cout << s << endl;
}
string reverse(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        char temp = s[s.size() - i - 1];
        s[s.size() - i - 1] = s[i];
        s[i] = temp;
    }
    return s;
}*/


/*
//problem 3
#include <iostream>
#include <string>
using namespace std;
int strToInt(string s);

int main()
{
    string s;
    cout << "input a string pls: \n";
    getline(cin, s);
    int n = strToInt(s);
    cout << n << endl;
}
int strToInt(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i])==0 && isalnum(s[i])==1);
        else
            return -1;
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        sum *= 10;
        sum += s[i] - '0';
    }
    return sum;
}
*/

/*
//problem 4
#include <iostream>
#include <string>
using namespace std;
bool palindrome(string s);

int main()
{
    string s;
    cout << "input a string pls: \n";
    getline(cin, s);
    bool n = palindrome(s);
    cout << n << endl;
}

bool palindrome(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}*/


/*
//problem 5
#include <iostream>
#include <string>
using namespace std;
void order3Str(string &s1, string &s2, string &s3)
{
    if (s1 > s2)
        swap(s1, s2);
    if (s2 > s3)
        swap(s2, s3);
    if (s1 > s2)
        swap(s1, s2);
}
void swap(string &x, string &y)
{
    string temp = x;
    x = y;
    y = temp;
}

int main()
{
    string s1, s2, s3;
    cout << "pls input 3 strings 1 by 1, then I will order them: \n";
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    order3Str(s1, s2, s3);
    
    cout << "The first is " << s1 << "\n" << "The second is " << s2 << "\n" << "The third is " << s3 << endl;
}*/


/*
//problem 6
#include <iostream>
#include <string>
using namespace std;

string revert(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    string s;
    cout << "pls input a string, then I will revert it: \n";
    getline(cin, s);
    
    s = revert(s);
    
    cout << "The reverted string is " << s << endl;
}
*/


/*
//problem 7
#include <iostream>
#include <string>
using namespace std;
void mystery(int pos, string &str)
{
    if (pos < 0 || pos >= str.size())
        return;
    cout << str[pos] << " ";
    str = str.substr(0, pos) + str.substr(pos + 1);
}
int main() {
    string s = "abcdefg";
    mystery(3, s);
    mystery(3, s);
    mystery(4, s);
    mystery(1, s);
    cout << endl;
    cout << "s = " << s << endl;
}*/


/*
//problem 8
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isVowel(char c)
{
    char t = tolower(c);
    return t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u';
}

void consonantGroups(string s)
{
    bool printed = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isVowel(s[i]))
        {
            cout << s[i];
            printed = true;
        }
        else if (printed)
        {
            cout << " ";
            printed = false;
        }
    }
}

int main()
{
    //consonantGroups("abracadabra");
    //consonantGroups("whatawonderfulworld");
    consonantGroups("facebookandgoogle");
    cout << endl;
    return 0;
}
*/