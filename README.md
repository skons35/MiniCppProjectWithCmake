# project1

first repo project, to provide very simple project generation with CMake

I provide a skeleton of C++ project using CMake,
for generating the project based on Cmakelists.txt

- a pseudo library dependency is added
- a Seek for installed OpenCV library and headers is also present


- Using this sample project, its is easy to develop a much more complex one.


You'll need to have installed :
- IDE + compiler (for instance Visual Studio 2019)
- CMake tool ,see Kitware (kitware.com/cmake) , here i'm using 3.16.5
- To allow CMake detecting an Opencv 3.x installation automatically as defined dependency example,
  you'll need to have installed OpenCV 3.x (see https://opencv.org/releases/)