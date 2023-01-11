def Hanoi (discos,TorreOrigen=1,TorreAuxiliar=2,TorreDestino=3):
    if discos==1:
        print (TorreOrigen,"a",TorreDestino)
        
    else:
        Hanoi(discos-1,TorreOrigen,TorreDestino,TorreAuxiliar)
        print(TorreOrigen,"a",TorreDestino)
        Hanoi (discos-1,TorreAuxiliar,TorreOrigen,TorreDestino)
    return

##Lo probamos con 3 discos
Hanoi(3)