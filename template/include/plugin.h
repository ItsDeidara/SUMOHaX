#ifndef PLUGIN_H
#define PLUGIN_H

#include "types.h"
#include "configs.h"
#include "common.h"
#include <string.h>

int	new_entry(char *text, void(*f)(u32), u32 arg);
int	new_spoiler(char *text);
void	exit_spoiler(void);
void	set_note(const char *text, int index);
void	write_u8(u32 addr, u8 value);
void	write_u16(u32 addr, u16 value);
void	write_u32(u32 addr, u32 value);
u8	read_u8(u32 addr);
u16	read_u16(u32 addr);
u32	read_u32(u32 addr);
void	new_log(u32 type, char *str, ...);
void	disable_entry(u32 index);
int	svc_sleepThread(u64 ms);
#endif
