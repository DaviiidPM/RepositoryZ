#include "sdl_image.h"
#include "sdl.h"

int main(int argc, char* args[]) {

	SDL_Window* window = NULL;
	SDL_Renderer* render = NULL;


	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow("SDL Tutorial",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		854, 480,
		SDL_WINDOW_SHOWN);

	render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);


	SDL_SetRenderDrawColor(render, 255, 255, 255, 0);

	bool endgame = false;
	SDL_Event Tecla;

	while (endgame==false){
		SDL_PollEvent(&Tecla);
		switch (Tecla.type)
		{
		case SDL_KEYDOWN:

			if (Tecla.key.keysym.scancode == SDL_SCANCODE_1) {

				SDL_SetRenderDrawColor(render, 255, 0, 0, 0);
			}
			if (Tecla.key.keysym.scancode == SDL_SCANCODE_2) {

			}
			break;
		case SDL_QUIT:
			endgame = true;
			break;
		}
		SDL_RenderClear(render);
		SDL_RenderPresent(render);
		SDL_GetError();
	}
	return 0;
}