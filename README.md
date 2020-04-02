# Parametry projektu
Nazwa:  pm-lab-1  
Autor:  Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis:   Projekt bazowy repozytorium na pierwsze spotkanie laboratoryjne z przedmiotu *Programowanie mikrokontrolerów*.  
Wersja: v1.0  
Data:   22.03.2020 r.  

# Informacje o studencie
Imię i nazwisko studenta:   Mateusz Klekota 
Numer albumu:               69094
Grupa studencka:            WELE18EQ5S1

# Pytania do zadań z instrukcji
## Zadanie 2-2-1a:
Pytanie:    *Jaki jest efekt działania programu?*  
Odpowiedź:  Dioda L według programu powinna migać, lecz nie ma ustawionego czasu opóźnienia w kodzie programu przez co dioda L świeci się małym światłem, co możemy interpretować jako ciągłe włączanie się i wyłączanie diody. Czas zmiany stanu diody jest tak iski że nie jest zauważalny przez ludzkie oko.

## Zadanie 2-2-2:
Pytanie:    *Czy zamienienie kolejności podłączenia diody LED i rezystora ma znaczenie?*  
Odpowiedź:  Zamiana kolejności podłaczenia rezystora i diody LED nie ma znaczenia, dioda nadal się świeci. Wynika to z tego iż napięcie obwodu elektrycznego który utworzyliśmy pozostaje niezmienne. 

## Zadanie 2-2-3:
Pytanie:    *Czy każdy rodzaj pętli jest wymienny (zawsze można zastąpić jedną konstrukcję drugą)?*  
Odpowiedź:  Nie możemy zamienić. Pętla for posiada inną konstrukcję niż pętla while i sposób działania obu pętli jest inny. Pętla for zawiera inicjalizacje i iteracje zmiennych w deklaracji funkcji, pętla while tego nie posiada. Pętla for jest wykorzystywana gdy znamy konkretnie ile powtórzeń chcemy uzyskać, natomiast pętlę while stosujemy w przypadkach gdy nie znamy do końca liczby powtórzeń. Stosując natomiast pętlę do while nawet przy niespełnionych warunkach pętla zostanie wykonana przynajmniej raz.

## Zadanie 2-2-4:
Pytanie:    *Jak wpływa na działanie układu zwiększenie wartości stałej LED_T (np. do 100 ms)?*  
Odpowiedź:  Jeżeli chodzi o zmienną M_KROPKA_T wtedy pozostałe wartości zmiennych ulegną zmianie i przerwy między stanami będą inne.

## Zadanie 2-3-1:
Pytanie:    *Jakie niedogodności z punktu widzenia kierowców są obecne w programie sterującym światłami?*  
Odpowiedź:  Po wciśnięciu przycisku dla pieszych od razu mamy zmianę stanu świateł kierowców bez opóźnień i mamy przejście do stanu YELLOW a nie stanu YELLOW_RED, przez co czas reakcji kierowców jest bardzo mały.

## Zadanie 2-3-2:
Pytanie:    *Czy możliwe jest sterowanie stanem niskim (LOW) diod LED?*  
Odpowiedź:  Jest możliwe, róznica będzie polegała na tym że w układzie diody będą się świecić i po kolei jedna po drugiej będą się gasić.

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


