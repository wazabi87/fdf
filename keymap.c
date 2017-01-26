#include "fdf.h"

int		keymap(int keycode, t_env *ev)
{
	if (keycode == 65307)
		exit(0);
	else if (keycode == 65361 || keycode == 97)
		ev->rotx += 1;
	else if (keycode == 65363 || keycode == 100)
		ev->rotx -= 1;
	else if (keycode == 65362 || keycode == 119)
		ev->roty += 1;
	else if (keycode == 65364 || keycode == 115)
		ev->roty -= 1;
	else if (keycode == 131)
		ev->zoom += 1;
	else if (keycode == 132)
		ev->zoom -= 1;
	return (0);
}