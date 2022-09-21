//
//  main.cpp
//  Week8
//
//  Created by Zhou Ren on 2/27/15.
//  Copyright (c) 2015 Zhou Ren. All rights reserved.
//

/*
// 1. What is the output of the following program?
#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int A[], int n, int stop) // From Carey’s implementation.
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[minIndex])
                minIndex = j;
        }
        swap(A[i], A[minIndex]);
        start++;
        if(start == stop)
            return ;
    }
}
int main()
{
    int data[12]={3, 9, 2, 5, 1, 7, 8, 0, 6, 11, 10, 4};
    selectionSort(data, 12, 4);
    
    for(int i=0; i<12; i++)
        cout << data[i] << " ";
}

*/


/*
// 2. What is the output of the following program?
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(int A[], int n, int stop) // From Carey’s implementation.
{
    int start = 0;
    for(int s = 2; s <= n; s++)
    {
        int sortMe = A[ s - 1 ];
        int i = s - 2;
        while (i >= 0 && sortMe < A[i])
        {
            A[i+1] = A[i];
            --i;
        }
        A[i+1] = sortMe;
        start++;
        if(start == stop)
            return ;
    }
}
int main()
{
    int data[12]={3, 9, 2, 5, 1, 7, 8, 0, 6, 11, 10, 4};
    insertionSort(data, 12, 4);
    
    for(int i=0; i<12; i++)
        cout << data[i] << " ";
    cout << endl;
}
*/


/*
// 3. What is the output of the following program?
#include <iostream>
#include <algorithm>
using namespace std;
void bubbleSort(int Arr[], int n, int stop)
{
    int start = 0;
    bool atLeastOneSwap;
    do
    {
        atLeastOneSwap = false;
        for (int j = 0; j < (n-1); j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swap(Arr[j],Arr[j+1]);
                atLeastOneSwap = true;
            }
        }
        start = start + atLeastOneSwap;
        if(start== stop)
            return ;
    }
    while (atLeastOneSwap == true);
}
int main()
{
    int data[12]={3, 9, 2, 5, 1, 7, 8, 0, 6, 11, 10, 4};
    bubbleSort(data, 12, 4);
 
    for(int i=0; i<12; i++)
        cout << data[i] << " ";
    cout << endl;
}
*/


/*
// 4. Fill in the following blank to make a shellsort algorithm.
#include <iostream>
#include <algorithm>
using namespace std;
void ShellSort(int Arr[], int n)
{
    bool atLeastOneSwap;
    for(int delta = n/2 ;  delta>=1; delta /= 2)
    {
        do {
            atLeastOneSwap = false;
            for(int i=0; (i+delta) < n; i++)
            {
                if(Arr[i]>Arr[i+delta])
                {
                    swap(Arr[i], Arr[i + delta] );
                    atLeastOneSwap = true;
                }
            }
        }while(atLeastOneSwap);
    }
}

int main()
{
    int data[12]={3, 9, 2, 5, 1, 7, 8, 0, 6, 11, 10, 4};
    ShellSort(data, 12);
    
    for(int i=0; i<12; i++)
        cout << data[i] << " ";
    cout << endl;
}
*/



/*
// 5. What is the output of the following program?
#include <iostream>
#include <algorithm>
using namespace std;
int Partition(int a[], int low, int high) // From Carey’s implementation.
{
    int pi = low;
    int pivot = a[low];
    do {
        while ( low <= high && a[low] <= pivot ) low++;
        while ( a[high] > pivot ) high--;
        if ( low < high )
            swap(a[low], a[high]);
    }while ( low < high );
    swap(a[pi], a[high]);
    pi = high;
    return (pi);
}
void QuickSort(int Array[],int First,int Last, int depth, int limit)
{
    if( depth == limit ) return ;
    if (Last - First >= 1 )
    {
        int PivotIndex;
        PivotIndex = Partition(Array,First,Last);
        QuickSort(Array,First,PivotIndex-1, depth+1, limit); // left
        QuickSort(Array,PivotIndex+1,Last, depth+1, limit); // right
    }
}

int main()
{
    int data[12]={3, 9, 2, 5, 1, 7, 8, 0, 6, 11, 10, 4};
    QuickSort(data, 0, 11, 0, 1);
    
    for(int i=0;i<12;i++)
        cout << data[i] << " ";
    cout << endl;
}
*/



/*
// 6. Please fill in the blank first and then find the output of the program.
#include <iostream>
using namespace std;
void merge(int data[],int n1, int n2) // From Carey’s implementation.
{
    int i=0, j=0, k=0;
    int *temp = new int[n1+n2];
    int *sechalf = data + n1;
    while (i < n1 || j < n2)
    {
        if (i == n1)
            temp[k++] = sechalf[j++];
        else if (j == n2)
            temp[k++] = data[i++];
        else if (data[i] < sechalf[j])
            temp[k++] = data[i++];
        else
            temp[k++] = sechalf[j++];
    }
    for (i=0;i<n1+n2;i++)
        data[i] = temp[i];
    delete [] temp;
}

void MergeSort(int Arr[], int left, int right, int depth, int limit)
{
    if(depth == limit)
        return ;
    if(left < right)
    {
        int middle = ( left + right ) / 2;
        MergeSort(Arr, left, middle, depth+1, limit);
        MergeSort(Arr, middle+1, right, depth+1, limit);
        merge(Arr+left, middle-left+1, right-middle );
    }
}

int main()
{
    int data[12]={3, 9, 2, 5, 1, 7, 8, 0, 6, 11, 10, 4};
    MergeSort(data,0, 11, 0, 1);
    
    for(int i=0;i<12;i++)
        cout << data[i] << " ";
    cout << endl;
}
*/
