#include <QtCore/QCoreApplication>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#define n 30000
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
void radix(int *ar, int *br)
{
    int *cr=new int [n];
    int i;
    for (i = 0; i <= n; i++)
        cr[i]=0;
    for (i = 0; i < n; i++)
        cr[ar[i]]+=1;
    for (i = 1; i < n+1; i++)
        cr[i]+=cr[i-1];
    for (i = n-1; i >= 0; i--)
      {
         br[cr[ar[i]]-1]=ar[i];
         cr[ar[i]]-=1;
      }
  }

int main()
{
    clock_t start, end;
    int *arr1=new int [n];
    int *arr2=new int [n];
    int *br=new int [n];
    for(int i=0; i<n; i++) arr1[i]=rand()%20;
    for(int i=0; i<n; i++) arr2[i]=rand()%20;
   // for(int i=0; i<n; i++) cout<<arr[i]<<"\t";
    start=clock();
    selection(arr1);
    end=clock();
    cout<<"\nt1="<<end-start;
    start=clock();
    radix(arr2, br);
    end=clock();
    cout<<"\nt2="<<end-start;
   // cout<< "\nsort:\n";
   //for(int i=0; i<n; i++) cout<<br[i]<<"\t";
    system("pause");

}
