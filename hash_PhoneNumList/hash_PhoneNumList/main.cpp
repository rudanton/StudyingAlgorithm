#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;



bool solution(vector<string> phone_book) {
    map<string, int> book;
    map<string, int>::iterator iter;
    
    bool answer = true;
    int max = INT16_MAX;

    sort(phone_book.begin(), phone_book.end());
    
    for (int i = 0; i < phone_book.size()-1; i++)
    {
        if (phone_book[i] == phone_book[i + 1])
        {
            phone_book.erase(phone_book.begin() + i + 1);
        }
    }
    cout << phone_book.size() << endl;
    
    for (string str : phone_book)
    {
        if (str.size() < max) max = str.size();
    }
    for (int k = 0; k < phone_book.size(); k++)
    {
        phone_book[k] = phone_book[k].substr(0, max);
        printf("%d번째 문자 : ", k);
        cout << phone_book[k] << endl;
    }
    for (string str : phone_book)
    {
        book[str]++;
        if (book[str] > 1) answer = false;
    }
    return answer;
}
int main()
{
    vector<string> phone = { "119", "114", "112", "123223123", "1231231234" };
    cout << "answer    : " << solution(phone);
}