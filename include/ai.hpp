#ifndef _AI_HPP_
#define _AI_HPP_

struct Point {
    int x, y;
};

// 초기화
void init(int color);

// 서버에서 받아온 상대방이 이전에 둔 수
Point input(int x, int y);

#endif
