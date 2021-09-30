//
//  Inflator.hpp
//  testConsole
//
//  Created by ณ๋ฟ๘มพ on 2021/09/20.
//

#ifndef Inflator_h
#define Inflator_h

#include <iostream>
#include <vector>

class Inflator {
public:
    virtual ~Inflator() {}
    virtual void ShowResult() = 0;
};

#endif /* Inflator_h */
