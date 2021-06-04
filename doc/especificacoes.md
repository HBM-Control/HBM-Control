# Especificações do Sistema
> Descrição das especificações de componentes do Sistema.



**Módulos**

1. [Sensor de Distância.](#1-sensor-de-distância)
2. [Reed Switch](#2-sensor-pluviométrico)
3. [Sensor de Umidade e Temperatura.](#3-sensor-de-umidade-e-temperatura)
4. [Sensor de Fluxo de  Água.](#4-sensor-de-fluxo-de-água)
5. [Gateway](#5-gateway)
6. [Servidor](#6-servidor)
---



### 1. Sensor de Distância

| Sensor de Distância (Sensor limnimétrico)|                                                                                      |
|:----------------------------------------:|:------------------------------------------------------------------------------------:|
|                **Modelo**                |           Sensor de Distância Ultrassônico Grove                                     |
|              **Quantidade**              |                              1                                                       |
|           **Tensão de Operação**         |                          3,3V e 5V                                                   |
|            **Faixa de Medição**          |                        3 cm a 350 cm                                                 |
|               **Resolução**              |                            1 cm                                                      |
|                **Saída**                 |                            PWM                                                       |
|            **Corrente máxima**           |                            8 mA                                                      |
|        **Temperatura de operação**       |                        -10ºC à 60ºC                                                  |
|                **Peso**                  |                            13g                                                       |
|              **Dimensões**               |                    50 mm x 25 mm x 16 mm                                             |
|           **Sistema Grove**              | [Introdução](http://www.seeedstudio.com/document/pdf/Introduction%20to%20Grove.pdf)  |
|          **Outras Informações**          | [Biblioteca Arduino](https://github.com/SeeedDocument/Grove_Ultrasonic_Ranger)       |

---

### 2. Sensor Pluviométrico

| Sensor Pluviométrico                  |                                                                                                                       |
| :-----------------------------------: | :-------------------------------------------------------------------------------------------------------------------: |
|             **Modelo**                |                Reed Switch Chave Magnética                                                                            |
|            **Quantidade**             |                              1                                                                                        |
|     **Tensão de Operação**            |                           200 VDC                                                                                     |
|  **Corrente Máxima de Operação**      |                            500mA                                                                                      |
|            **Material**               |                       Vidro e metal                                                                                   |
|         **Sensor Magnético**          |                                                                                                                       |
|     **Temperatura de operação**       |                        -40ºC à 125ºC                                                                                  |
|           **Dimensões**               |                    40,38 x 2,28 mm (com terminais)                                                                    |
|         **Guia de conexão**           | [Guia de conexão](https://learn.sparkfun.com/tutorials/reed-switch-hookup-guide?_ga=1.77297938.607751731.1459278834)  |
|       **Outras Informações**          | [Datasheet](https://img.filipeflop.com/files/download/Datasheet_Reed_Switch_MDSR-4.pdf)                               |
|       **Outras Informações**          | [Outras informações](https://www.filipeflop.com/produto/reed-switch-chave-magnetica/)                                 |

---

### 3. Sensor de Umidade e Temperatura

| Sensor de Umidade e Temperatura         |                                                                            |
| :-------------------------------------: | :------------------------------------------------------------------------: |
|             **Modelo**                  |                               DHT11                                        |
|           **Quantidade**                |                                 1                                          |
|       **Tensão de Operação**            |                            3 a 5 (VDC)                                     | 
|    **Tensão de Operação Máxima**        |                             5,5 (VDC)                                      |
|           **Corrente**                  |                          200uA a 500mA                                     |
|       **Corrente em standby**           |                          100uA a 150mA                                     |
|   **Faixa de medição de Umidade**       |                            20% a 90%                                       |
|  **Precisão de medição de Umidade**     |                               ± 5%                                         |
|  **Faixa de medição de Temperatura**    |                         0ºC - 50ºC ± 2ºC                                   |
| **Precisão de medição de Temperatura**  |                               ± 2ºC                                        |
|           **Precisão**                  |                           16 bits                                          |
|           **Interface**                 |                        Single Serial                                       |
|           **Pinagem**                   |                     VCC, GND, Dados e NC                                   |
|        **Tempo de resposta**            |                              2s                                            |
|           **Dimensões**                 |                    23 x 12 mm (incluindo terminais)                        |
|       **Outras Informações**            | [Datasheet](https://img.filipeflop.com/files/download/Datasheet_DHT11.pdf) |

---

### 4. Sensor de Fluxo de Água

| Sensor de Fluxo de Água 1/2       |                                                                              |
| :-------------------------------: | :--------------------------------------------------------------------------: |
|            **Modelo**             |                                       YF-S201b                               |
|          **Quantidade**           |                                          1                                   |
|        **Tipode sensor**          |                                      Efeito Hall                             |
|      **Tensão de Operação**       |                                       5 a 24 (V)                             |
|        **Corrente Máxima**        |                                       15 mA(5V)                              |
|        **Faixa de Fluxo**         |                                       1-30 L/min                             |
|        **Pressão Máxima**         |                                        2,0 MPa                               |
|        **Pulso por litro**        |                                         450                                  |
|        **Frequência (Hz)**        |                                    7,5xFluxo(L/min)                          |
|    **Temperatura de trabalho**    |                                     -25ºC a 80ºC                             |
|           **Exatidão**            |                                        10%                                   |
|      **Comprimento do cabo**      |                                        15 cm                                 |
|      **Dimensão da conexão**      |                                        1/2"                                  |
|  **Dimensão diâmentro interno**   |                                        0,78"                                 |
|       **Dimensão externa**        |                                        2,5" x 1,4" x 1,4"                    |
|           **Pinagem**             |                     Vermelho (VCC), Preto (GND), Amarelo (Saída PWM)         |
|      **Outras Informações**       | [Datasheet](https://img.filipeflop.com/files/download/Datasheet_YF-S201.pdf) |

---

### 5. Gateway

|            Raspberry              |                                                                              |
| :-------------------------------: | :--------------------------------------------------------------------------: |
|            **Modelo**             |                                 Pi 3 model B                                 |
|          **Quantidade**           |                                     1                                        |
|             **RAM**               |                                    1 GHz                                     |
|          **Dimenssão**            |                              85mm x 56mm x 17mm                              |
|           **Material**            |              Metais / Placa de Fenolite / Componentes Eletrônicos            |
|         **Processador**           |           Broadcom BCM2837, Quad Core 64-bit ARMv8 Cortex-A53 1.2GHz         |

---

### 6. Servidor

|  Servidor        |                    |
| :--------------: | :----------------: |
| **Modelo**       |       Cloud        |
|  **Quantidade**  |         1          |
|  **RAM**         |        8GB         |
|   **HD**         |        1 TB        |

---
