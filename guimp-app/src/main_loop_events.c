#include "guimp.h"

void	main_loop_events(t_sdl *sdl)
{
	size_t i;

	i = 0;
	while (i < sdl->windows.size) {
		WINDOW(i)->event_handler(&sdl->events, WINDOW(i));
		i += 1;
	}
}
