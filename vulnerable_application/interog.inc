<? 
     function InterogareSQL($interogare, &$rezultat) 
     { 
       $conexiune= pg_connect("dbname=test user=public_larg password=oricare"); 
       if($conexiune==FALSE) { 
          echo "Conexiune esuata a utilizatorului public_larg la baza de date nume_bd"; 
          return 0; 
       } 
       $rezultat= pg_query($conexiune,  $interogare); 
       $n= $rezultat!="" ? pg_numrows($rezultat): 0; 
       pg_close($conexiune); 
       return $n; 
     } 
     function CitesteLinie($rez, $i) 
     { 
       return pg_fetch_array($rez, $i);     // linia intoarsa..ca un vector
     } 
  ?>