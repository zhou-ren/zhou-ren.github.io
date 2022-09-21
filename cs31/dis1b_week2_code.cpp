//
//  main.cpp
//  Discussion2
//
//  Created by Zhou Ren on 10/11/13.
//  Copyright (c) 2013 Zhou Ren. All rights reserved.
//

/*
//Example #1: Does the following program have compilation error? If Yes, where are they?
#include <iostream>

int main()
{
    // Identifiers: A C++ Identifier must start
    // with either a letter or the underscore
    // symbol, and the remaining characters must
    // all be letters, digits, or the underscore
    // symbol. C++ identifiers are case sensitive
    // and have no limit to their length.
    
	//int !@!#@$#@%!~@;  // (1)
    
	//int 12345;                      // (2)
    
	//int 999999999999X;     // (3)
    
    //double %ABC;   // (4)
    
	//double CS-31;       // (5)
    
	//double CS31;        // (6)
    
	//int a.b.c;                // (7)
    
	//int abc;          // (8)
    
	//double __________;            // (9)
    
	//int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
    
	return 0;
}*/



/*
//Example #2: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int a=1,b=2,c;
    
	c = a;
	a = b;
	b = c;
    
	cout << "a=" << a << "\nb=" << b << endl;
    
	return 0;
}
*/

/*
//Example #3: Arithmetic operation
#include <iostream>
using namespace std;

int main()
{
	int a=9,b=2;
    double c =a/b;
	cout << "a/b=" << a/b << c << endl;
	return 0;
}
*/

/*
//Example #4: Data type

#include <iostream>
using namespace std;

int main()
{
	int x = 100.999999999;
    
	if(x==100)
    {
        cout << "Right! ";
        cout << "x = 100!" << endl;
    }
	else
    {
        cout << "No! ";
        cout << "x = 101!" << endl;
    }
    
	return 0;
}
*/

/*
 //String
 #include <iostream>
 #include<string>
 using namespace std;
 int main()
 {
 int i;
 string s, s2;
 cin >> i;
 cin.ignore(1000, '\n');
 getline(cin, s2);

 cout << i << endl;
 cout << s2 << endl;
     
 return 0;
 }
*/


/*
//Example #4: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int a=1,b=2;
    
	if (0)     // Hmmmm....
		cout << "YES!!" << endl;
	else
		cout << "NO!!" << endl;
    
	return 0;
}
*/
 


/*
//Example #6: What is the output of the program below?
#include <iostream>

int main()
{
	if (10||0)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
    
	return 0;
}
*/


/*
//Example #9: What is the output of the program below? Is there any problem with the output?
#include <iostream>
using namespace std;
int main()
{
	int a,b;
    
	a=b=3;
    
	if(a > b) std::cout << "part 1" << std::endl;
	else if(a < b)       std::cout << "part 2" << std::endl;
    else if(a<b)cout << "part3" << std::endl;
    else
        std::cout << "part4" <<std::endl;
    
	return 0;
}
*/


/*
//Example #10: What is the output of the program below?
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a=1,b=2;
    std::string s="";
    
	if (s=="")
	{
		std::cout << "a equals to b" << std::endl;
	}
	if (a!=b)
	{
		std::cout << "a is not equal to b" << std::endl;
	}
    
	return 0;
}
*/

/*
//Example #11: What is the output of the program below?
#include <iostream>

int main()
{
	int a=1, b= -1000;
    
	if ( b > 0)
        if (b < 0) a = 2;
	else
        b = 3;
    
	std::cout << "a = " << a << std::endl;
    
	return 0;
}
*/


/*
//Example #12: Please write a multiway if-else statement that classifies the value of an int variable n into one of the following categories and writes out an appropriate message. (From textbook page 63, self-test 15). n < 0 or 0 <= n <= 100 or n > 100
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
    
	if ( n<0)
		std::cout << "n less than 0 " << std::endl;
    
	else if ( (n<=100))
		std::cout << "0 <= n <= 100 " << std::endl;
    
    if ( n<=50)  // It’s okay to use another way….
		std::cout << "n <= 50 " << std::endl;
	return 0;
}
*/



