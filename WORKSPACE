workspace(name = "heavy_light_transport")

#####################
# LOAD DEPENDENCIES #
#####################

load("//third_party:dependencies.bzl", "dependencies")
dependencies()

####################
#  ZIG TOOLCHAINS  #
####################
load("@hermetic_cc_toolchain//toolchain:defs.bzl", zig_toolchains = "toolchains")
zig_toolchains()

register_toolchains(
    "@zig_sdk//toolchain:linux_amd64_gnu.2.28",
    "@zig_sdk//toolchain:linux_arm64_gnu.2.28",
    "@zig_sdk//toolchain:darwin_amd64",
    "@zig_sdk//toolchain:darwin_arm64",
    "@zig_sdk//toolchain:windows_amd64",
    "@zig_sdk//toolchain:windows_arm64",
)
