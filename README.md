# Proiect-Sincretic:  -Turnurile din Hanoi-
                
    1.DESCRIERE
  Turnurile din Hanoi sau Turnul din Hanoi este un joc matematic inventat de Edouard Lucas în anul 1883. Acest puzzle este format din 3 tije şi
  un număr variabil de discuri ordonate descrescător (în funcţie de mărimea lor) pe una din tije. Scopul jocului este de a muta acest turnuleţ pe altă tijă
  într-un număr cât mai mic de mişcări, mutând doar câte un disc şi fără a fi suprapus un disc mare pe un disc mai mic decât el. Se spune că acest joc 
  a fost inspirat de legenda Turnului lui Brahma aflat într-un templu al oraşului indian Benares.
  
  
    2.REZOLVARE
Se muta discul „N-1” de la „A” la „B”, folosind C.
Se muta ultimul disc de la „A” la „C”.

Se muta discul „N-1” de la „B” la „C”, folosind A.

-Pașii pentru a rezolva problema:

Se creaza o funcție turnurileHanoi ce ia ca parametrii N (numărul curent de discuri), tija_init, tija_finala, tija_aux. Se apeleaza funcția pentru N – al 1-lea disc. Se afiseaza discul curent , tija_init și tija_finala Se apeleaza din nou functia pentru N – al 1-lea disc.


