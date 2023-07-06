# Sistemi-Embedded

<h2>MacchinIno</h2>

Autore: Marco Colangelo

Descrizione del progetto: il progetto MacchinIno consiste nella costruzione di una macchina comandata tramite Bluetooth da un'app per telefono Android compatibile col modulo BT usato, ossia l' HC-06. MacchiIno ha due modalità di funzionamento:
    -Modalità 1: Guida libera. è la modalità di default non appena si accende la macchina: tramite questa modalità, si può comandare la macchina tramite il pad dell'applicazione sul telefono, scegliendo la direzione e con anche la possibilità di regolare la velocità. Nel caso in cui il sensore ad ultrasuoni rilevi un ostacolo davanti alla macchina (non dietro perchè il sensore è installato solo davanti), la macchina si ferma in automatico e sarà poi l'utente a decidere come muoverla.
    Modalità 2: autopilot. In questa modalità, la macchina si muove da sola nell'ambiente circostante e, tramite il suo sensore ad ultrasuoni, è in grado di rilevare eventuali ostacoli. Nel caso ne rilevi uno, si ferma e fa una scansione dell'ambiente circostante sempre tramite il sensore ad ultrasuoni, prendendo poi una strada alternativa priva di ostacoli ruotando a destra o sinistra. 

</h2>HW e altro materiale</h2>
    - Scheda: Arduino Uno Rev3
    - 4 motori elettrici DC 
    - 4 ruote per i motori 
    - Modulo BT HC-06
    - 2 batterie 18650 Sony VTC5-A
    - Sensore ultasonico HC-SR04
    - Servomotore 
    - Chassis prefatto a due strati
    - Porta batterie
    - Cablaggi vari
    - Un po' di scotch
    - Un lego mosso dal servomotore sul quale è stato   montato il sensore ultasonico 

<h2>Librerie aggiuntive</h2>
    - Servo
    - AFMotor
    - NewPing
    - SWSerial

<h2>Eventuali limiti del progetto</h2>
Come già detto nella descrizione, c'è solo un sensore ultrasonico posto davanti alla macchina, per cui la macchina è in grado di rilevare solo eventuali ostacoli davanti ad essa ma non lateralmente o dietro. Inoltre, non avendo un comando di sterzo vero e proprio che gira le ruote come in una macchina vera, le svolte a destra e sinistra non sono propriamente "naturali" ma sono state realizzate muovendo avanti o indietro determinate ruote nello stesso momento. 

<h2>Licenza usata</h2>
GPLv3