#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int arraySize;
    long long int movements = 0;

    std::cin >> arraySize;
    std::vector<int> array(arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        std::cin >> array[i];
    }

    for (int i = 0; i < arraySize - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            long long dif = array[i] - array[i + 1];
            movements += dif;
            array[i + 1] = array[i];
        }
    }

    std::cout << movements << "\n";
}
