#include <iostream>
#include <vector>
#include <algorithm> // for std::sort (optional for validation)

int removeElement(std::vector<int>& nums, int val) {
    int k = 0; // Counter for elements not equal to val
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            ++k;
        }
    }
    return k;
}

int main() {
    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = removeElement(nums, val);
    std::cout << "Number of elements not equal to " << val << ": " << k << std::endl;

    // Optional: Output the modified array (only the first k elements are valid)
    std::cout << "Modified array: ";
    for (int i = 0; i < k; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    // Validation (sort and display for testing)
    std::sort(nums.begin(), nums.begin() + k);
    std::cout << "Sorted valid elements: ";
    for (int i = 0; i < k; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
