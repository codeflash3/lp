// Selection sort in C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> &b, int k) {
  for (int i = 0; i < k; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
}

// void selectionSort(int array[], int size) {
//   for (int i = 0; i < size - 1; i++) {
//     int min_idx = i;
//     for (int j = i + 1; j < size; j++) {

//       if (array[j] < array[min_idx])
//         min_idx = j;
//     }

//     swap(array[min_idx], array[i]);
//   }
// }

void selectionSort2(vector<int> &b, int k) {
  for (int i = 0; i < k - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < k; j++) {

      if (b[j] < b[min_idx])
        min_idx = j;
    }

    swap(b[min_idx], b[i]);
  }
}

// driver code
int main() {
  int n;
  cout<<"Enter size of your array : ";
  cin>>n;
  vector<int> a(n);
  cout<<"Enter your array : "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  selectionSort2(a,n);
  cout << "Sorted array in Ascending Order:\n";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;


}