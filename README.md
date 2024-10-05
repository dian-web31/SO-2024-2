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
    #Ejecutamos de esta manera el codigo
    gcc `pkg-config --cflags gtk+-3.0` -o nombre_archivo nombre_archivo.c `pkg-config --libs gtk+-3.0`

    ```

    Cuando tengamos todo instalado, continuaremos con la interfaz grafica, usaremos la biblioteca
    GTK la cual es bastante popular y tiene bastante documentacion, la descargaremos de esta manera:


    y volveremos a ejecutar 

    




