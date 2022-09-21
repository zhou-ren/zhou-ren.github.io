//
//  main.cpp
//  Discussion5
//
//  Created by Zhou Ren on 10/31/13.
//  Copyright (c) 2013 Zhou Ren. All rights reserved.
//

/*
//Debug
#include <iostream>
using namespace std;
int sum(int s, int e)
{
    int n=0;
    int i=s;
    for (; i<=e; i++)
    {
        n += i;
    }
    return n;
}


int main(int argc, const char * argv[])
{
    int x = 10, y;
    cin >> y;
    
    double z = sum(1,5)*x;
    
    cout << z << endl;
}
*/

/*
// Example 1 Array initialization
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    int a[5] = {1,2,3};
    string s[5] = {"ab","cd","ef"};
    char c[5] = {'a', 'b', 'c'};
    cout << a[0] << "=" << a[3] << "=" << a[4] << "=" << a[5] <<endl;
    cout << s[0] << "=" << s[3] << "=" << s[4] << "=" << s[5] <<endl;
    cout << c[0] << "=" << c[3] << "=" << c[4] << "=" << c[5] <<endl;

    return 0;
}
*/


/*
// Example 3 Array output
#include <iostream>
using namespace std;

int main()
{
	int array[] = {1, 2, 3, 4};
	cout << "I am trying to display the array" << endl;
	cout << array << endl;
    
	cout << "I am trying to display the array in another way" << endl;
	for(int i=0; i<4; i++)
		cout << array[i] << endl;
}
*/


/*
//Example 4 Array read in from the keyboard.
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 5;

int main()
{
	// Declare Array a here with type int
    
	int array[ARRAY_SIZE];
	cout << "Fill in array:" << endl;
	// Fill in array a by reading from the keyboard 5 values
	for(int i=0; i< ARRAY_SIZE; i++)
    {
        cin >> array[i];
    }
    
    cout << "input is:" << endl;
    for(int i=0; i<ARRAY_SIZE; i++)
		cout << array[i] << endl;
    return 0;
}
*/




//Example 5 Use array to compute
#include <iostream>
using namespace std;
//Adding 2 polynomials: 6X^3 + 3X^2 + 2X + 1 and 9X^3 + 15X^2 + 299
int main()
{
	const int SIZE = 4;
	int poly1[] = {1, 2, 3, 6};
	int poly2[] = {299, 0, 15, 9};
	int result[ SIZE ];
	int i;
    
	for(i = 0 ; i < SIZE ; i++)
		result[ i ] = poly1[ i ] + poly2[ i ];
    
	cout << "result is: ";
    
	for(i = SIZE-1 ; i > 0; i--)
		cout << result[i] << "X^" << i << " + ";
	cout << result[0] << endl;
    
	return 0;
}












