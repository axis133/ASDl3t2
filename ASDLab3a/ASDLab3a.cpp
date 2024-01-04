#include <iostream>
#include <cstring>

using namespace std;

void countingSort(int* array, int n, int k) {
    setlocale(0,"");
    int* c = (int*)malloc((k + 1) * sizeof(*array));
    memset(c, 0, sizeof(*array) * (k + 1));
    for (int i = 0; i < n; ++i) {
        ++c[array[i]];
    }
    int b = 0;
    for (int i = 0; i < k + 1; ++i) {
        for (int j = 0; j < c[i]; ++j) {
            array[b++] = i;
        }
    }

    free(c);
}

int main() {
    int array[] = { 5, 6, 8, 10, 3, 6, 4 };
    int n = sizeof(array) / sizeof(array[0]);
    int k = 10; 

    countingSort(array, n, k);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
