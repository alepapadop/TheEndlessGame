#include "TheEndlessGameApp.h"

void TheEndlessGameApp::OnEvent(SDL_Event* Event)
{

    if(Event->type == SDL_QUIT)
    {

        Running = false;

    }

}
