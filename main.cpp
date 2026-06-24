#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    std::cout << "Vulkan header found, version macro: " << VK_HEADER_VERSION << std::endl;
    std::cout << "GLFW header found, version: " << GLFW_VERSION_MAJOR << "." << GLFW_VERSION_MINOR << std::endl;
    return 0;
}