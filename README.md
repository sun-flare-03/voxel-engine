# voxel-engine

[![Build](https://img.shields.io/github/actions/workflow/status/user/voxel-engine/ci.yml?branch=main)]()
[![C++](https://img.shields.io/badge/C++-20-blue.svg)]()
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

> Lightweight voxel engine with chunk meshing, LOD, and multithreaded world gen

A C++ project focused on solving real-world engineering problems.

## Features

- **Performance** — Cache-friendly data structures and SIMD where beneficial
- **Modern C++** — Written in C++20 with concepts, ranges, and coroutines
- **CMake Build** — CMake-based build system with FetchContent dependencies
- **Cross Platform** — Builds on Linux, macOS, and Windows out of the box

## Installation

Using CMake FetchContent:

```cmake
include(FetchContent)
FetchContent_Declare(voxel_engine
  GIT_REPOSITORY https://github.com/user/voxel-engine.git
  GIT_TAG main
)
FetchContent_MakeAvailable(voxel_engine)
```

## Usage

```cpp
#include <voxel_engine/voxel_engine.h>

int main() {
    auto client = voxel_engine::Client::builder()
        .with_timeout(std::chrono::seconds(30))
        .build();

    auto result = client.run();
    std::cout << result << std::endl;
    return 0;
}
```

## Configuration

Configuration can be provided via environment variables, a config file, or programmatically.

| Variable | Description | Default |
|----------|-------------|--------|
| `VOXEL_ENGINE_TIMEOUT` | Request timeout in seconds | `30` |
| `VOXEL_ENGINE_RETRIES` | Number of retry attempts | `3` |
| `VOXEL_ENGINE_LOG_LEVEL` | Log verbosity (debug, info, warn, error) | `info` |

## License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.
