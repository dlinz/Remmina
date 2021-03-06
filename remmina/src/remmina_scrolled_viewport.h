/*
 * Remmina - The GTK+ Remote Desktop Client
 * Copyright (C) 2009 - Vic Lee 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, 
 * Boston, MA 02111-1307, USA.
 */

#ifndef __REMMINASCROLLEDVIEWPORT_H__
#define __REMMINASCROLLEDVIEWPORT_H__

G_BEGIN_DECLS

#define REMMINA_TYPE_SCROLLED_VIEWPORT \
    (remmina_scrolled_viewport_get_type ())
#define REMMINA_SCROLLED_VIEWPORT(obj) \
    (G_TYPE_CHECK_INSTANCE_CAST ((obj), REMMINA_TYPE_SCROLLED_VIEWPORT, RemminaScrolledViewport))
#define REMMINA_SCROLLED_VIEWPORT_CLASS(klass) \
    (G_TYPE_CHECK_CLASS_CAST ((klass), REMMINA_TYPE_SCROLLED_VIEWPORT, RemminaScrolledViewportClass))
#define REMMINA_IS_SCROLLED_VIEWPORT(obj) \
    (G_TYPE_CHECK_INSTANCE_TYPE ((obj), REMMINA_TYPE_SCROLLED_VIEWPORT))
#define REMMINA_IS_SCROLLED_VIEWPORT_CLASS(klass) \
    (G_TYPE_CHECK_CLASS_TYPE ((klass), REMMINA_TYPE_SCROLLED_VIEWPORT))
#define REMMINA_SCROLLED_VIEWPORT_GET_CLASS(obj) \
    (G_TYPE_INSTANCE_GET_CLASS ((obj), REMMINA_TYPE_SCROLLED_VIEWPORT, RemminaScrolledViewportClass))

typedef struct _RemminaScrolledViewport
{
	GtkEventBox event_box;

	/* Motion activates in Viewport Fullscreen mode */
	gboolean viewport_motion;
	guint viewport_motion_handler;

} RemminaScrolledViewport;

typedef struct _RemminaScrolledViewportClass
{
	GtkEventBoxClass parent_class;
} RemminaScrolledViewportClass;

GType remmina_scrolled_viewport_get_type(void)
G_GNUC_CONST;

GtkWidget* remmina_scrolled_viewport_new(void);
void remmina_scrolled_viewport_remove_motion(RemminaScrolledViewport *gsv);

G_END_DECLS

#endif  /* __REMMINASCROLLEDVIEWPORT_H__  */

