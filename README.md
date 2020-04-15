# Parametry projektu
Nazwa:  pm-lab-1  
Autor:  Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis:   Projekt bazowy repozytorium na pierwsze spotkanie laboratoryjne z przedmiotu *Programowanie mikrokontrolerów*.  
Wersja: v11.0  
Data:   22.03.2020 r.  

# Informacje o studencie
Imię i nazwisko studenta:   Micha Kłosiewicz  
Numer albumu:               69095
Grupa studencka:            WELE18EQ5S1  

# Pytania do zadań z instrukcji
## Zadanie 2-2-1a:
Pytanie:    *Jaki jest efekt działania programu?*  
Odpowiedź:  Efektem działania programu jest ciągłe świecenie się diody. Jest to spowodowowane tym, że nie użyliśmy funkcji delay(), która odpowiada za opóźnienie. Przez to dioda nie zdąży zgasnąć, a musi znowu przejść do stanu wysokiego.

## Zadanie 2-2-2:
Pytanie:    *Czy zamienienie kolejności podłączenia diody LED i rezystora ma znaczenie?*  
Odpowiedź:  Nie, zamienienie kolejności diody LED i rezystora nie ma znaczenia.

## Zadanie 2-2-3:
Pytanie:    *Czy każdy rodzaj pętli jest wymienny (zawsze można zastąpić jedną konstrukcję drugą)?*  
Odpowiedź:  Tak, każdy rodzaj pętli jestwymienny.

## Zadanie 2-2-4:
Pytanie:    *Jak wpływa na działanie układu zwiększenie wartości stałej LED_T (np. do 100 ms)?*  
Odpowiedź:  Nie ma takiego zadania.

## Zadanie 2-3-1:
Pytanie:    *Jakie niedogodności z punktu widzenia kierowców są obecne w programie sterującym światłami?*  
Odpowiedź:  Niedogodności z punktu widzenia kierowców są takie, że w momencie gdy zapala się czerwonego światła, ale żółte nadal świeci, w tym samym momencie zapala się światło zielone dla pieszych.

## Zadanie 2-3-2:
Pytanie:    *Czy możliwe jest sterowanie stanem niskim (LOW) diod LED?*  
Odpowiedź:  Tak, jest możliwe. Gdy sterujemy diodami stanem wysoki, to diody są w stanie niskim i przechodzą do wysokiego. Podczas sterowania stanem niskim sytuacja jest odwrotna i diody są w stanie wysokim i po kolei przechodzą do stanu niskiego.

# Zadania rozszerzajace
## Zadanie 3-1:
Pytanie:    *Określić wady i zalety operowania na rejestrach mikrokontrolera.*  
Odpowiedź:  Zaleta operowania na rejestrach mikrokontrolera: operacje na rejestrach wykonują się szybciej, służą do konfiguracji i sterowania urządzeniami peryferyjnymi, zawierają aktualny stan urządzenia.

## Zadanie 3-2:
Pytanie:    *Jaka jest treść nadawnaego tekstu? Proszę zapisać postać jawną i zakodowaną.*  
Odpowiedź:  ...

## Zadanie 3-3:
Pytanie:    *Kiedy programowe generowanie sygnału PWM ma zastosowanie i jakie pociąga to za sobą konsekwencje.*  
Odpowiedź:  ...


