## MODELAGEM DO SISTEMA
Este documento contém informações e diagramas da modelagem do sistema.

<!-- ÍNDICE -->
## Índice
1. [END POINT](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#end-point)
  - [DIAGRAMA DE CLASSES](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#diagrama-de-classes)
  - [FORMATO DAS MENSAGENS](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#formato-das-mensagens)
  - [CODIGOS](https://github.com/HBM-Control/HBM-Control/blob/main/Documentos/modelagem.md#códigos)
  
3. [SERVIDORES](/Documentos/servidores.md)


  <h1>END POINT</h1>
  
  ## DIAGRAMA DE CLASSES
  
  ## FORMATO DAS MENSAGENS
  O payload provido pelo End Point tem o seguinte formato:
~~~
 function decodeUplink(input) {
  return {
    data: {
      temp: input.bytes[0],
      umidade: input.bytes[1],
      distancia:input.bytes[2],
      temporeed:input.bytes[3]
      
    },
    warnings: [],
    errors: []
  };
}
~~~

## CÓDIGOS
Os códigos utilizados para implementar o END POINR estão disponiveis no seguinte lint: [CÓDIGOS](https://github.com/HBM-Control/HBM-Control/tree/main/codigos/endpoint)
