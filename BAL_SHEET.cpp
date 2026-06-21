#include <stdio.h>
#include <conio.h>


long int cash,acc_rec,less_doubt_acc,inventry,temporary_invest,prepaid_expenses,mrkble_secritis;
long int acc_payble,short_trm_notes,current_prton_lng_trm_notes,interest_payble,taxes_payble,accurd_payroll;
long int long_trm_invest,Land,buildings,less_acumulated_depreciation,plant_and_equip,furniture_fixtures,less_acumulated_depreciation1,less_acumulated_depreciation2;
long int mortage,other_liabl2;
long int cap_stk,retn_erng;
long int total_current_assets,cal_lb,lng_trm_lb,fa1,shrhld_eqty;
double quick_ratio,cr_ratio;
double cash_ratio;
long int wrkg_cap;
long int tl_assets,tl_lb_eq,tl_lb,tl1;

/*Current Assets Function Start*/
long int calculation_ca(void);
long int calculation_ca(void)
{


  printf("\t\t\t\tCurrent Assets\n\n");


  printf("\nEnter your cash:");
  scanf("%ld",&cash);

  printf("\nEnter your Markable Securities:");
  scanf("%ld",&mrkble_secritis);


  printf("\nEnter Accounts Recieveable:");
  scanf("%ld",&acc_rec);

  printf("\nEnter Less Dounbtful accounts:");
  scanf("%ld",&less_doubt_acc);


  printf("\nEnter inventry:");
  scanf("%ld",&inventry);

  printf("\nEnter Temporary Investment:");
  scanf("%ld",&temporary_invest);


  printf("\nEnter prepaid expenses:");
  scanf("%ld",&prepaid_expenses);

  total_current_assets=cash+acc_rec+less_doubt_acc+inventry+temporary_invest+prepaid_expenses;

  printf("\nYour Total Current Assets:%ld\n\n",total_current_assets);

  return total_current_assets;
}
/*========================== Current Assets Function End====================*/



/*------------------------Current Liabilities Function Start---------------*/

long int calculation_lb(void);
long int calculation_lb(void)
{

  printf("\t\t\t\tCurrent Liabilities\n");

  printf("\nEnter your Account Payable:");
  scanf("%ld",&acc_payble);

  printf("\nEnter Short term Notes:");
  scanf("%ld",&short_trm_notes);


  printf("\nEnter Current Portion Of Long Term Notes:");
  scanf("%ld",&current_prton_lng_trm_notes);


  printf("\nEnter Interest Payable:");
  scanf("%ld",&interest_payble);



  printf("\nEnter Taxes Payable:");
  scanf("%ld",&taxes_payble);


  printf("\nEnter Accured Payroll:");
  scanf("%ld",&accurd_payroll);

  cal_lb=acc_payble+short_trm_notes+current_prton_lng_trm_notes+interest_payble+taxes_payble+accurd_payroll;

  printf("\nYour Total Current Liabilities:%ld\n\n",cal_lb);


 return cal_lb;
}

/*=======================Current Liabilities function End==================*/

 /*------------------------Fixed Assets Function Start---------------*/

long int calculation_fa(void);
long int calculation_fa(void)
{


  printf("\t\t\t\tFixed Assets\n");

  printf("\nEnter your Long Term Investments:");
  scanf("%ld",&long_trm_invest);


  printf("\nEnter Your Land Value:");
  scanf("%ld",&Land);


  printf("\nEnter Your Buildings Value:");
  scanf("%ld",&buildings);


  printf("\nEnter (Less Accumulated Depreciation):");
  scanf("%ld",&less_acumulated_depreciation);



  printf("\nEnter Your Plant and Equipment Value:");
  scanf("%ld",&plant_and_equip);


  printf("\nEnter (Less Accumulated Depreciation):");
  scanf("%ld",&less_acumulated_depreciation1);



  printf("\nEnter Your Furniture and Fixtures Value:");
  scanf("%ld",&furniture_fixtures);


  printf("\nEnter Your (Less Accumulated Depreciation):");
  scanf("%ld",&less_acumulated_depreciation2);

  fa1=long_trm_invest+Land+buildings+plant_and_equip+furniture_fixtures+less_acumulated_depreciation+less_acumulated_depreciation1+less_acumulated_depreciation2;

  printf("\nTotal Net Fixed Assets:%ld\n",fa1);



 return fa1;
}

/*==========================Fixed Assets function End=====================*/

/*==========================Long Term Liabilities function Start============*/
long int calculate_long_trm_liabl1(void);
long int calculate_long_trm_liabl1(void)
{

   printf("\t\t\t\tLong Term Liabilities\n");

   printf("\nEnter Mortage:");
   scanf("%ld",&mortage);


   printf("\nEnter Other Long Term Liabilities:");
   scanf("%ld",&other_liabl2);


   lng_trm_lb=mortage+other_liabl2;

   printf("\nYour Total Long term Liabilities:%ld\n",lng_trm_lb);
  return lng_trm_lb;
}



/*======================Long Term Liabilities function End==============*/


/*==========================Shareholders Equity function Start============*/
long int calculate_shrhldr_equity(void);
long int calculate_shrhldr_equity(void)
{


   printf("\t\t\t\tShareholder Equity\n");

   printf("\nEnter Capital Stock:");
   scanf("%ld",&cap_stk);


   printf("\nEnter Retained Earnings:");
   scanf("%ld",&retn_erng);


  shrhld_eqty=cap_stk+retn_erng;

  printf("\nYour total Shareholder Equity:%ld\n\n",shrhld_eqty);


  return shrhld_eqty;
}
	 /*-------------Shareholder Equity Function Ends----------*/

      /*---------------------------  Ratios Function Start--------------- */

long int curent_ratio(long int,long int,long int);
long int curent_ratio(long int total_current_assets,long int inventry,long int cal_lb)
{
 printf("\t\t\t\tRatios\n");

 quick_ratio=(double)(total_current_assets-inventry)/cal_lb;
 printf("\n\nQuick Ratio:%lf",quick_ratio);

 cr_ratio=(double) total_current_assets/cal_lb;
 printf("\n\nCurrent Ratio:%lf",cr_ratio);

 cash_ratio=(double)(cash+mrkble_secritis)/cal_lb;
 printf("\n\nCash Ratio:%lf",cash_ratio);

 wrkg_cap=total_current_assets-cal_lb;
 printf("\n\nWorking Captital:%ld",wrkg_cap);

 return wrkg_cap;
}
/*----------------------------Ratios Funtions End---------------------------*/



int main()
{




 calculation_ca();

 calculation_fa();

 printf("\n%ld + %ld\n\n",total_current_assets,fa1);

 tl_assets=total_current_assets+fa1;
 printf("\nTotal Assets:%ld\n\n",tl_assets);

 calculation_lb();

 calculate_long_trm_liabl1();

 tl_lb=cal_lb+lng_trm_lb;
 printf("\nTotal Liabilities:%ld\n\n",tl_lb);

 calculate_shrhldr_equity();

 tl_lb_eq=cal_lb+lng_trm_lb+shrhld_eqty;
 printf("\nTotal Liabilities and Equity:%ld\n\n",tl_lb_eq);

 curent_ratio(total_current_assets,inventry,cal_lb);

 printf("\n\nAssets %ld = Liabilities %ld + Equity %ld",tl_assets,tl_lb,shrhld_eqty);


 printf("\n\nAssets %ld = %ld",tl_assets,(tl_lb+shrhld_eqty));


getch();
return 0;
}
