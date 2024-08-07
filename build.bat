@echo off
@REM gcc main.c  -L ./lib -I ./include -lglfw3 -lopengl32 -lglu32 -lgdi32 -lm -o main.exe 
g++ -o main.exe glad.c main.cpp -I ./include .\lib\glfw\glfw3.dll -lgdi32 -lopengl32