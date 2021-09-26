//
//  main.cpp
//  testConsole
//
//  Created by 노원종 on 2021/09/18.
//

#include <iostream>
#include "Inflator.hpp"
#include "OneTwoFourNationLevel2.hpp"
#include "OpenChatLevel2.hpp"
#include "ImagrationLevel3.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Inflator* solution;
    
    //solution = new OneTwoFourNationLevel2;
    //solution = new OpenChatLevel2;
    solution = new ImagrationLevel3;
    
    
    if (solution != nullptr) {
        solution->ShowResult();
    }
    return 0;
}
