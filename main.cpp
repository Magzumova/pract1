#include <QtCore/QCoreApplication>
#include <iostream>
#include <stdlib.h>
#define n 20
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
    int *arr=new int [n];
    for(int i=0; i<n; i++) arr[i]=rand()%20;
    for(int i=0; i<n; i++) cout<<arr[i]<<"\t";
    selection(arr);
    cout<< "\nsort:\n";
    for(int i=0; i<n; i++) cout<<arr[i]<<"\t";
    system("pause");

}
