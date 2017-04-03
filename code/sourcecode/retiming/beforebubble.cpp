#include <iostream>
#include <iomanip>

using namespace std;


void print(const int arr[])
{
	for(int i=0;i <10; i++) {
		cout << setw(3) << arr[i];
	}
	cout << endl;
}

/* sort arr[left]...arr[right] into increasing order */
void sortArray(int a[], int length)
{
	int  len=length;
	bool swapped= true;
	while(swapped)
	{
	    swapped=false;
	    for(int i=1;i<len;i++)
	    {
	        int temp=0;
	        if(a[i-1]>a[i])
	        {
	            temp=a[i-1];
	            a[i-1]=a[i];
	            a[i]=temp;
	            swapped=true;
	        }
	    }
	}
  
}


int main ()
{
    int i;
    int a[10],n;
    
    std::cout<<"enter n";
    std::cin>>n;
    std::cout<<"enter array elements";
    for(i=0;i<n;i++)
    {
    std::cin>>a[i];
    }
    
    sortArray(a,n);
    print(a);
   
}