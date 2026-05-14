class Volumen{
  private:
  int cubo;

  public:

  void calculo(int lado, int ancho, int largo){
    
    cubo=lado*ancho*largo;
  }
  int valor(){
    return(cubo);
  }
};