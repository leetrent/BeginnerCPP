#include <iostream>

using namespace std;

void print(const int *const array, size_t array_size);
int *apply_all(const int *const array1, size_t array1_size, const int *const array2, size_t array2_size);

int main() 
{
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << endl << "Output:" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    cout << endl;

    delete [] results;
    return 0;
}

void print(const int *const array, size_t array_size)
{
    cout << "[";
    for ( size_t ii{0}; ii < array_size; ii++)
    {
        if ( ii > 0 ) { cout << " "; }
        cout << array[ii];
    }
    cout << "]" << endl;
}

int* apply_all(const int *const array1, size_t array1_size, const int *const array2, size_t array2_size)
{
    int *result_ptr{nullptr};
    result_ptr = new int[array1_size * array2_size];
    size_t kk{0};

    for (size_t jj{0}; jj < array2_size; jj++)
    {
        for ( size_t ii{0}; ii < array1_size; ii++)
        {
            //*(result_ptr + kk++) = (array2[jj] * array1[ii]);
            result_ptr[kk++] = (array2[jj] * array1[ii]);
        }
    }
    return result_ptr;
}