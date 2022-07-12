# auguri_con_arduino
Come fare auguri di compleanno con Arduino

codice https://github.com/SimoneMoreWare/auguri_con_arduino/blob/main/auguri.ino

Come si è ben capito Arduino offre la possibilità di creare una moltitudine di progetti ideati per qualsiasi scopo, anche per il compleanno di una persona a te cara.

In questo articolo si vedrà in che modo realizzare degli auguri di buon compleanno a tema Arduino, un gesto che potrebbe piacere al tuo amico maker.

Tramite un buzzer passivo sarà possibile eseguire la famigerata canzoncina “Happy birthday to you”, il tutto accompagnato dall’accessione e spegnimento casuale di tre LED. In aggiunta vi sarà un display sul quale sarà possibile scrivere una piccola dedica al proprio caro che compie gli anni.

Per realizzare tale progetto basta utilizzare i seguenti componenti:

1x Board di Arduino Uno
1x Display LCD
1x buzzer passivo
1x led rosso
1x led bianco
1x led verde
1x potenziometro da 10k
Vari jumper
1x Breadboard
Il diagramma di collegamento è il seguente:
![ alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2020/05/Untitled-Sketch-2_bb.png?resize=768%2C606&ssl=1)

La funzione tone() permette di generare il suono tramite il cicalino passivo. Vi sono tre parametri formali, il primo parametro costituisce il pin in cui è collegato il cicalino, il secondo parametro è costituito dal vettore note (lo spartito) e dalle relative frequenze, il terzo parametro è costituito dal periodo durante il quale verrà prodotto ciascun suono. Inoltre è stato utilizzata una funzione random per l’accensione e spegnimento dei LED per rendere il progetto più coinvolgente per il festeggiato.
