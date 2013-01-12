#ifndef THEENDLESSGAMEAPP_H_INCLUDED
#define THEENDLESSGAMEAPP_H_INCLUDED

#include <SDL.h>

class TheEndlessGameApp
{

    private:
        bool Running;

        SDL_Surface* Surf_Display;

    public:

        TheEndlessGameApp();

        int OnExecute();

        bool OnInit();

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();

};

#endif // THEENDLESSGAMEAPP_H_INCLUDED
