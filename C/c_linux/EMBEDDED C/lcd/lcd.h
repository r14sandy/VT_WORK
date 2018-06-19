#ifndef _LCD_H_
#define _LCD_H_
#include"types.h"

extern void write_lcd(u8);
extern void cmd_lcd(u8);
extern void putc_lcd(u8);
extern void init_lcd(void);
extern void puts_lcd(u8 *);
extern void u16_lcd(u16);
extern void float_lcd(float);
extern void s16_lcd(s16);
extern void build_cgram(u8 *,u8);

#endif
