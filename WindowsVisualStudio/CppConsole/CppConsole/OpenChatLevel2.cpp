//
//  OpenChatLevel2.cpp
//  testConsole
//
//  Created by ����� on 2021/09/20.
//

#include "OpenChatLevel2.h"

#include <string>
#include <map>

using namespace std;

vector<string>
OpenChatLevel2::splitStrVec(string input, char split) {
    vector<string> result;

    size_t previous = 0, current;
    current = input.find(split);
    //find �Լ��� �ش� ��ġ���� ���ڿ��� ã�� ���� ��� npos�� ��ȯ�Ѵ�.
    while (current != string::npos)
    {
        // ù ������ ��ġ���� �ι�° ���� ���̸�ŭ substring�� ��ȯ
        string substring = input.substr(previous, current - previous);
        result.push_back(substring);
        previous = current + 1;
        //previous ���� ,�� ������ ��ġ�� ã�´�.
        current = input.find(split, previous);
    }
    result.push_back(input.substr(previous, input.length() - 1));
    //������ ���ڿ� ���

    return result;
}

vector<string>
OpenChatLevel2::solution(vector<string> record) {
    vector<string> answer;

    map<string, string> uidLastData;
    for (int i = static_cast<int>(record.size() - 1); i >= 0; --i) {
        vector<string> recordElement = splitStrVec(record.at(i), ' ');
        if (recordElement.size() > 2) {
            uidLastData.insert({ recordElement.at(1), recordElement.at(2) });
        }
    }

    for (int i = 0; i < static_cast<int>(record.size()); ++i) {
        vector<string> element = splitStrVec(record.at(i), ' ');
        if (element.size() <= 0) {
            continue;
        }
        const string cmpStr = element.at(0);
        const string uid = element.at(1);
        if (cmpStr == "Enter") {
            string resultStr = uidLastData.at(uid) + "���� ���Խ��ϴ�.";
            answer.push_back(resultStr);
        }
        else if (cmpStr == "Leave") {
            string resultStr = uidLastData.at(uid) + "���� �������ϴ�.";
            answer.push_back(resultStr);
        }
    }

    return answer;
}

void
OpenChatLevel2::ShowResult() {
    vector<string> inputData{ "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };
    // ���: ["Prodo���� ���Խ��ϴ�.", "Ryan���� ���Խ��ϴ�.", "Prodo���� �������ϴ�.", "Prodo���� ���Խ��ϴ�."]

    vector<string> result = solution(inputData);
    for (string str : result) {
        cout << str << " ";
    }
    cout << endl;
}
