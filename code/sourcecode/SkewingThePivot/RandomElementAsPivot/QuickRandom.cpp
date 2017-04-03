#include <iostream>
#include <cstdlib>
#include <algorithm>

template <typename T>
void display(T *array, size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void quickSort(T *array, size_t left, size_t right)
{
    size_t lptr = left;
    size_t rptr = right - 1;
    size_t size = right - left;

    if (size > 1) {
        T pivot = array[rand() % size + lptr];

        while (lptr < rptr) {
            while (array[rptr] > pivot && rptr > lptr) {
                rptr--;
            }

            while (array[lptr] < pivot && lptr <= rptr) {
                lptr++;
            }

            if (lptr < rptr) {
                std::swap(array[lptr], array[rptr]);
                lptr++;
            }
        }

        quickSort(array, left, lptr);
        quickSort(array, rptr, right);
    }
}

int main(void)
{
    size_t size = 10;
    int *array = new int[size];

    for (int i = 0; i < size; ++i) {
        array[i] = (100.0 * rand()) / RAND_MAX;
    }

    display(array, size);
    quickSort(array, 0, size);
    display(array, size);

}

