#pragma once

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <string>

// Wraps a GLFW window handle and its lifecycle.
// Responsible only for OS window creation/destruction and exposing
// raw input/window state queries needed by the rest of the engine.
class Window
{
public:
    Window(int width, int height, const std::string& title);
    ~Window();

    // Non-copyable: this class owns a unique GLFWwindow* handle.
    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;

    // Returns true until the user requests the window to close
    // (e.g. clicking the close button, or Alt+F4).
    bool ShouldClose() const;

    // Processes pending OS events (input, resize, etc.).
    // Must be called once per frame.
    void PollEvents() const;

    GLFWwindow* GetHandle() const { return m_window; }
    int GetWidth() const { return m_width; }
    int GetHeight() const { return m_height; }

private:
    GLFWwindow* m_window = nullptr;
    int m_width;
    int m_height;
};