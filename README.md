# Proiect-Sincretic:  -Turnurile din Hanoi-
                
    1.DESCRIERE
  Turnurile din Hanoi sau Turnul din Hanoi este un joc matematic inventat de Edouard Lucas în anul 1883. Acest puzzle este format din 3 tije şi
  un număr variabil de discuri ordonate descrescător (în funcţie de mărimea lor) pe una din tije. Scopul jocului este de a muta acest turnuleţ pe altă tijă
  într-un număr cât mai mic de mişcări, mutând doar câte un disc şi fără a fi suprapus un disc mare pe un disc mai mic decât el. Se spune că acest joc 
  a fost inspirat de legenda Turnului lui Brahma aflat într-un templu al oraşului indian Benares.
  
  
    2.REZOLVARE
Funcția "hanoi" ia ca parametrii: N (numărul curent de discuri), a (tija initiala) , c (tija finala) si b (tija auxiliara). Apoi, in main se apeleaza funcția pentru N – al 1-lea disc. La fiecare pas se afiseaza discul curent , a și c. Se apeleaza din nou functia recursiv pana cand n devine 0 si se iese din bucla.

Se urmaresc urmatorii pasi:


Se muta discul „N-1” de la „A” la „B”, folosind C .

Se muta ultimul disc de la „A” la „C”.

Se muta discul „N-1” de la „B” la „C”, folosind A.

Mediul de dezvoltare ales este Microsoft Visual Studio(2022)

    3.EXEMPLE DE RULARE
   ![image](https://user-images.githubusercontent.com/93073180/207096654-d5531140-9937-4874-b186-17a7943bc32f.png)

![image](https://user-images.githubusercontent.com/93073180/207096496-1f541690-19ca-4844-a9bf-60ca990676c8.png)

![image](https://user-images.githubusercontent.com/93073180/207096796-e65fecfc-af65-4312-b609-a77803d621f5.png)


