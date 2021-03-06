#ifndef GUIMP_T_WINDOW_H
# define GUIMP_T_WINDOW_H

/*
**	INCLUDES
*/

# include <SDL.h>
# include "libft.h"
# include "stdbool.h"
# include "t_sdl_events.h"
# include "e_items.h"

/*
**	STRUCTS
*/

/*
** t_window
** parent -> in case if window is logically connected to another.
** is_main -> if true, then when we close window application shuts down.
** id -> identifier of window.
** event_handler -> function in which events of this window are handled.
** fonts -> vector of available fonts.
*/

typedef struct  	s_window t_window;

struct				s_window
{
	int				type;
	void 			*parent;
	bool			is_main;
	bool			is_shown;
	bool			is_active;
	Uint32 			id;
	void			(*event_handler)(t_sdl_events *, t_window *);
	t_vector		items;
	SDL_Window		*window;
	SDL_Surface		*surface;
	t_vector		*fonts;
};

/*
** t_window
** title -> title of window.
** width, height -> obviously.
** x, y -> starting positions of window.
** flags -> flags such as 'resizable', 'shown', etc.
*/

typedef struct		s_window_info
{
	char			*title;
	bool			is_main;
	bool			is_shown;
	int 			width;
	int 			height;
	int 			x;
	int 			y;
	Uint32 			flags;
	void			(*event_handler)(t_sdl_events *, t_window *);
	t_vector		*fonts;
	void 			*parent;
}					t_window_info;

#endif
