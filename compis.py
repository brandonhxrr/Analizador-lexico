import sys

#Sintaxis de la entrada
# programa.py archivo.c tabla_simbolos tabla_errores

#Leer el archivo.c
file = open(sys.argv[1], mode="r")

print(file.read())
