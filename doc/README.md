
## Título do projeto

SENSORIAMENTO/MONITORAMENTO DE BACIAS HIDROGRÁFICAS (Estação com sensores Hidrológicos)

## Sigla do projeto

SEMBAH

## Descrição

A proposta é auxiliar na automatização do processo de monitoramento de Bacias Hidrográficas.\
Será desenvolvido um sistema interligando uma cadeia de estações de sensoriamento  que irão prover dados para monitoração das bacias hidrográficas e seus afluentes.
O Projeto contará com pelo menos uma estação  de sensoriamento pluviométrico, altura linimétrica,  e de vazão. Essa estação, denominada END POINT enviará informações coletadas para um GATEWAY via LoRaWAN, que por sua vez irá transmitir (via 3/4G) as medições para um servidor que irá prover o processamento/armazenamento desses dados, assim como a disponibilidade via interface web.  

## Entradas do sistema

END POINT:
- Sensor limnimétrico;
- Sensor pluviométrico;
- Sensor de vazão;
- Sensor de umidade;(verificar se vamos incluir)
- Sensor de temperatura;(verificar se vamos incluir)
- Status bateria.

GATEWAY:
- Envia via 3/4G
- Recepção via LoRaWAN;
- Status bateria.

SERVIDOR:
- Receber informações dos GATEWAY’s.

## Saídas do sistema

END POINT:
- Transmissão via LoRaWAN do payload:
- Cabeçalho: ID da estação + ID da leitura;
- Sensor limnimétrico;
- Sensor pluviométrico;
- Sensor de vazão;
- Sensor de umidade;(verificar se vamos incluir)
- Sensor de temperatura;(verificar se vamos incluir)
- Status bateria.

GATEWAY:
- Envia via 3/4G, payload contendo:
  - ID do gateway;
  - Status bateria.

SERVIDOR:
- Receber informações do gateways;
- Representação através de interface web dos dados coletados/processados.

## Funções do sistema

- Fazer medições do nível de água (altura linimétrica);
- Fazer medições da quantidade de chuva (pluviometro);
- Fazer medição da vazão de água (sensor de vazão);
- Armazenar dados;
- Consultar dados (Históricos);
- Processar informações e emitir alertas.

## Requisitos não funcionais

**Energia:** Células fotovoltaicas ligadas a um banco de baterias com pelo menos 1000 mAh. Por se tratar de um sistema de baixa complexidade, com leituras espaçadas e utilizando LoraWAN, não  irá consumir tanto este recurso no END POINT.  O Gateway pode ser ligado diretamente no AC, ou também contar com banco de baterias próprio.

**Estrutura:** Base de fixação para os leitor limnimétricos e para os outros sensores.

**Custo:** Estimativa de custo para sistemas com duas estações END POINT e um GATEWAY: R$ 900,00
PS: O sensor pluviométrico pode ser compartilhado por duas ou mais estações que estejam localizadas numa distância relativamente próxima, quando se trata de concentração de chuva por área.  
