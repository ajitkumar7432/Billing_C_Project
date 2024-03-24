#include <stdio.h>
int main()
{
    char name[100];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int coke;
    int sprite;
    int thumbs_up;
    int mojitos;

    int total;
    int cosmetic_total;
    int grocery_total;
    int beverage_total;

    printf("--------------------\n");
    printf("BILLING SYSTEM\n");
    printf("--------------------\n");
    printf("Customer Details : \n");
    printf("Customer name : ");
    scanf("%s", &name);
    printf("Customer Phone Number : ");
    scanf("%d", &phone_number);
    printf("Customer ID : ");
    scanf("%d", &customer_id);

    printf("----------------------\n");
    printf("COSMETICS\n\n");
    printf("Body Soap (RS 10) : ");
    scanf("%d", &body_soap);
    printf("Hair Cream (RS 25) : ");
    scanf("%d", &hair_cream);
    printf("Body Spray (RS 30) : ");
    scanf("%d", &body_spray);
    printf("Hair Spray (RS 50) : ");
    scanf("%d", &hair_spray);

    printf("-----------------------\n");

    printf("GROCERIES\n\n");
    printf("Sugar (RS 100) :");
    scanf("%d", &sugar);
    printf("Tea (RS 15) : ");
    scanf("%d", &tea);
    printf("Coffee (RS 20) :");
    scanf("%d", &coffee);
    printf("Rice (RS 250) :");
    scanf("%d", &rice);
    printf("Wheat (RS 250) :");
    scanf("%d", &wheat);

    printf("----------------------\n");

    printf("BEVERAGES\n\n");
    printf("Pepsi (RS 40) :");
    scanf("%d", &pepsi);
    printf("Coke (RS 45) :");
    scanf("%d", &coke);
    printf("Mojitos (RS 35) :");
    scanf("%d", &mojitos);
    printf("Sprite (RS 45) : ");
    scanf("%d", &sprite);
    printf("Thumbs-Up (RS 45) :");
    scanf("%d", &thumbs_up);

    printf("----------------------\n");

    int bosco;
    int hc;
    int hs;
    int bosp;

    bosco = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 30 * body_spray;
    cosmetic_total = bosco + hc + hs + bosp;

    printf("Body Spray :");
    printf("%d RS\n", bosco);
    printf("Hair Cream :");
    printf("%d RS \n", hc);
    printf("Hair Spray : ");
    printf("%d RS \n", hs);
    printf("Body Spray :");
    printf("%d RS\n", bosp);
    printf("Total Cosmetic Price : ");
    printf("%d RS\n", cosmetic_total);

    printf("-------------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s = 100 * sugar;
    t = 15 * tea;
    c = 20 * coffee;
    r = 250 * rice;
    w = 250 * wheat;
    grocery_total = s + t + c + r + w;

    printf("Sugar :");
    printf("%d RS\n", s);
    printf("Tea :");
    printf("%d RS \n", t);
    printf("Coffee :");
    printf("%d RS\n", c);
    printf("Rice :");
    printf("%d RS\n", r);
    printf("Wheat : ");
    printf("%d RS \n", w);
    printf("Total Grocery Price :");
    printf("%d RS\n", grocery_total);

    printf("-------------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep = 40 * pepsi;
    spr = 45 * sprite;
    cok = 45 * coke;
    moj = 45 * mojitos;
    thu = 45 * thumbs_up;
    beverage_total = pep + spr + cok + moj + thu;

    printf("Pesi :");
    printf("%d RS\n", pep);
    printf("Sprite :");
    printf("%d RS\n", spr);
    printf("Coke :");
    printf("%d RS\n", cok);
    printf("Mojitos :");
    printf("%d RS\n", moj);
    printf("Thumbs_Up :");
    printf("%d RS\n", thu);
    printf("Beverage Total :");
    printf("%d RS\n", beverage_total);

    printf("----------------------------\n");

    total = cosmetic_total + grocery_total + beverage_total;

    printf("Total Amount : ");
    printf("%d RS\n", total);

    printf("------------------------------\n");

    printf("------------------------------\n");

    printf("VRINDA SUPERMARKET\n\n");

    printf("Customer Name : ");
    printf("%s\n", name);
    printf("Customer Phone Number :");
    printf("%d\n", phone_number);
    printf("Customer ID : ");
    printf("%d\n\n", customer_id);

    printf("Product Name                        Quantity                      Price\n\n");
    printf("Hair Cream                             %d                             %d\n",hair_cream,hc);
    printf("Body Spray                             %d                             %d\n", body_spray, bosp);
    printf("Hair Spray                             %d                             %d\n", hair_spray, hs);
    printf("Sugar                                  %d                             %d\n", sugar, s);
    printf("Tea                                    %d                             %d\n", tea, t);
    printf("Body Soap                              %d                             %d\n",body_soap,bosco);
    printf("Coffee                                 %d                             %d\n", coffee, c);
    printf("Rice                                   %d                             %d\n",rice,r );
    printf("Wheat                                  %d                             %d\n",wheat,w );
    printf("Pepsi                                  %d                             %d\n",pepsi, pep);
    printf("Sprite                                 %d                             %d\n",sprite,spr );
    printf("Coke                                   %d                             %d\n",coke,cok );
    printf("Mojitos                                %d                             %d\n",mojitos,moj );
    printf("Thums Up                               %d                             %d\n\n",thumbs_up,thu );
    
    printf("Grocery Total Price : %d\n\n",grocery_total);

    printf("Cosmetic Total Price : %d\n\n",cosmetic_total);

    printf("Beverage Total : %d\n\n",beverage_total );

    printf("Total Price : %d\n\n",total);

    printf("----------------------------------------------------\n");

    return 0;

}
