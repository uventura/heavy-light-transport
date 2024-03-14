load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

def glfw():
    new_git_repository(
        name = "glfw",
        remote = "https://github.com/glfw/glfw",
        # tag = "3.3.8",
        commit = "7482de6071d21db77a7236155da44c172a7f6c9e",
        build_file = "@//third_party/glfw:glfw.BUILD"
    )
