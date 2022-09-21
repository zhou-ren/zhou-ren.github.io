//
//  main.cpp
//  Discussion6
//
//  Created by Zhou Ren on 11/6/13.
//  Copyright (c) 2013 Zhou Ren. All rights reserved.
//



/*
 //Example 1 swap the array
 #include <iostream>
 using namespace std;
 
 void swap(int x[],int N)
 {
 int temp;
 for(int i = 0; i < N/2 ; i++ )
 {
 temp = x[ i ];
 x[ i ] = x[ N-i-1 ];
 x[ N-i-1 ] = temp;
 }
 }
 int main()
 {
 const int SIZE = 10;
 int x[ SIZE ] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
 
 swap(x, SIZE);
 
 for(int i = 0 ; i < SIZE ; i++)
 cout << x[i] << " ";
 
 cout << endl;
 return 0;
 }
 */


/*
 //Example 2
 #include <iostream>
 using namespace std;
 
 void Produce_Fibo(int a[], int len)
 {
 if (len==0)
 {
 cout << "Length cannot be 0, ERROR\n";
 return;
 }
 else if(len==1)
 {
 a[0] = 0;
 return;
 }
 else if(len==2)
 {
 a[0] = 0;
 a[1] = 1;
 return;
 }
 
 a[0] = 0;
 a[1] = 1;
 for (int i=2; i<len; i++) {
 a[i] = a[i-1]+a[i-2];
 }
 }
 
 int main()
 {
 int len;
 cout << "input length:";
 cin >> len;
 int Fibo[len];
 cout << "Creat length = " << len << " Fibonacci array:" << endl;
 Produce_Fibo(Fibo, len);
 
 for (int i=0; i<len; i++) {
 cout << Fibo[i] << " ";
 }
 cout << endl;
 return 0;
 }*/





/*
 //Example 3 2D array
 #include <iostream>
 using namespace std;
 
 int main()
 {
 const int SIZE = 3;
 int a[SIZE][4] = { {1,2,3}, {4,5,6}, {7,8,9,10} };
 
 for(int i = 0 ; i < SIZE ; i++ )
 {
 for(int j = 0 ; j < 4 ; j++ )
 cout << a[ i ][ j ];
 cout << endl;
 }
 
 return 0;
 }
*/
 



/*
//Example 4 2D array as a function parameter
#include <iomanip>
#include <iostream>
using namespace std;
const int SIZE = 5;
// Print the 5x5 grid.
void printGrid(int grid[][SIZE]);
int main()
{
    int grid[SIZE][SIZE];
    // TODO: Fill in the grid.
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            grid[i][j] = i * SIZE + j + 1;
        }
    }
    printGrid(grid);
}

void printGrid(int grid[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << setw(2) << grid[i][j] << " ";
        }
        cout << endl;
    }
}
*/



/*
//Note #1:
#include "iostream"
#include "cctype"
using namespace std;

bool isUppercase(char s[]);

int main()
{
    char cstr1[] = "abCD";
    char cstr2[] = "ABCD";
    cout << "cstr1 is " << isUppercase(cstr1) << "; cstr2 is " << isUppercase(cstr2) << endl;
    return 0;
}

bool isUppercase(char s[])
{
    for (int i=0; s[i]!='\0'; i++)
    {
        if (islower(s[i]))
        {
            return false;
        }
    }
    return true;
}*/


/*
//Note #2:
#include "iostream"
#include "cctype"
#include <cstring>
using namespace std;

bool isUppercase(char s[]);
int UpperStrings(char s[][20], int n);

int main()
{
    
    char cstrs[][20] = {"abCD", "ABCD", "BCD", "NNN", "ABC","AB,", "AB", "C"};
    int num_Upperstr = UpperStrings(cstrs, sizeof(cstrs)/sizeof(cstrs[0]));
    
    /*
    double a=1;
    int b=1;
    bool c=1;
    char d='a';
    //cout << sizeof(a) << ", " << sizeof(b) << ", " << sizeof(c) << ", " << sizeof(d) << ", " << endl;
    cout << sizeof(a)<< "," << sizeof(cstrs) << "," << sizeof(cstrs[0]) << endl;
    */
/*
    cout << "Totally there are " << num_Upperstr << " number of Upper C-strings." << endl;
    return 0;
}

bool isUppercase(char s[])
{
    for (int i=0; s[i]!='\0'; i++)
    {
        if (islower(s[i]))
        {
            return false;
        }
    }
    return true;
}

int UpperStrings(char s[][20], int n)
{
    int num = 0;
    for (int i=0; i<n; i++)
    {
        if(isUppercase(s[i]))
        {
            num++;
            cout << s[i] << " " << endl;
        }
    }
    return num;
}*/



/*
//Example #1:  How to append a character to a cstring
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// how to append a character into a cstring
	char cstr[80] = "Hello, world!";
	char c = 'K';
    
	size_t leng = strlen(cstr);
	cstr[leng] = c;
	cstr[leng + 1] = '\0';
    
    cout << cstr << endl;
    
    for (int i=0; i<=leng; i++) {
        cout << cstr[i] << " ";
    }
	return 0;
}
*/


