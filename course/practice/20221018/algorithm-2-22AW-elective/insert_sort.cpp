#include <iostream>
using namespace std;
template <typename T>
void insert_sort(T arr[], int length) {
    T key;
    for (int j = 1;j < length;j++) {
        key = arr[j];
        int i = j - 1;
        while (i > 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}
int main() {
    int array[] = { 1,45,70,53,42,56,19,33,54,50,29,80,90,72,60,78,37,51,69,38,76,58,61,6,31,52,86,88,36,14,57,44,23,40,99,8,3,2,97,26,10,81,68,87,79,74,95,20,73,67,13,32,12,11,18,25,84,34,85,9,82,4,5,71,16,77,92,41,15,98,49,75,91,21,17,89,96,7,93,55,64,39,22,94,43,24,47,30,62,83,35,27,59,66,63,28,65,46,48 };
    insert_sort(array, sizeof(array) / sizeof(int));
    for (auto it : array) {
        printf("%d ", it);
    }
    return 0;
}