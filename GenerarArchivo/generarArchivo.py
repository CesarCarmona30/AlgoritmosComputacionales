import random
import sys

nombre = ""


def abrir_archivo():
    global nombre
    nombre = "./" + \
        input("Introduce el nombre del archivo (sin extensión): ") + ".txt"

    try:
        with open(nombre, "x"):
            print("Archivo creado correctamente.")
    except FileExistsError:
        respuesta = input(
            "El archivo ya existe. ¿Desea sobreescribirlo? (s/n): ")
        if respuesta[0].lower() != 's':
            print("No se pudo abrir el archivo")
            sys.exit(0)
        elif respuesta[0].lower() == 's':
            with open(nombre, "w"):
                pass


def generar_archivo():
    inicial = int(input("Introduce el valor inicial: "))
    final = int(input("Introduce el valor final: "))

    cantidad = int(input("Cuantos valores se van a generar?: "))

    with open(nombre, "a") as file:
        for _ in range(cantidad):
            file.write(str(random.randint(inicial, final)) + "\n")


def main():
    abrir_archivo()
    generar_archivo()


if __name__ == "__main__":
    main()
