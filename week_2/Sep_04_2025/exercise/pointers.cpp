#include <iostream>

int *create_reversed_copy(const int *arr, const int size)
{
    /*
        we need to initialize this dynamically as we want it to exist
        outside the function scope
    */
    int *out = new int[size];
    for (int j = 0, i = size - 1; i >= 0; j++, i--)
    {
        out[j] = arr[i];
    }
    return out;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    const int size = 5;
    int *res = create_reversed_copy(arr, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << i << ": " << res[i] << std::endl;
    }
    delete[] res;
    return 0;
}