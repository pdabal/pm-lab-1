# Parametry projektu
Nazwa:  pm-lab-1  
Autor:  Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis:   Projekt bazowy repozytorium na pierwsze spotkanie laboratoryjne z przedmiotu *Programowanie mikrokontrolerów*.  
Wersja: v1.0  
Data:   22.03.2020 r.  

# Informacje o studencie
Imię i nazwisko studenta:   Pawel Slapczynski
Numer albumu:               72022 
Grupa studencka:            WEL18EQ5S1  

# Pytania do zadań z instrukcji
## Zadanie 2-2-1a:
Pytanie:    *Jaki jest efekt działania programu?*  
Odpowiedź:  dioda świeci ciągłym światłem, lecz nie z jej maksymalnym natężeniem. Spowodowane jest to tym, iż odstępy między zapalaniem i gaśnięciem są niedostrzegalne dla ludzkiego oka. 

## Zadanie 2-2-2:
Pytanie:    *Czy zamienienie kolejności podłączenia diody LED i rezystora ma znaczenie?*  
Odpowiedź:  Nie nie ma. mamy w tym wypadku pełną dowolność podłączeniu kolejnosci

## Zadanie 2-2-3:
Pytanie:    *Czy każdy rodzaj pętli jest wymienny (zawsze można zastąpić jedną konstrukcję drugą)?*  
Odpowiedź:  W badanym przypadku pętę są wymiene, istnieją natomiast przypadki w których wskazane jest użycie konkretnego typu pętli np. while==digitalRead(8, LOW)(użycie for było możliwe ale problematyczne, wymagało by użycia dodatkowych intrukcji warunkowych). 

## Zadanie 2-2-4:
Pytanie:    *Jak wpływa na działanie układu zwiększenie wartości stałej LED_T (np. do 100 ms)?*  
Odpowiedź:  nie ma takiego zadania w instukcji 

## Zadanie 2-3-1:
Pytanie:    *Jakie niedogodności z punktu widzenia kierowców są obecne w programie sterującym światłami?*  
Odpowiedź:  Po wciśnięciu przysciku konfiguracja światweł zmienia sie natychmiatowo co wymusza na kierowcach szybką reakcje. Poza tym światło zielone dla pieszych i czerwone dla kierowców zmienia sie w tym samym momencie co może doprowdzić do niebezpieczeństwa.(w prawdziwej sygnalizacji jest pewien odstęp czasu między tymi światłami)

## Zadanie 2-3-2:
Pytanie:    *Czy możliwe jest sterowanie stanem niskim (LOW) diod LED?*  
Odpowiedź:  Jest to możliwe poprzez podpięcia anody diody do stałego zasilania 5v a katody (przez rezystor) do wyjścia IO. Poprzez ustawienie stanu niskiego na na wyjściu umożliwimy przepływ ładunku z zasilania do masy przez pin IO.

# Zadania rozszerzajace
## Zadanie 3-1:
Pytanie:    *Określić wady i zalety operowania na rejestrach mikrokontrolera.*  
Odpowiedź:  ...

## Zadanie 3-2:
Pytanie:    *Jaka jest treść nadawnaego tekstu? Proszę zapisać postać jawną i zakodowaną.*  
Odpowiedź:  ...

## Zadanie 3-3:
Pytanie:    *Kiedy programowe generowanie sygnału PWM ma zastosowanie i jakie pociąga to za sobą konsekwencje.*  
Odpowiedź:  ...


