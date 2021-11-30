#include "sdl.h"
#include "sdl_image.h"

int main(int argc, char* args[]) {

	SDL_Window* window = NULL;
	SDL_Renderer* render = NULL;
	SDL_Texture* texture = NULL;

	window = SDL_CreateWindow("SDL Tutorial",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		854, 480,
		SDL_WINDOW_SHOWN);


	render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	SDL_SetRenderDrawColor(render, 255, 255, 255, 0);

}