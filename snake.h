#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED

/*

snake.h ������ snake game���� �ٽ��̶� �� �� �ִ� ���� �� �κ��� �����ϰ�,
���� �������� �����ϴ� ����� �����ϴ� �����Դϴ�. 

*/

#include <stdlib.h>
#include <conio.h>
#include "goprint.h"
#include "map.h"
#include "food.h"
#include "interface.h"

typedef struct SNAKE {
    int x;
    int y;
    struct SNAKE *next;
} SNAKE;

SNAKE *snake_head, *snake_tail;
extern char control, direction;
extern int lose, score, level;

SNAKE* Check_get_Food(SNAKE front, SNAKE * snake_head);
int Check_Gameover(SNAKE * snake_head);
void Snake_create(void);
void Snake_control(void);
void Snake_move(void);
void Snake_free(void);

#endif // SNAKE_H_INCLUDED
