//
//  main.cpp
//  Discussion 3
//
//  Created by Zhou Ren on 1/24/14.
//  Copyright (c) 2014 Zhou Ren. All rights reserved.
//


/*
//Example #0: Can we convert Program 1 to Program 2?
/////////////////////// Program 1 //////////////////////////
#include <iostream>
using namespace std;

int main()
{
	int grade = 85;
	if (grade >= 90)
		cout << "A"<< endl;
    else if (grade >= 80)
		cout << "B" << endl;
    else
		cout << "C or D or F" << endl;
    
    return 0;
}
*/






















/*
/////////////////////// Program 2 //////////////////////////
#include<iostream>
using namespace std;

int main()
{
	int grade = 85;
    
	switch(grade >= 90)
	{
        case true:
            cout << "A" << endl;
            break;
        default:
            switch(grade >= 80)
            {
                case true:
                    cout << "B" << endl;
                    break;
                default:
                    cout << "C or D or F" << endl;
            }
	}
    
    return 0;
}
*/


/*
 //Example #1: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int i;
    
	for(i = 0; i <= 0; i++)
		cout << "Hello Loop!" << endl;
	cout << "i = " << i << endl;
	return 0;
}
*/


/*
//Example #2: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int i;
    
	for(i = 0; i < 0; i++)
		cout << "Hello Loop! " << endl;
    
	cout << "i = " << i << endl;
    
	return 0;
}
*/


/*
//Example #3: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int i;
    
	for(i = 0; i < 1; i++)
		cout << "Hello Loop!" << endl;
    
	cout << "i = " << i << endl;
    
	return 0;
}
*/


/*
//Example #4: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int a=2,b=1;
    
	for(int i=0; i<4; i++)
		b = b*a;
    
	cout << b << endl;
	return 0;
}
*/



/*
 //Example #6: Does the following program have compilation error? If No, what is the output?
#include <iostream>
using namespace std;

int main()
{
	int a=2,b=1;
    
	for(int i=0;i<=4;i++)    ;
    b = b*a;
    
	cout << b << endl;
	return 0;
}
*/


/*
 //Example #7: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int x;
    
	for(x=0; x<=5; x++)
		if ( (x*x - 8*x + 15) == 0 )
			cout << "x = " << x << endl;
	return 0;
}
*/


/*
//Example#8: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int x=0,count=0; // Initialization
    
	while(count != 1)
	{
		if ( (x*x - 8*x + 15) == 0 )
		{
			cout << "x = " << x << endl;
            count++;
 		}
		x++;
	}
	return 0;
}
*/


/*
 //Example #9: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int i;
    
	for(i=0;i<3;i++)
		cout << i << endl;
    cout << i << endl;
    
	return 0;
}
*/



/*
 //Example #12: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
    int i, j;
	for(i=0,j=100 ; i < 10 ; i++ , j++ )
		;
    
	cout << "i = " << i << ", j = " << j << endl;
    
	return 0;
}
 */



/*
 //Example #14: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int i=0;
	double j=100;
    
	for(; i < 10 ; i++ , j++ )
        ;
    
	cout << "i = " << i << ", j = " << j << endl;
    
	return 0;
}
*/


/*
 //Example #15: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int i;
	double j;
    
	for( i = 0 , j = 100 ; (i < 10) && (j < 111) ; i++ , j++ )
        ;
    
	cout << "i = " << i << ", j = " << j << endl;
    
	return 0;
}
*/


/*
//Example #16: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int i , j;
    
	for( i = 0 ; i < 2 ; i++ )
		for( j = 0 ; j < 2 ; j++ )
			cout << i * j;
    
    cout << endl;
	return 0;
}
*/



/*
 //Example #17: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int n = 0, a = 2, b = 1;
	while(n!=4)
	{
		b = b*a;
		n++;
	}
	cout << a << "^" << n << "  =  " << b << endl;
	return 0;
}
*/


/*
 //Example #18: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int n=4,a=2,b=1;
    
	while(n != 0)
	{
		b = b*a;
		n--;
	}
    
	// Is the output the same as Example #17 ?
	cout << b << endl;
    
	return 0;
}
*/

/*
//Example #19: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int n=4,a=2,b=1;
    
	while(n!=4)
	{
		b = b*a;
		n++;
	}
    
	cout << b << endl;
    
	return 0;
}
*/

/*
//Example #20: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	do
	{
		a = 2;
	}while (1!=0);
        
        cout << "a = " << a << endl;
    
	return 0;
}
*/


/*
//Example #22: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int x = 2, y = 3, z = 0, n = 0;
    
	while ( n != y )
	{
		n = n + 1;  // 2
		z = z + x;   // 4
	}
    
	if ( z == (x * y) )
		cout << "z = x times y." << endl;
	else
		cout << "Trap!!" << endl;
    
	return 0;
}
*/


/*
//Example #23: What is the output of the program below?
#include <iostream>
using namespace std;

int main()
{
	int i;
    
	for(i = 1 ; i < 10 ; i = i + 2 )
		cout << i << endl;
    
	return 0;
}
*/

/*
//Example #24: What is the output of the program below?
#include <iostream>
using namespace std;
int main()
{
	int a = 1;
    
	do
	{
		a = 2;
	}while (1!=1);
    
	cout << "a = " << a << endl;
    
	return 0;
}
*/


//Example #25: All things considered….
#include <iostream>
using namespace std;
int main()
{
	int i=0;
    
	while(i < 1)
	{
		i++;
		cout << "T";
        
		do
		{
			cout << "h";
		}while(1!=1);
        
		if ( 1 <= 2 && 2<= 3 )
			cout << "i";
		if ( 1 >= 2 && 2 >= 3 )
			cout << "n";
		else
			cout << "s";
        
		for (; i<=1; i++)
			if( i < 2147483647 )   cout << " is ";
			else                             cout << "k ";
	}
    
	if( i == 1) cout << "again!";
	else           cout << "the last Example.";
    
	if ( i > -9999 )
		cout << " Thank you for your patience!" << endl;
    
	return 0;
}


