#include<iostream>
using namespace std;
#include<fstream>
#include <cstdlib>
using std::ifstream;
int no[1000],elements=1,end,beg,loc,m;

 
template<class Item>
 class STACK{
 private:
     Item *a;int n;
 public:
     STACK(int greater){
 
         a=new Item[greater];n=0;
 
 
     }
     int empty()const {
         return n==0;
 
     }
     void push(Item item){
         a[n++]=item;
         }
    Item pop() {
         return a[--n];
 
    }
 
 
 };
 template<class Item>
 int partition (Item a[],int l,int r){
 
     int i=l-1;
     int j=r;
     Item pivot = a[(l + r) / 2];
     
     
     
     while (i <= j)
     {
         while (a[i] < pivot)
             i++;
         while (a[j] > pivot)
             j--;
         if (i <= j)
         {
           int  tmp = a[i];
             a[i] = a[j];
             a[j] = tmp;
             i++;
             j--;
         }
     };
        return i;
        }
 inline void pushnxt(STACK<int>&s,int a,int b){
     s.push(b);
     s.push(a);
     }
 
 
 
 template<class Item>
 void quicksort(Item a[],int l,int r){
 
     STACK<int> s(1);
     pushnxt(s,l,r);
     while (!s.empty()){
    int l=s.pop();
    int r=s.pop();
       if (r<=l) continue;
       int i=partition(a,l,r);
      
        if(i<=r){
            pushnxt(s,i+1,r);
            pushnxt(s,l,i-1);
 
        }
     }
 }
 

int main()
{
int no[20];
int elements;
cout<<"n";
cin>>elements;
for(int i=0;i<elements;i++)
{
cin>>no[i];
}

quicksort(no,1,elements-1);
cout<<"\n\n\tSORTED ARRAY\n\t";
for(int i=0;i<elements;i++)
cout<<" "<<no[i];

}