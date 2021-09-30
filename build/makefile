run:
	make main
	minecraft.exe
main:
	g++ ../src/main.cpp ../src/glad.c -o minecraft.exe -O2 -Wno-missing-braces -I ../dependencies/include/ -L ../dependencies/lib/ -lglfw3 -lopengl32 -lgdi32 -lfreetype