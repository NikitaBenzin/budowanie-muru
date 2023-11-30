#include <iostream>

int main()
{
    int xSciany, ySciany, xCegly, yCegly;
    int iloscCegiel, iloscPoziomow = 0;
    
    int xZaprawa = 0, yZaprawa = 0;

    std::cout << "\nOto sciana z cegiel\n\n";

    std::cout << "Podaj  wielkosc x sciany: "; std::cin >> xSciany;
    std::cout << "\nPodaj  wielkosc y sciany: "; std::cin >> ySciany;

    std::cout << "\nPodaj wymiar x cegly: "; std::cin >> xCegly;
    std::cout << "\nPodaj wymiar y cegly: "; std::cin >> yCegly;
    

    for (int i = 0; i < 2; i++) {
        iloscCegiel = xSciany / xCegly;
        if (xSciany % xCegly > 0) iloscCegiel++;

        if (ySciany / yCegly > 0) {
            iloscPoziomow = ySciany / yCegly;
            if (ySciany % yCegly > 0) iloscPoziomow++;
        }

        if (i < 1) {
            if (iloscCegiel / 2 > 0) xZaprawa = iloscCegiel / 2 + 1;
            if (iloscPoziomow / 2 > 0) yZaprawa = iloscPoziomow / 2 + 1;

            xSciany -= xZaprawa;
            ySciany -= yZaprawa;
        }
    }

    iloscCegiel = iloscPoziomow * iloscCegiel;

    std::cout << "\nIlosc crgiel do zamuwienia to: " << iloscCegiel;
    std::cout << "\nZprawa x: " << xZaprawa << "\nZprawa y: " << yZaprawa;;

    return 0;
}

