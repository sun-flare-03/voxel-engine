// voxel-engine — Lightweight voxel engine with chunk meshing, LOD, and multithreaded world gen
#include <iostream>
#include <string>

namespace voxel_engine {

int run() {
    std::cout << "Application initialized successfully" << std::endl;
    return 0;
}

} // namespace voxel_engine

int main() {
    std::cout << "[voxel-engine] Starting application..." << std::endl;

    int result = voxel_engine::run();
    if (result != 0) {
        std::cerr << "Fatal error: non-zero exit" << std::endl;
        return 1;
    }
    return 0;
}
