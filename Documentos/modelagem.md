## MODELAGEM DO SISTEMA
Este documento contém informações e diagramas da modelagem do sistema.

<!-- ÍNDICE -->
## Índice
 
1. [END POINT](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#end-point)


  - [MONTAGEM](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#montagem)
  - [DIAGRAMA DE CLASSES](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#diagrama-de-classes)
  - [FORMATO DAS MENSAGENS](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#formato-das-mensagens)
  - [CODIGOS](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#códigos)
  
2. [SERVIDORES](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#servidor)
  - [FLUXO MENSAGENS](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#fluxo-das-mensagens)
  - [PAYLOAD DADOS NODE RED](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#payload-dados-node-red)
  - [ESTRUTURA DO BANCO](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#estrutura-do-banco)
  - [INSERIR DADOS NO BANCO](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#inserir-dados-no-banco)

  <h1>END POINT</h1>
  
  ## MONTAGEM
  
  <p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/montagem.png" />
</p>

ITENS UTILIZADOS:
 - ARDUINO NANO COM SHIELD PARA LORAWAN;
 - 2 resistores de 12k;
 - Sensor DHT11;
 - Sensor HC-SR04;
 - ReedSwitch com báscula;
 - Bateria 9 volts com adaptador;
 - Jumpers.

  
  ## DIAGRAMA DE CLASSES
  
  <p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/endpoint_classes.JPG" />
</p>
  
  ## FORMATO DAS MENSAGENS
  O payload provido pelo End Point tem o seguinte formato:
~~~
function decodeUplink(input) {
  return {
    data: {
      temp: input.bytes[0],
      umidade: input.bytes[1],
      distancia:input.bytes[2],
      temporeed:input.bytes[3],
      baterylevel:input.bytes[4]
    },
    warnings: [],
    errors: []
  };
}
~~~

<h1>SERVIDOR</h1>

## FLUXO DAS MENSAGENS

#### Flow Sistema

<p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/FlowSistema.png" />
</p>

Podemos veriificar na imagem mostrada anteriormente, a entrada de dados da TTN, e como é tratado fluxo de dados, como inserção, seleção no banco assim como outras tratativas dos dados.

#### Flow Dashboard

<p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/FlowDashBoard.png" />
</p>

Podemos veriificar na imagem mostrada anteriormente, como são apresentados os dados depois de tratados, sendo encaminhados para a tabela no caso do relatório, para os gráficos no caso de hitórico ou para os gauges no caso do ultimo dado coletado.

## PAYLOAD DADOS NODE RED

<p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/PayloadRecebido.png" />
</p>

## ESTRUTURA DO BANCO

~~~
CREATE TABLE `pji` (
  `idDevice` int(11) NOT NULL AUTO_INCREMENT,
  `timestamp` timestamp(6) NULL DEFAULT NULL,
  `nomeDevice` varchar(45) DEFAULT NULL,
  `distancia` float DEFAULT NULL,
  `temp` float DEFAULT NULL,
  `temporeed` float DEFAULT NULL,
  `umidade` float DEFAULT NULL,
  PRIMARY KEY (`idDevice`)
) ENGINE=InnoDB AUTO_INCREMENT=283 DEFAULT CHARSET=latin1;
~~~

## DASHBOARD

#### HBM-Monitoramento

<p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/HMB-Monitoramento-Dashboard.png" />
</p>

No menu do monitoramento podemos verificar a informações da seguinte forma, quando o dado é coletado é apresentado a esquerda, onde é mostrado a data e horário da ultima coleta realizada assim como os valores de Temperatura, Umidade, Distancia (nível da água), Bateria (Nível da bateria) e o Pluviomentro. <br/><br/>
A direita encontra-se o campo onde pode ser passado a data e horário inicial e final que quer realizar o filtro, em seguinda é apresentado abaixo os gráficos do período solicitado.

#### HBM-Relatório

<p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/HMB-Relatorio-Dashboard.png" />
</p>

No menu de relatório é a parte do sistema onde podemos também realizar um filtro por um determinado período e é apresentado em forma de uma tabela/relatório. <br/>

## CÓDIGOS
Os códigos utilizados para implementar o END POINT estão disponiveis no seguinte link: [CÓDIGOS](https://github.com/HBM-Control/HBM-Control/tree/main/codigos/endpoint)<br/>
Os códigos utilizados para implementar o servidor estão disponiveis no seguinte link: [CÓDIGOS](https://github.com/HBM-Control/HBM-Control/tree/main/codigos/servidor)
