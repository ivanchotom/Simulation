#define SDL_MAIN_HANDLED
#include "Game.h"

Game *game = nullptr;

int main(int argc, char* args[])
{
	SDL_SetMainReady();
	game = new Game();

	game->init("Physics Simulation", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	while (game->running())
	{
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();


	return 0;
}