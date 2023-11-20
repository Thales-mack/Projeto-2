# Projeto-2

--------------PORTA SERIAL ARDUINO UNO--------------------

No Uno, Nano, Mini, e Mega, pinos 0 e 1 são usados para comunicação com o computador. Conectar qualquer coisa a esses pinos pode interferir nessa comunicação, incluindo causar falhas na gravação da placa.

Você pode usar o monitor serial integrado na IDE do Arduino para comunicar-se com uma placa Arduino. Clique no botão do monitor serial (lupa) na barra de ferramentas e escolha a mesma taxa de tranmissão usada na chamada de begin().

Você pode usar o monitor serial presente na IDE do Arduino para se comunicar com uma placa Arduino. Clique no botão do monitor serial na barra de ferramentas e escolha e usar a mesma taxa de transferência (baud rate) usada na chamada de begin().

Comunicação serial nos pinos TX/RX usa níveis lógicos TTL (5V ou 3.3V dependendo da placa). Não conecte esses pinos diretamente um uma porta serial RS232; esses operam em +/- 12V e podem danificar sua placa Arduino.

Para usar esses pinos para comunicar com seu computador pessoal, você vai precisar de um adaptador USB-serial extra, pois esses pinos não são conectados ao adaptador USB-serial do Arduino Mega. para usá-los para comunicar com um dispositivo serial TTL externo, conecte o pino TX do Arduino ao pino RX do dispositivo, o pino RX ao pino TX do dispositivo, e o ground de seu Mega ao ground do dispositivo.

-------------Protocolo MQTT----------------------------

Desenvolvido na década de 90 pela IBM e Eurotech, o MQTT (Message Queuing Telemetry Transport e tendo tradução para português sob o nome de Transporte de Filas de Mensagem de Telemetria) é um protocolo de mensagens que foi criado com o objetivo de oferecer um baixo consumo de rede, banda e também dos demais recursos de software. O formato utilizado no MQTT é de Cliente/Servidor.

Por esse motivo e também por ter fundamentos na pilha TCP/IP ou em outros protocolos de rede, o MQTT tem extrema utilidade dentro da área de desenvolvimento de projetos de comunicação entre máquinas, também conhecido pelo termo M2M (Machine to Machine). Outra área também onde se torna muito presente é para conectividade de IoT (Internet of Things).

Como explicado acima, o MQTT foi criado para suprir os pontos em que o HTTP deixa a desejar. Dessa forma, além de ser capaz de oferecer uma redução dos requisitos para dispositivos e da largura de banda da rede, esse protocolo oferece maior segurança e confiabilidade.

Por conta desse baixo consumo de dados, é um protocolo muito utilizado no mundo inteiro, como em empresas e indústrias, por exemplo.

Como funciona o Protocolo MQTT
Para funcionar, o Protocolo MQTT utiliza um modelo de Publish/Subscribe onde permite que o cliente faça postagens e/ou capte informações enquanto o servidor irá administrar esse envio e o recebimento dos respectivos dados.

Ou seja, em um MQTT haverá um publicador onde será responsável por publicar as mensagens em um determinado tópico onde um assinante irá inscrever-se neste tópico para poder acessar a mensagem.

Como não há uma conexão direta entre o assinante e o publicador, para que essas mensagens aconteçam, o protocolo MQTT irá precisar de um gerenciador de mensagens chamado de Broker.

Uma breve história do MQTT
Por volta de 1999, os engenheiros Andy Stanford-Clark (da IBM) e Arlen Nipper (Cirrus Link, Eurotech) lançaram a primeira versão do Protocolo MQTT, versão esta que foi destinada ao monitoramento de oleodutos através de satélites. Embora sua publicação tenha sido a tantos anos, a sua liberação gratuita chegou nas mãos do público somente em 2010.

Formas de comunicação
Em um Protocolo MQTT, a publicação e o recebimento de dados são realizados através de um tipo de servidor chamado de Broker. Ou seja, nessa comunicação haverá então um cliente que terá o papel de Publisher (Publicador) e transmitirá a mensagem, com um tópico de destino e o seu Payload (o conteúdo da mensagem).

Essa mensagem em questão será então transmitida ao Broker que por sua vez será o responsável por geri-la e encaminhá-la ao Subscriber que foi previamente inscrito no tópico.

Seguindo essa mesma linha, caso o cliente queira tornar-se um Subscriber em algum tópico, ele deverá apenas encaminhar uma solicitação ao Broker que será capaz de fazer uma ligação entre o cliente e o tópico em questão.

De forma simplificada, essa comunicação pode ser dividida entre os seguintes termos:

Subscriber (Subscrito) – a pessoa que estará inscrita no tópico e irá ter o papel de receptor.
Publisher (Publicador) – a pessoa que estará responsável por ser o emissor e enviar os dados para um determinado tópico.
Broker – será o intermediário para fazer uma ponte de comunicação entre o Publisher e o Subscriber, se tornando responsável por fazer o recebimento, enfileiramento e envio das mensagens.
Tópico –será o endereço pelo qual os dados das mensagens serão enviados.
Client (Cliente) – será o elemento que terá a capacidade de interagir com o Broker, podendo enviar e receber dados.
Mensagem – será o pacote de dados trocados entre os clientes e o Broker.
Unsubscribe – permite deixar de assinar um determinado tópico.
Payload – será o conteúdo da mensagem que será enviada.
