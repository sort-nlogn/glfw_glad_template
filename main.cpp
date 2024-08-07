#include "include/glad/glad/glad.h"
#include <glfw/glfw3.h>
#include <iostream>


void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}


int main(void){
    
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }


    GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGL Example", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }



    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    gladLoadGL();


    while (!glfwWindowShouldClose(window)) {

        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, 1);

        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    return 0;
}