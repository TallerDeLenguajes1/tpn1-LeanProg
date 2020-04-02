# Trabajo Practico Numero 1

Se desarrolla la parte teorica del trabajo practico numero 1

## Manejo de punteros y versionado en git y github.
1. c)
    Qué es el archivo gitignore, para qué sirve, cómo implementar el gitignore en un repositorio Git. Git tiene una herramienta imprescindible casi en cualquier proyecto, el archivo "gitignore", que sirve para decirle a Git qué archivos o directorios completos debe ignorar y no subir al repositorio de código.
    Su implementación es muy sencilla, por lo que no hay motivo para no usarlo en cualquier proyecto y para cualquier nivel de conocimientos de Git que tenga el desarrollador. Únicamente se necesita crear un archivo especificando qué elementos se deben ignorar y, a partir de entonces, realizar el resto del proceso para trabajo con Git de manera habitual.

    En el gitignore se especificarán todas las rutas y archivos que no se requieren y con ello, el proceso de control de versiones simplemente ignorará esos archivos

    **Por qué usar gitignore**
    Piensa que no todos los archivos y carpetas son necesarios de gestionar a partir del sistema de control de versiones. Hay código que no necesitas enviar a Git, ya sea porque sea privado para un desarrollador en concreto y no lo necesiten (o lo deban) conocer el resto de las personas. Pueden ser también archivos binarios con datos que no necesitas mantener en el control de versiones, como diagramas, instaladores de software, etc.

    El ejemplo más claro que se puede dar surge cuando se trabaja con sistemas de gestión de dependencias, como npm, Bower, Composer. Al instalar las dependencias se descargan muchos archivos con documentos, tests, demos, etc. Todo eso no es necesario que se mantenga en el sistema de gestión de versiones, porque no forma parte del código de nuestro proyecto en concreto, sino que es código de terceros. Si Git ignora todos esos archivos, el peso total de proyecto será mucho menor y eso redundará en un mejor mantenimiento y distribución del código.

    Otro claro ejemplo de uso de gitignore son los archivos que crean los sistemas operativos automáticamente, archivos que muchas veces están ocultos y no los vemos, pero que existen. Si no evitas que Git los procese, estarán en tu proyecto como cualquier otro archivo de código y generalmente es algo que no quieres que ocurra
    **Implementar el gitignore**

    Simplemente tienes que crear un archivo que se llama ".gitignore" en la carpeta raíz de tu proyecto. Como puedes observar, es un archivo oculto, ya que comienza por un punto ".".
    Dentro del archivo .gitignore se coloca texto plano, con todas las carpetas que quieres que Git simplemente ignore, así como los archivos.
    **usar .gitignore ***
    la mayoría de las veces los archivos que necesitas ignorar son siempre los mismos, atendiendo a tu sistema operativo, lenguajes y tecnologías que uses para desarrollar, es muy sencillo crear un archivo .gitginore por medio de una especie de plantillas.

    Existe una herramienta online que yo uso siempre que se llama gitignore.io. Básicamente permite escribir en un campo de búsqueda los nombres de todas las herramientas, sistemas, frameworks, lenguajes, etc. que puedas estar usando. Seleccionas todos los valores y luego generas el archivo de manera automática.
    Por ejemplo una alternativa sería escribir las siguientes palabras clave: OSX, Windows, Node, Polymer, SublimeText.
    Una vez generado el código de tu gitignore, ya solo te queda copiarlo y pegarlo en tu archivo .gitignore, en la raíz de tu proyecto.



## Autores 

_Menciona a todos aquellos que ayudaron a levantar el proyecto desde sus inicios_


