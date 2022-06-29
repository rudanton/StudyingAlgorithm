#include <string>
#include <vector>

using namespace std;

// 마스크는 첫 사용 +2까지만 사용.
// 둘 다 매우 나쁨인 날은 그날만 사용.
// 하나가 나쁨 이상인 경우 사용.
int solution(vector<vector<int>> atmos) {
    int answer = -1;
    return answer;
}
int main() {
    vector<vector<int>> atm = {{140, 90}, {177, 75}, {95, 45}, {71, 31}, {150, 30}, {80, 35}, {72, 33}, {166, 81}, {151, 75}};
    
    vector<bool> equip = vector<bool>(atm.size(), false);
    int day = -1;
    int gaesu = 0;
    bool maskOn = false;
    for (int i = 0; i < atm.size(); i++) {
        if (i == day + 3 && maskOn) {
            //폐기 조건.
            maskOn = false;
        }
        if (atm[i][0] > 80 || atm[i][1] > 35) {
            if (!maskOn) {
                gaesu++;
                day = i;
                maskOn = true;
            }
        }
        if (maskOn) equip[i] = true;
        if (atm[i][0] > 150 && atm[i][1] > 75) {
            maskOn = false;
        }

        
        if (equip[i]) printf("%d : 착용!\n", i+1);
        else printf("%d : 미착용!\n", i+1);
    }

    printf("\n%d", gaesu);

    //통과

}