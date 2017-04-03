#include <iostream>
#include <iomanip>

using namespace std;

#define SIZE 50


void swap(int a[], int i, int j)
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void print(const int arr[])
{
	for(int i=0;i < SIZE; i++) {
		cout << setw(3) << arr[i];
	}
	cout << endl;
}


void qsort(int a[], int left_index, int right_index)
{
	int left, right, pivot;
	if(left_index >= right_index) return;

	left = left_index;
	right = right_index;


	pivot = a[(left_index + right_index) /2];


	while(left <= right) {
		while(a[left] < pivot) left++;
		while(a[right] > pivot) right--;
		if(left <= right) {
			swap(a,left,right);
			left++; right--;
		}

	}


	qsort(a,left_index,right);
	qsort(a,left,right_index);
}


int main ()
{
    int i;
    int a[50],j=50;

  for(i=0;i<50;i++)
    {
    a[i]=j;
    j--;
    }
    print(a);
    qsort(a,0,SIZE-1);
    print(a);

}
