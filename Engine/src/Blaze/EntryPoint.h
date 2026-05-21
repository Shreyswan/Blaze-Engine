#pragma once

#ifndef _WIN32

extern Blaze::Application *Blaze::CreateApplication();

int main(int argc, char **argv)
{
    Blaze::Log::Init();
    BZ_CORE_ERROR("Initialized Log!");
    BZ_TRACE("Initialized Log for Client");

    auto app = Blaze::CreateApplication();
    app->Run();
    delete app;
}
#endif