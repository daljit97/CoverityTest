#include <iostream>
#include <vector>

int main() {
    std::vector<int> list { 1, 2, 3 };

    for(const auto i : list){
        list.push_back(i);
    }

    for(const auto i : list) {
        std::cout<< i<< std::endl;
    }
}
