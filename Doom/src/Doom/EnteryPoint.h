#pragma once


#ifdef DM_PLATFORM_WINDOWS

extern Doom::Application* Doom::CreateApplication();

int main(int argc, char** argv) {
	auto app = Doom::CreateApplication();
	app->Run();
	delete app;
}

#endif