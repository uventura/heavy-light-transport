load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

def imgui():
    new_git_repository(
        name = "imgui",
        remote = "https://github.com/ocornut/imgui",
        # branch = "docking",
        commit = "2dc85e6e438e6d7f485317c9b76dc153535fed16",
        build_file = "@//third_party/imgui:imgui.BUILD",
    )
