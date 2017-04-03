#include<iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;

//Function for partitioning array
int part(int low,int high,int *a)
{
     int i,h=high,l=low,p,t;  //p==pivot
     p=a[low];
     while(low<high)
     {
                    while(a[l]<p)
                    {
                                   l++;
                    }
                    while(a[h]>p)
                    {
                                   h--;
                    }
                    if(l<h)
                    {
                                t=a[l];
                                a[l]=a[h];
                                a[h]=t;
                    }
                    else
                    {
                        t=p;
                        p=a[l];
                        a[l]=t;
                        break;
                    }
     }
     return h;
}

void quick(int l,int h,int *a)
{
  int index,i;
  if(l<h)
  {
          index=part(l,h,a);
          quick(l,index-1,a);
          quick(index+1,h,a);
  }
}

int main()
{
    int i;
      int a[50],j=0;
      int n=50,l,h;
     // cout<<"Enter number of elements:";
      //cin>>n;
      //cout<<"Enter the elements (Use Space As A Separator):";

       for (int i = 0; i < 50; ++i) {
        a[i] =j;
        j++;
	 }

      for(i=0;i<50;i++)
      {
                      cout<<a[i]<<"\t";
      }
      h=n-2;
      l=0;
      quick(l,h,a);
      cout<<"\nAfter Sorting:\n";
      for(i=0;i<50;i++)
      {
                cout<<a[i]<<"\t";
      }
      return 0;
}
