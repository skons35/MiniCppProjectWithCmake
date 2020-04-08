# Template Cpp Project

##Introduction
The aim of this project is helping in generating a very simple project,
using [CMake](https://cmake.org/)

I provide a skeleton of C++ project using CMake,
for generating the project based on Cmakelists.txt

- a pseudo library dependency is added
- a Seek for installed OpenCV library and headers is also present


- Using this sample project, its is easy to develop a much more complex one.

## Requirements
To go from generating project to build it, you'll need to have installed :
- IDE + compiler (for instance Visual Studio 2019)
- [CMake](https://cmake.org/) tool ,from **Kitware**, here i'm using _Cmake 3.16.5_
- To allow CMake detecting an _Opencv 3.x_ installation automatically as defined dependency example,
  you'll need to have installed [OpenCV 3.x](https://opencv.org/releases/)
  
## Starting steps
* clone this repository
```
git clone https://github.com/skons35/MiniCppProjectWithCmake.git
```
* open command line, then go to the project folder **MiniCppProjectWithCmake**
```
cd MiniCppProjectWithCmake
```
* create a **build** folder (where to generate project to be compiled) and go into it:
```
mkdir build
cd build
```
* In the skeleton project proposed here, a dependency is added to OpenCV Library,
so in the following call to cmake project generator, you'll need to indicate a valid
OpenCV installation directory on your machine using a command similar to this one :
(Note : Cmake is looking per default to a _CMakeLists.txt_ file, here we indicate the
 one from parent folder)
```
cmake .. -DOpenCV_DIR=<PATH_TO_OPENCV_INSTALL_DIR>
```

* **ALTERNATIVE TO ABOVE STEP** : you could also interactively adjust the settings or default values 
presented by CMakeLists.txt, and to do that, you may replace the command from previous step 
by the more user friendly one (allowing UI interaction) :
```
cmake-gui ..
```
-
 - click on **Configure**, the configuration changes and/or error are shown as RED lines.
	Typically here you should adjust/assign the path to find a valid OpenCV Install folder
	(the one containing *OpenCVConfig.cmake* file)
 - Click again on **Configure**, this time no more red lines should remain, 
	and the message *Configuring done* should be displayed. 
 - Click on **Generate** to generate the project files with defined settings. 
	The message *Generating done* should be displayed.
 - You may quit the cmake-gui interface.

* Compile the generated project (for instance, if Visual Studio was the compiling IDE defined,
 you should find a _MiniProj1.sln_ file, that you can open with that IDE, and then compile the project.
* launch / test the generated binary.

