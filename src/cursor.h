#ifndef XRPROF_CURSOR_H
#define XRPROF_CURSOR_H

#include "process.h"

struct xrprof_cursor;

struct xrprof_cursor *xrprof_create(phandle pid);
void xrprof_destroy(struct xrprof_cursor *cursor);
int xrprof_init(struct xrprof_cursor *cursor);

int xrprof_get_fun_name(struct xrprof_cursor *cursor, char *buff, size_t len);
int xrprof_step(struct xrprof_cursor *cursor);

#endif /* XRPROF_CURSOR_H */
