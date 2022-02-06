std::vector<int> reverseSeq(int n) {
  std::vector<int> res; 
  for (int i = n; i >= 1; i--)
    res.push_back(i);
    
  return res;
}