# Rotating cube using sdl2

## How to compile in Windows
For compiling the code in your windows machine you'll have to first install Mingw and SDL2 in your machine.
You can donwload Mingw [here](https://ufpr.dl.sourceforge.net/project/mingw/Installer/mingw-get-setup.exe)

In the installation process, select the ``mingw32-gcc-g++`` and the ``mingw32-base`` check boxes. Then click in the installation tab and apply the changes.

After downloading MINGW, you'll have to add the bin directory to the enviroment variables. To do so, On the Windows taskbar, right-click the Windows icon and select System. In the Settings window, under Related Settings, click Advanced system settings. On the Advanced tab, click Environment Variables
![Image 1](./images/Variables.png)
In the Enviroment variables menu, click on path - Edit and Add ``C:\MinGW\bin`` to the list. 
![Image Path](./images/EditPath.png)

Now, you can open the cmd and run ```g++ --version``` to see if it works. If the g++ compiler version is displayed, it means the compiler is now working.

Now you have to install SDL2 in your machine. You can download it 
[here](https://www.libsdl.org/release/SDL2-devel-2.0.20-mingw.tar.gz)

After downloading it, extract the i686-w64 directory to your C: directory and change the name to ``mingw_dev_lib``

Done!! Now you are ready to compile and run the program in your machine

### Compiling and running the binaries

To compile the code and run the binaries, run the following commands

```
mingw32-make
mingw32-make run
```

You should see a rotating cube in your screen. Press ESC to close the window.

 ## How to compile in linux

 in order to compile the file you need to install the g++ compiler. To do so, open the terminal and run the following command 
 ```
 sudo apt-get install build-essential
 ```

 You also have to install SDL2 in your machine in order to compile the
 code. To do so, run the following command 
```
 sudo apt-get install libsdl2-dev
``` 

### Compiling and running the binaries for linux

To compile and run the binaries in your linux machine, run the following commands

```
make build-linux
make run
```

you should be able to see a rotating cube in your screen. 
press the ESC key to close the window.

## How to compile in MAC

in order to compile the file you need to install SDL2 in your machine. To do so, open the terminal and run the command 
```
brew install sdl2
```

### Compiling and running the binaries for MAC

To compile and run the binaries in your linux machine, run the following commands

```
make build-linux
make run
```

you should be able to see a rotating cube in your screen. 
press the ESC key to close the window.


 