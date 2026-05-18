#pragma once

#ifndef _WIN32

extern Blaze::Application *Blaze::CreateApplication();

int main(int argc, char **argv)
{
    auto app = Blaze::CreateApplication();
    app->Run();
    delete app;
}
#endif