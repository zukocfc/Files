#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>

using namespace std;

struct Wizytowka{
  string imie;
  string nazwisko;
  string rokurodzenia;
  string stanowisko;
  string datawaznosci;
  string nazwafirmy;
};

int main(){
  setlocale(LC_CTYPE, "POLISH");
  string format;
  Wizytowka wizytowka;
  std::cout << "Wybierz format pliku: " << endl << endl << "[1] Latex" << endl << "[2] PS" << endl << "[3] HTML" << endl << endl << "Wybra³eœ opcjê nr: ";
  std::cin >> format;
  std::cout << endl;
  if(format=="1"){
    ofstream plik1;
    plik1.open("latex.tex");
    cin.ignore();
    cout << "Podaj imiê: ";
    getline(cin, wizytowka.imie);
    cout << "Podaj nazwisko: ";
    getline(cin, wizytowka.nazwisko);
    cout << "Podaj rok urodzenia: ";
    getline(cin, wizytowka.rokurodzenia);
    cout << "Podaj stanowisko: ";
    getline(cin, wizytowka.stanowisko);
    cout << "Podaj datê wa¿noœci: ";
    getline(cin, wizytowka.datawaznosci);
    cout << "Podaj nazwê firmy: ";
    getline(cin, wizytowka.nazwafirmy);
    plik1 << "\\title{Wizytówka (tryb Latex)}" << endl << "\\documentclass[10pt]{article}" << endl << "\\usepackage{polski}" << endl << "\\usepackage[utf8]{inputenc}" << endl << "\\usepackage{graphicx} " << endl << "\\begin{document}" << endl << "\\begin{figure}" << endl << "\\includegraphics{zdjecie.jpg}" << endl << "\\end{figure}" << endl << "\\begin{tabular}{|p{6cm}|} \\hline" << endl << "\\paragraph{Imiê:}" << endl << wizytowka.imie << endl << "\\paragraph{Nazwisko:}" << endl << wizytowka.nazwisko << endl << "\\paragraph{Rok urodzenia:}" << endl << wizytowka.rokurodzenia << endl << "\\paragraph{Stanowisko:}" << endl << wizytowka.stanowisko << endl << "\\paragraph{Data wa¿noœci:}" << endl << wizytowka.datawaznosci << endl << "\\paragraph{Nazwa firmy:}" << endl << wizytowka.nazwafirmy << "\\" << "\\" << " " << "\\hline" << endl << "\\end{tabular}" << endl << "\\end{document}";
    plik1.close();
    cout << endl << "Twoja wizytówka jest gotowa.";;
  }
  else if(format=="2"){
    cout << "Opcja niedostêpna.";
  }
  else if(format=="3"){
    ofstream plik3;
    plik3.open("html.html");
    cin.ignore();
    cout << "Podaj imiê: ";
    getline(cin, wizytowka.imie);
    cout << "Podaj nazwisko: ";
    getline(cin, wizytowka.nazwisko);
    cout << "Podaj rok urodzenia: ";
    getline(cin, wizytowka.rokurodzenia);
    cout << "Podaj stanowisko: ";
    getline(cin, wizytowka.stanowisko);
    cout << "Podaj datê wa¿noœci: ";
    getline(cin, wizytowka.datawaznosci);
    cout << "Podaj nazwê firmy: ";
    getline(cin, wizytowka.nazwafirmy);
    plik3 << "<!DOCTYPE html PUBLIC -//W3C//DTD XHTML 1.1//EN http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd>" << endl << "<html xmlns=http://www.w3.org/1999/xhtml xml:lang=pl>" << endl << "<head>" << endl << "<meta http-equiv=Content-type content=text/html; charset=utf-8/><title>Drukarka (tryb HTML)</title>" << endl << "</head>" << endl << "<body>" << endl << "<table style='text-align: left; width: 350px'; border=1 cellpadding=2 cellspacing=2><tbody><tr><td>" << endl << "<img src=zdjecie.jpg align=left><img src=1.jpg align=left>" << endl << "Imi&#281;: <b>" << wizytowka.imie << "</b>" << endl << "<br>" << endl << "Nazwisko: <b>"  << wizytowka.nazwisko << "</b>" << endl << "<br>" << endl << "Rok urodzenia: <b>" << wizytowka.rokurodzenia << "</b>" << endl << "<br>" << endl << "Stanowisko: <b>" << wizytowka.stanowisko << "</b>" << endl << "<br>" << endl << "Data wa&#380;no&#347;ci: <b>" << wizytowka.datawaznosci << "</b>" << endl << "<br>" << endl << "Nazwa firmy: <b>" << wizytowka.nazwafirmy << "</b>" << endl << "</td></tr></tbody></table>" << endl << "</body>" << endl << "</html>";
    plik3.close();
    cout << endl << "Twoja wizytówka jest gotowa.";
}
  else{
    std::cout << "Brak wybranej opcji. Spróbuj jeszcze raz wpisuj¹c 1 lub 2 lub 3.";
  }
  return 0;
}
