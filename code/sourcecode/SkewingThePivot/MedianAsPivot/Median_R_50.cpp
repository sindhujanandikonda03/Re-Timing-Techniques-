#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define SIZE 50

/* swap a[i] and a[j] */
void swap(int a[], int i, int j)
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void print(const int arr[])
{
	for(int i=0;i < 50; i++) {
		cout << setw(3) << arr[i];
	}
	cout << endl;
}

/* sort arr[left]...arr[right] into increasing order */
void qsort(int a[], int left_index, int right_index)
{
	int left, right, pivot;
	if(left_index >= right_index) return;

	left = left_index;
	right = right_index;

        // pivot selection
	pivot = a[(left_index + right_index) /2];

        // partition
	while(left <= right) {
		while(a[left] < pivot) left++;
		while(a[right] > pivot) right--;
		if(left <= right) {
			swap(a,left,right);
			left++; right--;
		}
		//print(a);
	}

        // recursion
	qsort(a,left_index,right);
	qsort(a,left,right_index);
}

int main()
{
    int a[50];
	//int a[SIZE]={1, 12, 5, 26, 7, 14, 3, 7, 2};
	 for (int i = 0; i < 50; ++i) {
        a[i] = (50.0 * rand()) / RAND_MAX;
	 }
	print(a);
	cout<<"\t";
	qsort(a,0,49);
	print(a);
}
