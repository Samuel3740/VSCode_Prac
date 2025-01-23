#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Vocabulary_Study{
private:
    vector<int> frequency;  
    string input;

public:
    Vocabulary_Study() : frequency(26, 0){} 

    void InputData(){
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::toupper); 
    }

    char Analyze(){
        for (char c : input){ //input 문자열의 각 문자를 하나씩 꺼내서 변수 c에 할당, 이를 루프 바디에서 처리
            if (isalpha(c)) { // 알파벳 대문자는 1 반환. 알파벳 소문자는 2 반환, 알파벳이 아닌 문자는 0 반환
                frequency[c - 'A']++;
            }
        }

        int maxFreq = 0, count = 0, index = -1;
        for (int i = 0; i < 26; ++i){
            if (frequency[i] > maxFreq){
                maxFreq = frequency[i];
                index = i;
                count = 1;
            } else if (frequency[i] == maxFreq){
                count++;
            }
        }
        return (count > 1) ? '?' : static_cast<char>(index + 'A');
    }
};

int main(){
    Vocabulary_Study study;
    study.InputData();
    cout << study.Analyze() << endl;
}
