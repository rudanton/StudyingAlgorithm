#include <string>
#include <vector>

using namespace std;

// ����ũ�� ù ��� +2������ ���.
// �� �� �ſ� ������ ���� �׳��� ���.
// �ϳ��� ���� �̻��� ��� ���.
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
            //��� ����.
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

        
        if (equip[i]) printf("%d : ����!\n", i+1);
        else printf("%d : ������!\n", i+1);
    }

    printf("\n%d", gaesu);

    //���

}