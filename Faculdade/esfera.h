class Esfera
{
    public:
    double CalculaRaio();
    double CalculaVolume();
    double CalculaArea();
    void AtribuiRaio( double r);
   

    private:
    float PI = 3.1416;
    float Raio;
    float Volume;
    float Area;

};
