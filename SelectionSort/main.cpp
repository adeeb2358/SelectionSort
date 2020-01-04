//
//  main.cpp
//  SelectionSort
//
//  Created by adeeb mohammed on 05/01/20.
//  Copyright © 2020 adeeb mohammed. All rights reserved.
// time complexity is o(n2) space complexity is o(1) o(n) swapping

#include <iostream>
#include <vector>
// optimal solution using for loop

void swap(int i , int j, std::vector<int> &array){
    int temp = array.at(i);
    array.at(i) = array.at(j);
    array.at(j) = temp;
}

std::vector<int> selectionSort(std::vector<int> array) {
    for(int i = 0; i < (array.size() - 1); i++){
        for(int j = i+1; j < array.size(); j++){
            if(array.at(i) > array.at(j)){
                swap(i,j,array);
            }
        }
    }
    return array;
}


int main(int argc, const char * argv[]) {
    std::cout << "Function for selection sort\n";
    auto array = {7,1,25,-23,-44,1,85,23,1,8};
    auto result = selectionSort(array);
    for(auto it : result){
        std::cout << it << " ";
    }
    return 0;
}
