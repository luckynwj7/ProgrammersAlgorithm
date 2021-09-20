//
//  Inflator.hpp
//  testConsole
//
//  Created by 노원종 on 2021/09/20.
//

#ifndef Inflator_hpp
#define Inflator_hpp

#include <iostream>

class Inflator {
public:
    virtual ~Inflator() {}
    virtual void ShowResult() = 0;
};

#endif /* Inflator_hpp */
