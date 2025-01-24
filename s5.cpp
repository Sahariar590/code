#include <iostream>
using namespace std;

void twoSum(const int nums[], int size, int target, int& index1, int& index2) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (nums[i] + nums[j] == target) {
                index1 = i;
                index2 = j;
                return;
            }
        }
    }
    index1 = -1; 
    index2 = -1;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);

    int index1, index2;
    twoSum(nums, size, target, index1, index2);

    if (index1 != -1 && index2 != -1) {
        cout << "[" << index1 << ", " << index2 << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
