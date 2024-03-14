#include "heavy_light_transport/application/application.hpp"

Hlt::Application::Application() {}

void Hlt::Application::render() {
    while(!window_.shouldClose())
    {
        clear();

        update();
    }
}

void Hlt::Application::clear() {
    window_.clear();
}

void Hlt::Application::update() {
    window_.renderUpdate();
    window_.bufferUpdate();
}
