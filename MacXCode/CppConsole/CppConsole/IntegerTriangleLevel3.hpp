//
//  IntegerTriangleLevel3.hpp
//  testConsole
//
//  Created by 노원종 on 2021/09/26.
//

#ifndef IntegerTriangleLevel3_hpp
#define IntegerTriangleLevel3_hpp

#include "Inflator.hpp"

#include <vector>

using namespace std;

class IntegerTriangleLevel3 : public Inflator {
    // https://programmers.co.kr/learn/courses/30/lessons/43105?language=cpp
public:
    void ShowResult() override;
    
private:
    int solution(vector<vector<int>> triangle);
};
#endif /* IntegerTriangleLevel3_hpp */
