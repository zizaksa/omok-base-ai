#include <iostream>
#include "ai.hpp"

using namespace std;

int main() {
    int color;
    cin >> color;

    // 서버에서 입력받은 자신의 돌 색 (1: 흑돌, 2: 백돌)
    init(color);
    cout << "I am ready" << endl;

    int cmd;
    Point point;
    while (!cin.eof()) {
        cin >> cmd;

        switch (cmd) {
        case 1:
            cin >> point.x >> point.y;
            point = input(point.x, point.y);
            cout << point.x << " " << point.y << endl;
            break;

        case 2:
            // 게임이 종료되었으니 프로그램을 종료
            goto EXIT;

        default:
            break;
        }
    }

EXIT:
    // 프로그램 종료
    // 해제할 리소스가 있으면 여기서 해제한다.
    return 0;
}
