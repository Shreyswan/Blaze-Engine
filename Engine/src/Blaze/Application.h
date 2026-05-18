#pragma once

#include "Core.h"

namespace Blaze
{
    class ENGINE_API Application
    {
    public:
        Application();          // Constructor
        virtual ~Application(); // Destructor (needs to be made virtual as the class will be inherited)

        void Run();
    };

    // To be defined in client
    Application* CreateApplication();

}