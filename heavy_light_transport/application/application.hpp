#include "heavy_light_transport/core/window/window.hpp"
#include "heavy_light_transport/core/imgui/imgui.hpp"

namespace Hlt {
    class Application {
        private:
            Core::Window window_;
            Core::Imgui* imgui_;

        public:
            Application();
            void render();

        private:
            void renderPropertiesBar();
            void clear();
            void update();
    };
}
