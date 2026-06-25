#include "core/Window.h"

#include <iostream>
#include <exception>

int main()
{
    try
    {
        Window window(1280, 720, "Vulkan Renderer");

        while (!window.ShouldClose())
        {
            window.PollEvents();
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "Fatal error: " << e.what() << std::endl;
        return -1;
    }

    return 0;
}