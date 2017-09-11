#include<stdio.h>

int main()
{
	//declaration
	int IBMns,ORACLEns,SUNMICROns,LINKSYSns,CISCOns;
	double IBMbp,IBMcp,IBMyf,ORACLEbp,ORACLEcp,ORACLEyf,SUNMICRObp,SUNMICROcp,SUNMICROyf,LINKSYSbp,LINKSYScp,LINKSYSyf,CISCObp,CISCOcp,CISCOyf;

	//input
	printf("Enter the following for IBM\n");
	printf("Number of shares:");
	scanf("%d",&IBMns);
	printf("Buying price per share:");
	scanf("%lf",&IBMbp);
	printf("Current price per share:");
	scanf("%lf",&IBMcp);
	printf("Yearly fees:");
	scanf("%lf",&IBMyf);

	printf("Enter the following for ORACLE\n");
	printf("Number of shares:");
	scanf("%d",&ORACLEns);
	printf("Buying price per share:");
	scanf("%lf",&ORACLEbp);
	printf("Current price per share:");
	scanf("%lf",&ORACLEcp);
	printf("Yearly fees:");
	scanf("%lf",&ORACLEyf);

	printf("Enter the following for SUN MICRO\n");
	printf("Number of shares:");
	scanf("%d",&SUNMICROns);
	printf("Buying price per share:");
	scanf("%lf",&SUNMICRObp);
	printf("Current price per share:");
	scanf("%lf",&SUNMICROcp);
	printf("Yearly fees:");
	scanf("%lf",&SUNMICROyf);

	printf("Enter the following for LINKSYS\n");
	printf("Number of shares:");
	scanf("%d",&LINKSYSns);
	printf("Buying price per share:");
	scanf("%lf",&LINKSYSbp);
	printf("Current price per share:");
	scanf("%lf",&LINKSYScp);
	printf("Yearly fees:");
	scanf("%lf",&LINKSYSyf);

	printf("Enter the following for CISCO\n");
	printf("Number of shares:");
	scanf("%d",&CISCOns);
	printf("Buying price per share:");
	scanf("%lf",&CISCObp);
	printf("Current price per share:");
	scanf("%lf",&CISCOcp);
	printf("Yearly fees:");
	scanf("%lf",&CISCOyf);

	//calculation and output
	printf("--   IBM   --\nInitial Cost: $%lf\nCurrent Cost: $%lf\nProfit: $%lf\n",(double) IBMns*IBMbp,(double) IBMns*IBMcp,(double) IBMns*IBMcp - (double) IBMns*IBMbp - IBMyf);
	printf("-- ORACLE  --\nInitial Cost: $%lf\nCurrent Cost: $%lf\nProfit: $%lf\n",(double) ORACLEns*ORACLEbp,(double) ORACLEns*ORACLEcp,(double) ORACLEns*ORACLEcp - (double) ORACLEns*ORACLEbp - ORACLEyf);
	printf("--SUN MICRO--\nInitial Cost: $%lf\nCurrent Cost: $%lf\nProfit: $%lf\n",(double) SUNMICROns*SUNMICRObp,(double) SUNMICROns*SUNMICROcp,(double) SUNMICROns*SUNMICROcp - (double) SUNMICROns*SUNMICRObp - SUNMICROyf);
	printf("-- LINKSYS --\nInitial Cost: $%lf\nCurrent Cost: $%lf\nProfit: $%lf\n",(double) LINKSYSns*LINKSYSbp,(double) LINKSYSns*LINKSYScp,(double) LINKSYSns*LINKSYScp - (double) LINKSYSns*LINKSYSbp - LINKSYSyf);
	printf("--  CISCO  --\nInitial Cost: $%lf\nCurrent Cost: $%lf\nProfit: $%lf\n",(double) CISCOns*CISCObp,(double) CISCOns*CISCOcp,(double) CISCOns*CISCOcp - (double) CISCOns*CISCObp - CISCOyf);

	return 0;
}
