#include "ai.hpp"
#include <cmath>
#include <ctime>

// 1: 흑돌, 2: 백돌
int myColor;

// 0: 빈공간, 1: 내가 둔 돌, 2: 상대방이 둔 돌
int board[19][19];

void init(int color) {
    // 프로그램 초기화 코드를 작성한다.
    myColor = color;
    srand(time(NULL));
}

Point input(int x, int y) {
    if (x != -1 && y != -1) {
        board[x][y] = 2;
    }

    do {
        x = rand() % 19;
        y = rand() % 19;
    } while (board[x][y] != 0);

    board[x][y] = 1;
    return { x, y };
}
