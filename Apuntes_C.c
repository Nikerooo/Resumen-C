//[Comentario]       // La doble barra (//[Comentario]) Sirve para comentar toda una linea
/* [comentario] */   // Sirve para hacer un comentario dentro de codigo

#include<stdio.h>    //Sirve para habilitar librerias escenciales
#include<math.h>     // librerias con operaciones matematicas
#include<time.h>     // contiene funciones para manipular y formatear la fecha y hora del sistema
 Toda variable se declara asi: [Tipo de variable] {nombre}; --> int numeroEntero;
#define pi 3.141592 // #define sirve para fijar una variable, pi es la variable y 3.14... es el valor fijado


{ Tipos de variables
    //unsigned char   (Caracteres)  rango: 0 a 255                       (Valores correspondientes a números ordinales de los 256 caracteres ASCII)
    //char            (Caracteres)  rango: -128 a 127                    (char letra = 'A'; ó letra = 65;)
    //short           (Entero)      rango: -32768 a 32767                (Proporciona un entero en el rango dado)
    //unsigned int    (Entero)      rango: 0 a 65535                     (Un numero positivo)
    //int             (Entero)      rango: -32768 a 32767                (Equivalente al tipo short en maquinas de 16 bits)
    //long int        (Entero)      rango: -2147483648 a 2147483647      (tamaño(int) <= tamaño(long))
    //unsigned long   (Entero)      rango: 0 a 4294967295                (entero largo sin signo)
    //float           (Reales)      rango: -3.4E-38 a 3.4E+38            (no tiene más de 5 dígitos significativos)
    //long double     (Reales)      rango: 3.4 E-4932 a 1.18E+4932       (Puede tener hasta 19 digitos significativos)
    //double          (Reales)      rango:1.79769 e-308 a 1.79769E+308   (Puede tener hasta 16 digitos significativos)
}


scanf("%i", &num) ; //scanf sirve para pedir datos, "%i" para especificar el dato que va a entrar y &num es donde se guarda
printf("%d", num);  //printf muestra un dato, %d especifica el tipo de dato que va a mostrar
printf (/*[mensaje]*/) //Sirve para mostrar cualquier mensaje
letra = getch( ); // Sirve para que al pulsar cualquier tecla se guarde el caracter en una variable

char nombre [15]; //char en este caso, la variable char no admite mas de 15 caracteres
sizeof  variable //muestra el tamaño en bytes de la variable

void main(){ //void main() sirve como cuerpo de todo el proyecto, va todo adentro del void main
}

{ Conectores y/o/etc
    // &&  --> Y
    // ||  --> O      (alt + 124)
    // !   --> No
    // ==  --> igual
    // !=  --> Distinto
    // =	Asignación simple
    // *=	Multiplicación más asignación
    // /=	División más asignación
    // %=	Módulo más asignación
    // +=	Suma más asignación
    // -=	Resta más asignación

    total += x; -> total == total + x;
}


{Funciones
    if(/*Condicion*/) {
        /*Condicion si si pasa*/
    }
    else{
        /*condicion si no pasa*/
    }


    for (int i = 0; i < count; i++)
    {
        /* code */
    }


    case (/*variable*/){
        1: /*codigo*/
            break;
        2: /*codigo*/
            break;
        3: /*codigo*/
            break;
        default: /*codigo*/
            break;
    }


    while (/* condition */)
    {
        /* code */                //Condicion de corte -> V
    }


    do{
        /* code */
    } while (/* condition */);     //condicion de corte -> V


    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;

    default:
    break;
}


    int suma (int a, int b)
    {
        int total ;                                //funcion suma
        total = a + b ; return  total ;
    }
}


{ Funciones para libreria string.h
    strcpy (nombre_string_destino , nombre_string_origen); //Sirve para cambiar de variable los strings
    strcmp (str1 , str2) ; //que compara dos strings, devolviendo 0 (cero) si son iguales y distinto de 0 (cero) si son distintos.
    strcat ( str1 , str2 ); //que agrega (concatena) el string 2 al final del string 1.
    strlwr(variable); //Convierte las variables en minusculas
    strrev(variable); // Sirve para dar vuelta los strings -> Jorge = egroJ
    variable1 = atof(variable2); //Sirve para cambiar un char a un Float
    variable1 = atoi(variable2); //Sirve para cambiar un char a un Int
    getchar(variable); //Lee caracter a caracter, devuelve el caracter siguiente del flujo de entrada(stdin) cuando termina devuelve EOF
    putchar(variable); //Se utiliza para escribir en la salida (stdout)
    strlen(variable); //Sirve para contabilizar la cantidad de caracteres
}

{Operaciones matematicas con el #include<math.h>:
    +ceil(x) -> Redondea al entero mayor mas cercano
    +fabs(x) -> Devuelve el valor absoluto de x (modulo)
    +floor(x) -> Redondea al entero menor mas cercano
    +sqrt(x) -> Saca raiz cuadrada de x
    +fmod(x,y) -> Calcula el resto de la division de x/y
    +pow(x,y) -> Calcula x elevado a la potencia y
    +acos(x) -> Calcula el Arco Coseno de x
    +asin(x) -> Calcula el Arco Seno de x
    +atan(x) -> Calcula el Arco Tangente de x
    +cos(x) -> Calcula el Coseno de x
    +sin(x) -> Calcula el Seno de x
    +tan(x) -> Calcula la Tangente de x
}


