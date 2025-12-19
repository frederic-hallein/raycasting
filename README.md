# Raycasting

Raycasting is a rendering technique used to create a 3D perspective in a 2D map. This code uses the DDA (= Digital Differential Analyzer) algorithm. 
The rendering is done using the SDL2 library.



## How To Install & Run (Linux)

1. Install the C++ compiler g++ using the following command:
```bash
sudo apt-get install g++
```

To check which version is installed run the following command:
```bash
g++ --version
```

2. Install the SDL2 library using the following command:
```bash
sudo apt install libsdl2-image-dev
```

3. Clone the remote repository to your local machine using the following command:
```bash
git clone https://github.com/frederic-hallein/raycasting
```
4. To compile the project, go inside the `raycasting/` directory and run the following command: 
```bash
make all
``` 
This should create a `main` executable file in the same directory. 

5. Run the executable by using the following command: 
```bash
./main
```

## Controls

Character control is done using the `wasd` keys. 
- `w` : forward movement
- `a` : backward movement
- `s` : left camera rotation 
- `d` : right camera rotation 



## Screenshots

![Screenshot from 2024-08-06 10-58-15](https://github.com/user-attachments/assets/0c51641c-91d9-4689-bb6f-89e4f097e154)
![Screenshot from 2024-08-06 10-54-51](https://github.com/user-attachments/assets/795943dc-c147-4a0f-be84-e4b21d48311e) 
