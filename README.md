# Sistema Operativo 2024-2
<hr>

### 03 de octubre del 2024:

    Este día empezaré a reportar el proceso que conlleva crear el sistema operativo para la materia de sistemas operativos, bajo la dirección del docente Héctor Alonso Rivera Alvarez.
    
    Decidí que por fines de aprendizaje, usare el lenguaje C para crear la estructura grafica del sistema, además de usar
    su paradigma de programacion estructurado que nos facilita el manejo del flujo del programa.
    En estos momentos no considero que tendremos que usar otro tipo paradigma de programacion, pero si llega el caso en
    que necesitemos hacer operaciones más complejas, la programacion orientada a objetos de lenguaje C++ será una opcion
    a tener en cuenta.

    Se usara el git y github como repositorio para guardar cada version, rama y cambio hecho en nuestro codigo actual.
    
    Y el IDE escogido para realizar el proyecto será Visual Studio Code, gracias a su facilidad para escribir codigo en C
    y para la compilacion usaremos la terminal de MSYS2. Así que este será nuestro primer paso.
    
    Debo mencionar que antes de realizar las descargas hay que tener una buena conexion a internet,
    lo digo por experiencia, al momento de hacer las descargas estuve conectado a una red inestable
    y por culpa de eso las descargas fueron ineficientes y tuve que realizar más procesos de descarga manual.

    Para hacer con exito este primer proceso, usaremos el tutorial que ofrece microsoft en la página oficial de Visual
    Studio Code, ingresaremos con este [link](https://code.visualstudio.com/docs/languages/cpp) y tambien
    usaremos el tutorial para descargar la terminal de MSYS2 [link](https://www.msys2.org/), de las terminales
    que descargaremos en nuestro dispositivo, usaremos la MSYS2 MGWIN64.

    Buscaremos el compilador, o sea la terminal MSYS2 MGWIN64 dentro de las aplicaciones, y nos ubicaremos dentro del proyecto, 
    por ejemplo, de esta manera:

    ``` Bash
    cd /c/visualStudioCode/GUI
    ```

    Cuando tengamos todo instalado, continuaremos con la interfaz grafica, usaremos la biblioteca
    GTK la cual es bastante popular y tiene bastante documentacion, la descargaremos de esta manera:

    Ingreamos desde nuestro navegador a este [enlace](https://www.gtk.org/docs/installations/windows) 
    y desde ahí seguiremos el paso a paso para descargar el GTK3.

    Y a partir de este momento empezaremos a compilar el archivo de C de esta manera desde el compilador 
    MSYS2 MGWIN64:
    
    ``` Bash 
    gcc `pkg-config --cflags gtk+-3.0` -o nombre_archivo nombre_archivo.c `pkg-config --libs gtk+-3.0` 
    ```

    Continuaremos el proyecto creando las clases **desktop.c** y **login.c**.
    Crearemos el codigo correspondiente para crear el escritorio y la pagina de bloqueo de nuestro OS
    compilaremos las dos clases de la manera en que hemos aprendido:

    ``` Bash
    #Nos ubicamos dentro de nuestro proyecto desde la terminal del compilador MSYS2 MGWIN64
    cd /c/visualStudioCode/GUI

    #Compilamos una clase a la vez, primero desktop
    gcc `pkg-config --cflags gtk+-3.0` -o desktop desktop.c `pkg-config --libs gtk+-3.0` 

    #luego continuamos con login
    gcc `pkg-config --cflags gtk+-3.0` -o login login.c `pkg-config --libs gtk+-3.0`  
    ```
    Para ejecutar el codigo iremos al terminal del visual studio code y ejecutaremos el archivo .exe
    de esta manera:

    ``` Powershell
    ./login.exe
    ./desktop.exe
    ```

    Y de esta manera tenemos la primera parte de nuestro codigo.

### 07 de octubre del 2024
    Continuamos con la creacion del SO por donde lo dejamos, ahora
    el objetivo será que a partir del login podamos abrir el escritorio
    objetivo que ya logramos gracias al uso de los header file, en estos
    archivos almacenaremos las declaraciones de funciones que pueden
    ser compartidos entre varios archivos de codigo.

    Además se definio la arquitectura de archivos que se usara siento esta:

    ```scss
    /my_operating_system_project
     /src
        - login.c
        - desktop.c  // Punto de entrada del sistema operativo
    /include
        - login.h  // Archivos de encabezado con definiciones de funciones
        - desktop.h
    /build
        - (archivos compilados) //Archivos con extension .exe
    ```
    Y continuando con el objetivo de hoy, hicimos ciertas modificaciones en 
    el proyecto, debo mencionar que me percate que cada vez que hagamos un cambio 
    dentro de algun archivo, debemos compilar nuevamente todo el codigo para generar 
    el archivo .exe y volver a ejecutar. Despues de hacer los cambios, usamos este
    comando en el MSYS MGWIN64 para compilar un .exe que nos permita abrir el 
    login y despues de ingresar generar el desktop.

    ``` Bash
    gcc login.c desktop.c -o my_program `pkg-config --cflags --libs gtk+-3.0`
    ```

    Debido a ciertos invenientes, no se pudo cerrar la ventana de login despues de abrir
    el desktop, pero esto no es inconveniente para seguir trabajando, asi que tengo 
    la esperanza de que podre solucionar este inconveniente más adelante.

    Ahora continuamos, y el objetivo es usar una base de datos como MongoDB para almacenar 
    los usuarios que puedan ingresar al escritorio de nuestro SO.
    




