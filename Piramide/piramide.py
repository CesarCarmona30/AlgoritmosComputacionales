def construir_piramide(valor):
    for i in range(1, valor + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()

    for i in range(valor - 1, 0, -1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()


def main():
    respuesta = 's'

    while respuesta[0].lower() == 's':
        valor = int(input('Ingresa un valor: '))
        construir_piramide(valor)

        respuesta = input('Desea construir otra piramide? (s/n): ')


if __name__ == "__main__":
    main()
