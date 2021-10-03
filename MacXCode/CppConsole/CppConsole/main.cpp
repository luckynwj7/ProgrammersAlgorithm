//
//  main.cpp
//  testConsole
//
//  Created by 노원종 on 2021/09/18.
//

#include <iostream>
#include "OneTwoFourNationLevel2.hpp"
#include "OpenChatLevel2.hpp"
#include "ImagrationLevel3.hpp"
#include "IntegerTriangleLevel3.hpp"
#include "PracticeAllPairsShortest.hpp"
#include "PracticeMatrixChain.hpp"
#include "PracticeKnapsack.hpp"
#include "PracticeDPCoinChange.hpp"
#include "DiscControllerLevel3.hpp"

class Inflator;

int main(int argc, const char * argv[]) {
    // insert code here...
    Inflator* solution;
    
    //solution = new OneTwoFourNationLevel2;
    //solution = new OpenChatLevel2;
    //solution = new ImagrationLevel3;
    //solution = new IntegerTriangleLevel3;
    //solution = new PracticeAllPairsShortest;
    //solution = new PracticeMatrixChain;
    //solution = new PracticeKnapsack;
    //solution = new PracticeDPCoinChange;
    solution = new DiscControllerLevel3;
    
    if (solution != nullptr) {
        solution->ShowResult();
    }
    return 0;
}
