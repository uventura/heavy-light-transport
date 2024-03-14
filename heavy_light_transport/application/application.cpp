#include "heavy_light_transport/application/application.hpp"

#include "heavy_light_transport/core/imgui/docking.hpp"

Hlt::Application::Application() {}

void Hlt::Application::render() {
    Hlt::Core::Imgui imgui(window_.getWindow());
    imgui_ = &imgui;

    while(!window_.shouldClose())
    {
        clear();
        Core::Docking::begin();

        renderPropertiesBar();

        Core::Docking::end();
        update();
    }
}

void Hlt::Application::clear() {
    window_.clear();
    imgui_->newFrame();
}

void Hlt::Application::update() {
    imgui_->render();
    window_.renderUpdate();

    imgui_->update();
    window_.bufferUpdate();
}

void Hlt::Application::renderPropertiesBar() {
    ImGui::Begin("Properties");
        ImGui::Text("This is a simple test to use imgui...");
    ImGui::End();

    static bool show_demo_window = true;
    ImGui::ShowDemoWindow(&show_demo_window);
}
