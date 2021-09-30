//
//  main.cpp
//  testConsole
//
//  Created by ³ë¿øÁ¾ on 2021/09/18.
//

#include "OpenChatLevel2.h"

class Inflator;

int main(int argc, const char* argv[]) {
    // insert code here...
    Inflator* solution = nullptr;

    solution = new OpenChatLevel2;

    if (solution != nullptr) {
        solution->ShowResult();
    }
    return 0;
}
