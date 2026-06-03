# Global Solution 1 - Computer Organization and Architecture

## 🚀 Sistema IoT para Monitoramento de Cápsula Espacial

## 👨‍💻 Integrantes - 1CCPZ 

Giovane Salazar RM: 570396
Leonardo Takachi RM: 569066

---

## 📖 Descrição

Sistema IoT desenvolvido para monitorar as condições internas de uma cápsula espacial simulada, realizando a coleta, processamento e exibição em tempo real de dados de temperatura, luminosidade e vibração.

O projeto foi desenvolvido utilizando Arduino e sensores simulados na plataforma Tinkercad, aplicando conceitos de sistemas embarcados, Internet das Coisas (IoT) e monitoramento de missões espaciais.

---

## 🎯 Objetivo

Desenvolver uma solução embarcada capaz de monitorar variáveis físicas essenciais para a operação segura de uma cápsula espacial, fornecendo informações em tempo real e alertas automáticos sempre que condições críticas forem detectadas.

---

## 🛰️ Funcionalidades

* Monitoramento de temperatura interna da cápsula;
* Monitoramento dos níveis de luminosidade;
* Detecção de vibrações e movimentações anormais;
* Exibição dos dados em um display LCD 16x2;
* Sistema de alertas para condições críticas;
* Telemetria via porta serial;
* Atualização contínua das informações em tempo real.

---

## 🔧 Componentes Utilizados

* Arduino Uno	(Processamento e controle do sistema)
* Sensor TMP36	(Medição de temperatura)
* LDR (Fotoresistor)	(Medição da luminosidade)
* Sensor de Inclinação	(Simulação de vibração e impactos)
* Display LCD 16x2	(Exibição das informações)
* Resistores	(Estabilização e proteção do circuito)
* Protoboard	(Montagem do circuito)

---

## 🚨 Regras de Alerta

### Temperatura
* Temperatura máxima: 35°C
* Temperatura mínima: 10°C

### Luminosidade
* Limite superior: 900
* Limite inferior: 50

### Vibração
* Limite máximo: 600

Sempre que algum desses limites for ultrapassado, o sistema exibe uma mensagem de alerta no display.

---

## 📟 Exemplo de Exibição

* Condição normal:

T:24.5C       L:720 (STATUS NORMAL)

* Alerta de temperatura:

T:38.2C       L:720 (ALERTA TEMP)

* Alerta de luminosidade:

T:24.5C       L:980 (ALERTA LUZ)

* Alerta de vibração:

T:24.5C       L:720 (ALERTA VIB)

---

## 📡 Telemetria

Exemplo de dados enviados pela porta serial:

{
  "temperatura": 24.5,
  "luminosidade": 720,
  "vibracao": 120,
  "status": "NORMAL"
}

---

## 🔮 Melhorias Futuras

* Integração com plataformas de monitoramento em nuvem;
* Inclusão de novos sensores ambientais;
* Notificações automáticas para situações críticas;
* Integração com APIs espaciais para análise complementar de dados;
* Dashboard web para acompanhamento remoto.

---

## 🎬 Demonstração

* Vídeo de demonstração: 
* Tinkercad: https://www.tinkercad.com/things/7ZFRy8DdL9W-gs1-coa?sharecode=y7Vmh79_HbAH4lQos4IX05UtdaOs5A_WoOCo5vi4a3E 
