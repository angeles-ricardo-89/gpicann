#ifndef SHAPES_H__INCLUDED
#define SHAPES_H__INCLUDED

void rect_draw(struct parts_t *parts, GtkWidget *drawable, cairo_t *cr);
void rect_draw_handle(struct parts_t *parts, GtkWidget *drawable, cairo_t *cr);
gboolean rect_select(struct parts_t *parts, int x, int y);
struct parts_t *rect_create(int x, int y);

#endif	/* ifndef SHAPES_H__INCLUDED */
