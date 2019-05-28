#include "food.h"

extern SNAKE *snake_head;
extern BLOCK *block_head;
extern int map_size;
FOOD food = {0, 0}, award_food = {-1, -1};
int award = 0, award_score;

void food_create(void)
{
    SNAKE *p1;
    BLOCK *p2;
    int sign = 1;
    do{
        srand(time(NULL));
        food.x = rand() % map_size;
        food.y = rand() % map_size;
        if(award == 5){                                    /* Create award food */
            award_food.x = rand() % map_size;
            award_food.y = rand() % map_size;
        }
        if(award_food.x == food.x && award_food.y == food.y)
            continue;
		if (food.x == 0 || food.y == 0 || award_food.x == 0 || award_food.y == 0)
			continue;

		//이 코드의 위치에 따라 다른 버그가 발생함.. 조건문에 따라서 sign 변수값을 각각 다르게 작성해주어야 할 것 같음 
		//if (sign)
		//	sign = 0;
		sign = 0;

        for(p1 = snake_head, p2 = block_head; p1 != NULL || p2 != NULL;){

            if(p1 != NULL){
                if((food.x == p1->x && food.y == p1->y) || (award_food.x == p1->x && award_food.y == p1->y)){
                    sign = 1;
                    break;
                }
                p1 = p1->next;
            }
            if(p2 != NULL){
                if((food.x == p2->x && food.y == p2->y) || (award_food.x == p2->x && award_food.y == p2->y)){
                    sign = 1;
                    break;
                }
                p2 = p2->next;
            }
        }
		
    }while(sign);
    goprint(food.x, food.y, "∵");
    if(award == 5)
        goprint(award_food.x, award_food.y, "∽");
    show_score();
}
