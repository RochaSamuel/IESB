from datetime import datetime

#-------------------a----------------------#
class Data:
    data_iesb = datetime.strptime('13-04-1998', '%d-%m-%Y').date()
    def __init__(self, data: str):
        self.data = datetime.strptime(data, '%d-%m-%Y').date()

    def get_data(self) -> datetime:
        return self.data

    def get_dia(self) -> str:
        return self.data.day

    def get_mes(self) -> str:
        return self.data.month

    def get_ano(self) -> str:
        return self.data.year

    def tempo_desde_IESB(self) -> str:
        self.diff = self.data - self.data_iesb
        return self.diff.days


# data = Data('20-04-2020')
# print(data.get_data())
# print(data.get_dia())
# print(data.get_mes())
# print(data.get_ano())
# print(data.data_iesb)
# print(data.tempo_desde_IESB(), 'dias')


#-------------------b----------------------#
class Livro:
    def __init__(self, genero: str, autor: str):
        self.genero = genero
        self.autor = autor
        self.n_vendas = 0

    def get_genero(self) -> str:
        return self.genero

    def get_autor(self) -> str:
        return self.autor

    def vender(self, quantidade: int):
        self.n_vendas += quantidade


#-------------------c----------------------#
class Cadeira:
    def __init__(self, tipo: str, tamanho: str, peso: float, posicao: str):
        self.tipo = tipo
        self.tamanho = tamanho
        self.peso = peso
        self.posicao = posicao

    def get_tipo(self) -> str:
        return tipo

    def get_tamanho(self) -> str:
        return tamanho

    def get_peso(self) -> float:
        return peso

    def get_posicao(self) -> str:
        return posicao

#------------------------------------------#
