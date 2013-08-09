int mul(int x, int y){
    
  if(x==0 or y==0)
    return 0;
  
  return x + mul(x,--y);


}
