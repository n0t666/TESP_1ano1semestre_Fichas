import sys,time,requests
try:
    print("Prima CTRL+C para terminar")
    while True:
        print("Leitura temperatura do Servidor:")
        r= requests.get("http://localhost/trabalhos/prsi/api/api.php?nome=temperatura")
        if (r.status_code==200):
            print("Ok.Pedido efetuado com sucesso!!!")
            print("Status Code: ",str(r.status_code))
            print("Valor: ",r.text,"ºC")
            time.sleep(2)
            print("\n")
        else:
            print("Erro: Pedido não efetuado!!")
            print("Status code",str(r.status_code))
        time.sleep(2)
            

except KeyboardInterrupt:
    print("Programa terminado pelo utilizador")
except:
    print("Ocorreu um erro:", sys.exc_info())
finally:
    print("Fim do programa")