#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

/*

map.h ������ snake game���� ���� ���(���)�� ������Ʈ ���� ȭ�鿡
����ϴ� ����� ����ϴ� �����Դϴ�. 

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
