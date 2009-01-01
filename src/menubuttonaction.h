/*
 *      menubuttonaction.h
 *
 *      Copyright 2008-2009 Enrico Tröger <enrico(at)xfce(dot)org>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; version 2 of the License.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */


#ifndef __MENU_BUTTON_ACTION_H__
#define __MENU_BUTTON_ACTION_H__

G_BEGIN_DECLS

#define SION_MENU_BUTTON_ACTION_TYPE				(sion_menu_button_action_get_type())
#define SION_MENU_BUTTON_ACTION(obj)				(G_TYPE_CHECK_INSTANCE_CAST((obj),\
			SION_MENU_BUTTON_ACTION_TYPE, SionMenubuttonAction))
#define SION_MENU_BUTTON_ACTION_CLASS(klass)		(G_TYPE_CHECK_CLASS_CAST((klass),\
			SION_MENU_BUTTON_ACTION_TYPE, SionMenubuttonActionClass))
#define IS_SION_MENU_BUTTON_ACTION(obj)				(G_TYPE_CHECK_INSTANCE_TYPE((obj),\
			SION_MENU_BUTTON_ACTION_TYPE))
#define IS_SION_MENU_BUTTON_ACTION_CLASS(klass)		(G_TYPE_CHECK_CLASS_TYPE((klass),\
			SION_MENU_BUTTON_ACTION_TYPE))

typedef struct _SionMenubuttonAction			SionMenubuttonAction;
typedef struct _SionMenubuttonActionClass		SionMenubuttonActionClass;

struct _SionMenubuttonAction
{
	GtkAction parent;
};

struct _SionMenubuttonActionClass
{
	GtkActionClass parent_class;
};

GType		sion_menu_button_action_get_type	(void);
GtkAction*	sion_menu_button_action_new			(const gchar	*name,
												 const gchar	*label,
												 const gchar	*tooltip,
												 const gchar	*icon_name);

G_END_DECLS

#endif /* __MENU_BUTTON_ACTION_H__ */
