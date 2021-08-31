
## Título do projeto

SENSORIAMENTO/MONITORAMENTO DE BACIAS HIDROGRÁFICAS (Estação com sensores Hidrológicos)

1. [Descrição.](#1-descrição)
2. [Entradas do Sistema.](#2-entradas-do-sistema)
3. [Saídas do Sistema.](#3-saídas-do-sistema)
4. [Funções do Sistema.](#4-funções-do-sistema)
5. [Requisitos não funcionais.](#5-requisitos-não-funcionais)

## Sigla do projeto

SEMBAH



## 1. Descrição

A proposta é auxiliar na automatização do processo de monitoramento de Bacias Hidrográficas.\
Será desenvolvido um sistema interligando uma cadeia de estações de sensoriamento  que irão prover dados para monitoração das bacias hidrográficas e seus afluentes.
O Projeto contará com pelo menos uma estação contendo os seguintes sensores: pluviométrico, altura linimétrica, umidade, temperatura e nível de bateria. Essa estação, denominada END POINT enviará informações coletadas para um GATEWAY via LoRaWAN, que por sua vez irá transmitir via internet as medições para um servidor que irá prover o processamento/armazenamento desses dados, assim como a disponibilidade via interface web.  

## 2. Entradas do Sistema

END POINT:
- Sensor limnimétrico;
- Sensor pluviométrico;
- Sensor de umidade;
- Sensor de temperatura;
- Status bateria.

GATEWAY:
- Envia via internet
- Recepção via LoRaWAN;

SERVIDOR:
- Receber informações dos GATEWAY’s.

## 3. Saídas do Sistema

END POINT:
- Transmissão via LoRaWAN do payload:
- Sensor limnimétrico;
- Sensor pluviométrico;
- Sensor de umidade;
- Sensor de temperatura;
- Status bateria.

GATEWAY:
- Reencaminha via internet o payload recebido.

  

SERVIDOR:
- Receber informações do gateways;
- Representação através de interface web dos dados coletados/processados.

## 4. Funções do Sistema

- Fazer medições do nível de água (altura linimétrica);
- Fazer medições da quantidade de chuva (pluviometro);
- Fazer medição da humidade e temperatura(sensor de humidade e temperatura);
- Fazer medições do nível de bateria;
- Armazenar dados;
- Consultar dados (Históricos);
- Processar informações e emitir alertas.

## 5. Requisitos não funcionais

**Energia:** Células fotovoltaicas ligadas a um banco de baterias com pelo menos 1000 mAh. Por se tratar de um sistema de baixa complexidade, com leituras espaçadas e utilizando LoraWAN, não  irá consumir tanto este recurso no END POINT.  O Gateway pode ser ligado diretamente no AC, ou também contar com banco de baterias próprio.

**Estrutura:** Base de fixação para os leitor limnimétricos e para os outros sensores.

**Custo:** Estimativa de custo para sistemas com duas estações END POINT e um GATEWAY: R$ 900,00
PS: O sensor pluviométrico pode ser compartilhado por duas ou mais estações que estejam localizadas numa distância relativamente próxima, quando se trata de concentração de chuva por área.  
