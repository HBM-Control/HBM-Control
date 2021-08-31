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

<p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/FluxoDasMensagens.png" />
</p>

## PAYLOAD DADOS NODE RED

<p align="center">
  <img src="https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/imagens/ChegadaDosDados.png" />
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

## INSERIR DADOS NO BANCO

~~~
var Timestamp = msg.payload.received_at
var Nomedevice = msg.payload.end_device_ids.device_id
var Valordistancia = msg.payload.uplink_message.decoded_payload.distancia
var Valortemp = msg.payload.uplink_message.decoded_payload.temp
var Valortemporeed = msg.payload.uplink_message.decoded_payload.temporeed
var Valorumidade = msg.payload.uplink_message.decoded_payload.umidade

msg.topic = "INSERT INTO pji(`timestamp`, `nomeDevice`, `distancia`, `temp`, `temporeed`, `umidade`) VALUES ("+Timestamp+"', "+Nomedevice+"', '"+Valordistancia+"', '"+Valortemp+"', '"+Valortemporeed+"', '"+Valorumidade+"')";


return msg;
~~~

## CÓDIGOS
Os códigos utilizados para implementar o END POINR estão disponiveis no seguinte lint: [CÓDIGOS](https://github.com/HBM-Control/HBM-Control/tree/main/codigos/endpoint)
