# Especificações do Sistema
> Descrição das especificações de componentes do Sistema.



**Módulos**

1. [Sensor de Distância.](#1-sensor-de-distância)
2. [Reed Switch](#2-sensor-pluviométrico)
3. [Sensor de Umidade e Temperatura.](#3-sensor-de-umidade-e-temperatura)
4. [Gateway](#4-gateway)
5. [Servidor](#5-servidor)
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


### 4. Gateway

|            Raspberry              |                                                                              |
| :-------------------------------: | :--------------------------------------------------------------------------: |
|            **Modelo**             |                                 Pi 3 model B                                 |
|          **Quantidade**           |                                     1                                        |
|             **RAM**               |                                    1 GHz                                     |
|          **Dimenssão**            |                              85mm x 56mm x 17mm                              |
|           **Material**            |              Metais / Placa de Fenolite / Componentes Eletrônicos            |
|         **Processador**           |           Broadcom BCM2837, Quad Core 64-bit ARMv8 Cortex-A53 1.2GHz         |
|      **Outras Informações**       |   [Raspberry-pi](https://www.filipeflop.com/produto/raspberry-pi-3-model-b/) |

---

### 5. Servidor

|  Servidor        |                    |
| :--------------: | :----------------: |
| **Modelo**       |       Cloud        |
|  **Quantidade**  |         1          |
|  **RAM**         |        8GB         |
|   **HD**         |        1 TB        |

---
