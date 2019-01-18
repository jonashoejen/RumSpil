#include "stm32f30x_conf.h"
#include <stdio.h>
#include <string.h>
#include "serial_com.h"
#include "timer.h"
#include "ansi.h"

#ifndef _ALIEN_H_
#define _ALIEN_H_

struct alien_t {
    int32_t x, y, tempx, tempy, tempf, vx, vy, active, m, i;
};

void init_alien(struct alien_t * al, int8_t x, int8_t y, int8_t vx, int8_t vy);
void draw_alien(struct alien_t * al);
void delete_alien (struct alien_t * al);
void move_alien(struct alien_t * al, int8_t vx, int8_t vy);

#endif

