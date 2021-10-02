//
//  Inflator.cpp
//  testConsole
//
//  Created by 노원종 on 2021/09/20.
//

#include "Inflator.hpp"

void
Inflator::SurfaceVectorDebuging(std::vector<std::vector<int>> inputData) {
    for (std::vector<int> i : inputData) {
        for (int j : i) {
            std::cout << j << "  ";
        }
        std::cout << std::endl;
    }
}
