#include "heavy_light_transport/core/window/window.hpp"

namespace Hlt {
    class Application {
        private:
            Core::Window window_;

        public:
            Application();
            void render();

        private:
            void clear();
            void update();
    };
}
