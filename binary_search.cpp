#include <iostream>
#include <vector>

int binarySearch(std::vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;         //  [2,4,5,6,10,12,22,36]
    
    while (left <= right) {                 // left = 0  <=     right = 7
        int mid = left + (right - left) / 2;     //   mid =  0 + 3 = 3   5 + 

        if (arr[mid] == target)    //  arr[mid] = 6 , target = 22 
            return mid;   
        else if (arr[mid] < target)  //  
            left = mid + 1;   // left = 5
        else
            right = mid - 1; 
    }
    
    return -1;  // Target not found
}

int main() {
    std::vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;

    int index = binarySearch(arr, target);
    if (index != -1)
        std::cout << target << " found at index " << index << ".\n";
    else
        std::cout << target << " not found.\n";

    return 0;
}
