cc_library(
    name = "imgui_src",
    hdrs = [
        "backends/imgui_impl_glfw.h",
        "backends/imgui_impl_opengl3.h",
        "backends/imgui_impl_opengl3_loader.h",
    ] + glob([
        "*.h",
    ]),
    srcs = [
        "backends/imgui_impl_glfw.cpp",
        "backends/imgui_impl_opengl3.cpp",
    ] + glob([
        "*.cpp",
    ]),
    deps = [
        "@glfw//:glfw",
        "@//third_party/glad",
    ]
)

cc_library(
    name = "imgui",
    hdrs = [
        "imgui.h",
        "imgui_internal.h",
        "backends/imgui_impl_glfw.h",
        "backends/imgui_impl_opengl3.h",
    ],
    deps = [
        ":imgui_src",
    ],
    visibility = ["//visibility:public"],
)
