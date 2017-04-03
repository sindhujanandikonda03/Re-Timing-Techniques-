#include <string>
#include <vector>
#include <list>
#include <iostream>


class Sort
{
public:
static void swap(std::vector<int> &a, int i, int j);

static void sort(std::vector<int> &a);

};

void Sort::swap(std::vector<int> &a, int i, int j)
{

		int temp = a[i];

		a[i] = a[j];

		a[j] = temp;

}

void Sort::sort(std::vector<int> &a)
{

int n = a.size();
std::cout<<"n value is"<<n<<"\n";
int i;

bool swapped = true;

while (swapped)
{

  swapped = false;

  for (i = 1; i<= n; i += 2)
  {

	 //if(a[i] > a[i+1]) {


	  if (a[i]>a[i+1])
	  { // C3: Changed

		  swap(a, i, i + 1);

		  swapped = true;

	  }

  }

  for (i = 0; i< n; i += 2)
  {

	  if (a[i]>a[i+1])
	  {

		 swap(a, i, i + 1);

		 swapped = true;

	  }

  }

}

}


int main(std::vector<std::wstring> &args)
{
    Sort s;
    int myints[]={9,8,7,6,5,4,3,2};
     std::vector<int> a(myints, myints + sizeof(myints) / sizeof(int) );
     std::cout<<"before sorting";
for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';



s.sort(a);
std::cout<<"after sorting";
for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

}
