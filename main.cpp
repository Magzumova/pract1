#include <QtCore/QCoreApplication>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#define n 15000
using namespace std;

void selection(int *ar)
 {
     int i, j, mx, nmx;

     for(i = 0; i < n-1; i++)
       {
         mx=ar[i];
         nmx=i;
         for(j = i+1; j < n; j++)
           {
             if (ar[j]<mx)
                {
                 mx=ar[j];
                 nmx=j;
                 }
           }
          ar[nmx]=ar[i];
          ar[i]=mx;
           }
     }

int main()
{
    clock_t start, end;
    int *arr=new int [n];
    for(int i=0; i<n; i++) arr[i]=rand()%20;
    //for(int i=0; i<n; i++) cout<<arr[i]<<"\t";
    start=clock();
    selection(arr);
    end=clock();
   // cout<< "\nsort:\n";
   // for(int i=0; i<n; i++) cout<<arr[i]<<"\t";
    cout<<"\nt="<<end-start;
    system("pause");

}
