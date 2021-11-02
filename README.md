# SmartRoom
## Sobre este repositório

Repositório destinado a disciplina Sistemas Embarcados, ministrado pelo **Prof. Vandermi Joao da Silva**.
Projeto e implementação de um sistema embarcado.
- Documentação SmartRoom atualizada;
- Protótipo do SmartRoom no thinkercad.

### Discentes

- Adriano Gomes, 21751229;
- Rafael Guedes, 21542175;
- Taynara Silva, 21751227

## Histórico de Versões
| Versão  |  Data  | Autor  |  Descrição  |
| ------------------- | ------------------- | ------------------- | ------------------- |
|  1.0 |  24/08/2021 | @GomesAdriano, @RafaelGuedes e @taynara-yt |  Definição do escopo e tópicos que o compõem, definição dos requisitos funcionais e regras de negócio, criação da arquitetura, diagrama de blocos da aplicação, tecnologias e materiais. |
|  1.1 |  25/09/2021 | @GomesAdriano, @RafaelGuedes e @taynara-yt |  Atualização de RNs e dos materiais utilizados pelo projeto.|
| 1.2  |  26/10/2021 |@GomesAdriano, @RafaelGuedes e @taynara-yt | Revisão da arquitetura e do diagrama de blocos. |


## Sumário
1.  **Escopo**
- 1.1. Descrição do Problema
- 1.2. Objetivos do Projeto
- 1.3. Abreviações
- 1.4. Descrição Geral do Sistema
2.  **Requisitos Gerais do Sistema**
- 2.1.Prioridades dos Requisitos
- 2.2. Requisitos Funcionais
- 2.3. Regras de Negócio
3. **Arquitetura**
4. **Diagrama de Blocos da Aplicação**
5. **Tecnologias**
6. **Materiais**


### 1.  Escopo

**1.1  Descrição do Problema**  
A crise sanitária mundial que se iniciou no ano de 2020, motivou diversas medidas para impedir a transmissão da Covid-19, e umas das restrições obrigatórias ocasionou um grande efeito no consumo de energia elétrica: o isolamento.
A população precisou se adaptar com a nova rotina e a maioria das atividades passaram a ser realizadas em ambiente domiciliar e com consequência dessa permanência, o aumento do consumo de energia elétrica causou um impacto significativo nesse período.
Além disso, o verão também tem sido um grande colaborador com o crescimento do consumo dos eletrodomésticos, como ar condicionado, umidificador de ar, ventiladores e entre outros.
Com o aumento das tarifas de energia elétrica, tem-se observado a necessidade da adoção de alternativas práticas e acessíveis que colaborem com o consumo consciente, que beneficiem tanto o meio ambiente como também proporcionar economia financeira.

**1.2  Objetivos do Projeto**  
Desenvolver um sistema automatizado que realizará o controle e verificação do estado de dois dispositivos presentes em um cômodo (quarto) de uma residência, sendo eles um ventilador e uma lâmpada.
Tendo como finalidade aliar-se com conceitos ecologicamente sustentáveis, visto que o propósito do projeto é focar na economia de energia elétrica, reduzindo o consumo e desperdício, além de garantir acessibilidade e segurança a idosos e pessoas com deficiência.


**1.3  Abreviações**  
|Sigla| Descrição| 
|--------|--------|
|  RF    |  Requisito Funcional | 
|  RNF   |  Requisito Não-Funcional |  
|  RN    |   Regra de Negócio | 

**1.4  Descrição Geral do Sistema**  
O sistema SmartRoom entregará dois dispositivos sendo eles o SmartFan e a SmartLed. O SmartFan e a SmartLed tratam-se respectivamente de um ventilador inteligente e de uma lâmpada LED inteligente, inicialmente substituídos por um cooler e por um mini LED para fins de manuseio fácil no seu desenvolvimento. O ventilador deverá controlar a velocidade e sentido em que o ar circula no ambiente, possibilitando que o usuário ligue ou desligue o aparelho à distância, dentro ou fora da residência. Já a lâmpada irá promover uma praticidade ao usuário quando este desejar ligar ou desligá-las, permitindo o controle da iluminação da residência. O ventilador será controlado por um sensor de movimento e a lâmpada será controlada por um sensor de luminosidade.

