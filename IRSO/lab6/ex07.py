import time
try:
    print("Prima CTRL+C para terminar")
    while True:
        print("Hello World!")
        time.sleep(2)
except KeyboardInterrupt:
    print("Programa terminado pelo utilizador")
except:
    print("Ocorreu um erro:", sys.exc_info())
finally:
    print("Fim do programa")
