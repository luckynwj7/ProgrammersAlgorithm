//
//  OpenChatLevel2.cpp
//  testConsole
//
//  Created by 노원종 on 2021/09/20.
//

#include "OpenChatLevel2.hpp"

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string>
OpenChatLevel2::splitStrVec(string input, char split) {
    vector<string> result;
    
    size_t previous = 0, current;
    current = input.find(split);
    //find 함수는 해당 위치부터 문자열을 찾지 못할 경우 npos를 반환한다.
    while (current != string::npos)
    {
        // 첫 인자의 위치부터 두번째 인자 길이만큼 substring을 반환
        string substring = input.substr(previous, current - previous);
        result.push_back(substring);
        previous = current + 1;
        //previous 부터 ,이 나오는 위치를 찾는다.
        current = input.find(split,previous);
    }
    result.push_back(input.substr(previous, input.length() - 1));
    //마지막 문자열 출력
    
    return result;
}

vector<string>
OpenChatLevel2::solution(vector<string> record) {
    vector<string> answer;
    
    map<string, string> uidLastData;
    for (int i = static_cast<int>(record.size() - 1) ; i >= 0 ; --i) {
        vector<string> recordElement = splitStrVec(record.at(i), ' ');
        if (recordElement.size() > 2) {
            uidLastData.insert({recordElement.at(1), recordElement.at(2)});
        }
    }
    
    for (int i = 0 ; i < static_cast<int>(record.size()) ; ++i) {
        vector<string> element = splitStrVec(record.at(i), ' ');
        if (element.size() <= 0) {
            continue;
        }
        const string cmpStr = element.at(0);
        const string uid = element.at(1);
        if (cmpStr == "Enter") {
            string resultStr = uidLastData.at(uid) + "님이 들어왔습니다.";
            answer.push_back(resultStr);
        } else if (cmpStr == "Leave") {
            string resultStr = uidLastData.at(uid) + "님이 나갔습니다.";
            answer.push_back(resultStr);
        }
    }
    
    return answer;
}

void
OpenChatLevel2::ShowResult() {
    vector<string> inputData {"Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"};
    // 결과: ["Prodo님이 들어왔습니다.", "Ryan님이 들어왔습니다.", "Prodo님이 나갔습니다.", "Prodo님이 들어왔습니다."]
    
    std::vector<string> result = solution(inputData);
    for (string str : result) {
        cout << str << " ";
    }
    cout << endl;
}
