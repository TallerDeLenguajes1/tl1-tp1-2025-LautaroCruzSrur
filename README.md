# Proyecto

## Archivos visibles
Veo los siguientes archivos y carpetas en el proyecto:
- Un archivo tipo C (`.c`)
- Una carpeta `.vscode`
- Un archivo `.txt`
- Un archivo ejecutable (`.exe`)

## Archivos innecesarios
Los archivos que no deberían estar en el repositorio son:
- **El archivo `.txt`**
- **El archivo ejecutable `.exe`**

Estos archivos pueden ignorarse en Git agregándolos al `.gitignore` con las siguientes reglas:

```
# Ignorar archivos innecesarios
*.txt
*.exe
.vscode/
```

Esto asegurará que no se suban al repositorio y mantendrá el código limpio.

## Punteros en C
### ¿A qué se debe?
Se debe a que el puntero almacena la dirección de memoria de la variable, no su contenido.

### ¿Qué obtiene en el punto 4?
Obtengo la dirección de memoria del puntero.

### ¿Es igual a las anteriores?
No.

### ¿Por qué?
Porque la dirección de memoria del puntero y la dirección de memoria de la variable son distintas. El puntero solo almacena la dirección de la variable, pero él mismo tiene su propia ubicación en la memoria.

