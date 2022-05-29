#include <stdlib.h>
#include <stdio.h>
#include <GLFW/glfw3.h>
// temp
#include <time.h>
#include <stdlib.h>
//temp
#define setup
int main(int argc,char ** argv)
{
    int FUN;
    char sizeOfNumber= 0;
    for(signed char i = 0; argv[1][i] != 0;i++)
        sizeOfNumber = i;
    sscanf(argv[1],"%d",&FUN);
    GLFWwindow ** window = malloc(FUN*8);

    // temp
    srand(time(NULL));
    // temp

    if (!glfwInit())
        return 1;
    for(int i = 0; i < FUN; i++)
    {
        window[i] = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
        glfwSetWindowAttrib(window[i],GLFW_FLOATING,GLFW_TRUE);
    }

    for(int i = 0; i < FUN; i++)
    {
        if (!window[i])
        {
            glfwTerminate();
            return 1;
        }
    }
    for(int i = 0; i < FUN; i++)
    {
        glfwMakeContextCurrent(window[i]);
    }

    while (!glfwWindowShouldClose(window[0]))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        for(int i = 0; i < FUN;i++)
        {
            glfwSetWindowPos(window[i],rand()%1920,rand()%1080);
            glfwFocusWindow(window[i]);
            glfwSwapBuffers(window[i]);
        }

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}