### 2. Requisitos Gerais do Sistema
**2.1.Prioridades dos Requisitos**
Para estabelecer a prioridade dos requisitos foram adotadas as denominações “essencial”, “importante” e “desejável”. 
- **Essencial** é o requisito sem o qual o sistema não entra em funcionamento. Requisitos essenciais são requisitos imprescindíveis, que têm que ser implementados impreterivelmente.
- **Importante** é o requisito sem o qual o sistema entra em funcionamento, mas de forma não satisfatória. Requisitos importantes devem ser implementados, mas, se não forem, o sistema poderá ser implantado e usado mesmo assim.
- **Desejável** é o requisito que não compromete as funcionalidades básicas do sistema, isto é, o sistema pode funcionar de forma satisfatória sem ele. Requisitos desejáveis são requisitos que podem ser deixados para versões posteriores do sistema, caso não haja tempo hábil para implementá-los na versão que está sendo especificada.

**2.2 Requisitos Funcionais**

|ID |Nome| Descrição| Prioridade|
|--------|--------|--------|--------|
|  RF01  |  Ativar ventilador (Movimento) | Esta funcionalidade deverá permitir que o sistema ligue o ventilador com a presença de uma pessoa. | Essencial |
|  RF02  |Desativar ventilador (Movimento) |  Esta funcionalidade deverá permitir que o sistema desligue o ventilador sem a presença de uma pessoa. |Essencial |
|  RF03  |  Ativar ventilador (Temperatura) |  Esta funcionalidade deverá ser capaz de permitir que o sistema ative o ventilador caso o ambiente chegue a uma certa temperatura (RN03).   |Essencial |
|  RF04  | Desativar ventilador (Temperatura)   |  Esta funcionalidade deverá ser capaz de permitir que o sistema desligue o ventilador caso o ambiente chegue a uma certa temperatura (RN04).    |Essencial |
|  RF05  | Controle da Lâmpada (Movimento)   |  Esta funcionalidade deverá ser capaz de permitir que a lâmpada seja ligada ou desligada conforme detecção do sensor de presença (PIR). |Essencial |

**2.3. Regras de Negócio**

|ID | Descrição| Prioridade|
|--------|--------|--------|
|  RN01  |  A lâmpada ficará desligada enquanto estiver claro. | Importante |
|  RN02  | O ventilador deve ser ativado caso a temperatura detectada pelo sensor TMP36 seja acima de 25°. |Importante |
|  RN03  |  O ventilador deve ser desativado caso a temperatura detectada pelo sensor TMP36 seja abaixo de 19° ou após dois minutos sem detectar presença.   |Essencial |
|  RN04  | O ventilador pode ser ativado pelo sensor PIR a qualquer momento, mas só será desativado caso o ambiente atinja temperatura 19°, ou após 2 minutos.    |Importante |
|  RN05  | A lâmpada deve ser ativada pelo sensor PIR, somente se o sensor LDR detectar que está escuro. |Essencial |

### 3. **Arquitetura**

(IMAGEM)

### 4. **Diagrama de Blocos da Aplicação**
(IMAGEM)

### 5. **Tecnologias**
Tecnologias que serão utilizadas para o desenvolvimento do projeto
- Placas e Sensores Arduino;
- TinkerCad.

### 6. **Materiais**
Lista de materiais que serão usados para a construção do sistema SmartRoom:
- 1 Arduino Uno;
- 1 Sensor PIR;
- 1 Sensor LDR;
- 1 Sensor TMP36;
- Motor CC (Representação do ventilador);
- Led (Representação da lâmpada).






