cc_library(
    name = "imgui",
    srcs = ["imgui.cpp"],
    hdrs = ["imgui.hpp"],
    deps = ["//third_party/imgui"],
    visibility = ["//heavy_light_transport:__subpackages__"],
)

cc_library(
    name = "docking",
    srcs = ["docking.cpp"],
    hdrs = ["docking.hpp"],
    deps = [":imgui"],
    visibility = ["//heavy_light_transport:__subpackages__"],
)
