int final_grade(int exam, int projects){
  if (exam > 90 or projects > 10){ return 100; }
  else if (exam > 75 and projects >= 5){ return 90; }
  else if (exam > 50 and projects >= 2){ return 75; }
  else{ return 0; }
