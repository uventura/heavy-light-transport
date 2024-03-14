load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
HERMETIC_CC_TOOLCHAIN_VERSION = "v2.2.1"

def hermetic_cc_toolchain():
    http_archive(
        name = "hermetic_cc_toolchain",
        sha256 = "3b8107de0d017fe32e6434086a9568f97c60a111b49dc34fc7001e139c30fdea",
        urls = [
            "https://mirror.bazel.build/github.com/uber/hermetic_cc_toolchain/releases/download/{0}/hermetic_cc_toolchain-{0}.tar.gz".format(HERMETIC_CC_TOOLCHAIN_VERSION),
            "https://github.com/uber/hermetic_cc_toolchain/releases/download/{0}/hermetic_cc_toolchain-{0}.tar.gz".format(HERMETIC_CC_TOOLCHAIN_VERSION),
        ],
    )
