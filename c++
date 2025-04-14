# Check-if-an-array-is-subset-using-two-pointer.of-another-array
Check if an array is subset of another array using --two pointer;
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
bool isSubset(vector<int>& a, vector<int>& b) {
sort(a.begin(), a.end());
sort(b.begin(), b.end());
int i = 0, j = 0;

                                               // Traverse both arrays using two pointers
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            i++;
            }
        else if (a[i] == b[j]) {
            i++;
            j++;
        }
        else {// If element in b is not found in a
            return false;
        }
    }

    return (j==b.size());// if we completed all element in b array;
}

int main() {
    vector<int> a = {1,2,3,4,7};
    vector<int> b = { 1,7};

    if (isSubset(a, b)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;}
