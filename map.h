#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

/*

map.h 파일은 snake game에서 맵의 경계(블록)를 프로젝트 실행 화면에
출력하는 기능을 담당하는 파일입니다. 

*/

#include <stdlib.h>
#include "goprint.h"

typedef struct BLOCK {
    int x;
    int y;
    struct BLOCK *next;
} BLOCK;

typedef struct BOUNDARY {
    int x;
    int y;
} BOUNDARY;

BLOCK *block_head;
extern int map_size;

void Map_boundary(int map_size);
void Map_block(int map_size);
void Block_free(void);


#endif // MAP_H_INCLUDED
