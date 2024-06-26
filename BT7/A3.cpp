#include <iostream>

using namespace std;
int count_even(int* arr, int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      count++;
      }
  }
  return count;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);

  int countFirstFive = count_even(arr, 5);
  cout<< countFirstFive << endl;

  int countLastFive = count_even(arr + size - 5, 5);
  cout<< countLastFive << endl;

  return 0;
}
