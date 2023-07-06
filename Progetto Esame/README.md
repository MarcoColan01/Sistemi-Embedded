# Sistemi-Embedded

<h2>MacchinIno</h2>

Autore: Marco Colangelo

Descrizione del progetto: il progetto MacchinIno consiste nella costruzione di una macchina comandata tramite Bluetooth da un'app per telefono Android compatibile col modulo BT usato, ossia l' HC-06. MacchiIno ha due modalità di funzionamento:
<li>Modalità 1: Guida libera. è la modalità di default non appena si accende la macchina: tramite questa modalità, si può comandare la macchina tramite il pad dell'applicazione sul telefono, scegliendo la direzione e con anche la possibilità di regolare la velocità. Nel caso in cui il sensore ad ultrasuoni rilevi un ostacolo davanti alla macchina (non dietro perchè il sensore è installato solo davanti), la macchina si ferma in automatico e sarà poi l'utente a decidere come muoverla.</li>
<li> Modalità 2: autopilot. In questa modalità, la macchina si muove da sola nell'ambiente circostante e, tramite il suo sensore ad ultrasuoni, è in grado di rilevare eventuali ostacoli. Nel caso ne rilevi uno, si ferma e fa una scansione dell'ambiente circostante sempre tramite il sensore ad ultrasuoni, prendendo poi una strada alternativa priva di ostacoli ruotando a destra o sinistra. </li>

<h2>HW e altro materiale</h2>
    <li>Scheda: Arduino Uno Rev3</li>
    <li>4 motori elettrici DC </li>
    <li>4 ruote per i motori</li>
    <li>Modulo BT HC-06</li>
    <li>2 batterie 18650 Sony VTC5-A</li>
    <li>Sensore ultasonico HC-SR04</li>
    <li>Servomotore</li>
    <li>Chassis prefatto a due strati</li>
    <li>Porta batterie</li>
    <li>Cablaggi vari</li>
    <li>Un po' di scotch</li>
    <li>Un lego mosso dal servomotore sul quale è stato   montato il sensore ultasonico </li>
    

<h2>Librerie aggiuntive</h2>
    <li>Servo</li>
    <li>AFMotor</li>
    <li>NewPing</li>
    <li>SWSerial</li>

<h2>Eventuali limiti del progetto</h2>
Come già detto nella descrizione, c'è solo un sensore ultrasonico posto davanti alla macchina, per cui la macchina è in grado di rilevare solo eventuali ostacoli davanti ad essa ma non lateralmente o dietro. Inoltre, non avendo un comando di sterzo vero e proprio che gira le ruote come in una macchina vera, le svolte a destra e sinistra non sono propriamente "naturali" ma sono state realizzate muovendo avanti o indietro determinate ruote nello stesso momento. 

<h2>Licenza usata</h2>
GPLv3