## MODELAGEM DO SISTEMA
Este documento contém informações e diagramas da modelagem do sistema.

<!-- ÍNDICE -->
## Índice
1. [END POINT](/Documentos/endpoint.md)
  - DIAGRAMA DE CLASSES
  - FORMATO DAS MENSAGENS
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