Para mostrar x decimales escribimos printf("%.2d", [variable]), ahi mostraria 2 variables

{ Funcion recursiva:

    Es una funcion que se llama a si misma dentro de la misma funcion
}

{ Matrices
    Las matrices se declaran igual que los arrays, nomas que se especifican las cantidad de filas y columnas
    int ejemplo [filas] [columnas];
        //Las filas son horizontales y columnas verticales, se llenan primero las columnas y luego las filas
    int ejemplo2 [cantidadCopias] [filas] [columnas]
}

{   Estructuras:

    struct nombreEstructura2{
        float variable3;
        char variable4[10];
    };

    struct nombreEstructura{
        int variable1;
        char variable2;
        struct nombreEstructura2 nombreObjeto2;

    }nombreObjeto[/*cantidad de objetos*/];

    printf("Para llamar a la variable de la estructura: %s", nombreObjeto.nombreEstructura2.variable4); //Para llamar a la variable4
}


{ Punteros

        Declarar punteros: int *pVariable;
        Apuntar espacio de memoria: pVariable = &posicion; <- De esta forma apuntas a posicion

        printf("Entero (Variable): %d\n", variable); // Muestra el valor almacenado en variable
        printf("Puntero *: %d\n", *punteroVariable); // Muestra el valor de la variable al la que apunta el puntero
        printf("Puntero entero: %p\n", punteroEntero) //Mustra la direccion de memoria de la variable a la que apunta

}

{ Manejo de archivos

                Parámetro       Significa abrir el archivo en modo
                    r             Abre un archivo de texto para lectura.
                    w             Crea un archivo de texto para escritura.
                    a             Abre un archivo de texto para añadir.
                    rb            Abre un archivo binario para lectura.
                    wb            Crea un archivo binario para escritura.
                    ab            Abre un archivo binario para añadir.
                    r+            Abre un archivo de texto para lectura / escritura.
                    w+            Crea un archivo de texto para lectura / escritura.
                    a+            Añade o crea un archivo de texto para lectura / escritura.
                    r+b           Abre un archivo binario para lectura / escritura.
                    w+b           Crea un archivo binario para lectura / escritura.
                    a+b           Añade o crea un archivo binario para lectura / escritura. )

    fputc(Caracter, ApuntadorArchivo) es una función nos permite escribir un caracter en el
    archivo, regresa el caracter que se presionó en caso de que la operación se realice con éxito o
    EOF si falló. El puntador es el que nos brinda la función fopen.

    fclose(ApuntadorArchivo) guarda los cambios en el archivo, cierra la conexión y libera los
    recursos usados por el apuntador.



                    Nombre                   Función
                fopen()                   Abre un archivo.
                fclose()                  Cierra un archivo.
                fgets()                   Lee una cadena de un archivo.
                fputs()                   Escribe una cadena en un archivo
                fseek()                   Busca un byte especifico de un archivo.
                fprintf()                 Escribe una salida con formato en el archivo.
                fscanf()                  una entrada con formato desde el archivo.
                feof()                    Devuelve cierto si se llega al final del archivo.
                ferror()                  Devuelve cierto si se produce un error.
                rewind()                  Coloca el localizador de posición del archivo al principio del mismo.
                remove()                  Borra un archivo.
                fflush()                  Vacía un archivo.



//! Hay dos tipos de archivos, archivos de texto y archivos binarios.

//? Un archivo de texto es una secuencia de caracteres  organizadas  en  líneas
//? terminadas  por  un  carácter  de  nueva  línea.    En  estos  archivos  se pueden almacenar canciones,
//? fuentes de programas, base de datos simples, etc.
//? Los archivos de texto se caracterizan por ser  planos,  es  decir,  todas  las  letras  tienen
//? el  mismo  formato  y  no  hay  palabras  subrayadas,  en  negrita,  o  letras  de distinto tamaño o ancho.

//* Un archivo binario es una secuencia de bytes que tienen una correspondencia uno a uno con un dispositivo externo.
//* Así  que  no  tendrá  lugar  ninguna  traducción  de  caracteres.
//* Además,  el  número  de  bytes  escritos  (leídos) será el mismo que los encontrados en el dispositivo externo.
//* Ejemplos de estos archivos son Fotografías, imágenes, texto con formatos, archivos ejecutables (aplicaciones), etc.
}

{ Memoria

   (sizeof(tipVariable); ) Indica cuantos bits utiliza esa variable o tipo

    (int*)malloc(sizeof(int)); //Reserva la cantidad de bits que se le asignan  (No limpia basura de memoria)
    (int*)calloc(cantGuardar, cantElementos); //Aumenta los bits asignados a una variable  (limpia la basura de la memoria)
    (int*)realloc(puntero,cantEspacio);
    free(variable); //Sirve para limpiar el espacio de memoria de dicha variable


}


























































