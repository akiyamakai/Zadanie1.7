#include <iostream>
#include <unordered_map>
#include <vector>

void findPairsWithSum(int arr[], int size, int targetSum) {
    std::unordered_map<int, int> complementMap; 

    
    for (int i = 0; i < size; ++i) {
        int complement = targetSum - arr[i]; 

        
        if (complementMap.find(arr[i]) != complementMap.end()) {
            std::cout << "Pair of elements" << arr[i] << " and " << complementMap[arr[i]] << " has an amount " << targetSum << std::endl;
        }

        
        complementMap[complement] = arr[i];
    }
}

int main() {
    const int SIZE = 6; 
    int arr[SIZE] = { 1, 2, 3, 2, 4, 5 }; 
    int targetSum = 5; 

   
    findPairsWithSum(arr, SIZE, targetSum);

    return 0;
}
