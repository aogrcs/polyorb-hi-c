/*
 * This is a part of PolyORB-HI-C distribution, a minimal
 * middleware written for generated code from AADL models.
 * You should use it with the Ocarina toolsuite.
 *
 * For more informations, please visit http://http://taste.tuxfamily.org/wiki
 *
 * Copyright (C) 2014 ESA & ISAE.
 */

#if (defined (__PO_HI_NEED_DRIVER_SPACEWIRE_RASTA))\n
/*
Code automatically generated by asn1scc tool
Date was: 2/7/2012
Time was: 15:35:36
*/
#include <string.h>
#include <math.h>
#include "spacewire.h"


#ifndef _MSC_VER
__po_hi_c_spacewire_conf_t leon_rasta_spw_sender = {
	.devname = "/dev/grspwrasta0",
	.nodeaddr = 11
}; 
__po_hi_c_spacewire_conf_t leon_rasta_spw_receiver = {
	.devname = "/dev/grspwrasta0",
	.nodeaddr = 22
}; 
#endif

void __po_hi_c_Core_Frequence_T_Initialize(__po_hi_c_Core_Frequence_T* pVal)
{
	*pVal = 0;
}


flag __po_hi_c_Core_Frequence_T_IsConstraintValid(const __po_hi_c_Core_Frequence_T* pVal, int* pErrCode) 
{
	if ( !(((*pVal>=0) && (*pVal<=4294967295LL))) ) {
		*pErrCode = ERR___po_hi_c_Core_Frequence_T;
		return FALSE;
	}
	(void)pVal; /*Dummy statement, just to hide potential warning*/
	(void)pErrCode; /*Dummy statement, just to hide potential warning*/
	return TRUE;
}




void __po_hi_c_Node_Addr_T_Initialize(__po_hi_c_Node_Addr_T* pVal)
{
	*pVal = 0;
}


flag __po_hi_c_Node_Addr_T_IsConstraintValid(const __po_hi_c_Node_Addr_T* pVal, int* pErrCode) 
{
	if ( !(((*pVal>=0) && (*pVal<=255))) ) {
		*pErrCode = ERR___po_hi_c_Node_Addr_T;
		return FALSE;
	}
	(void)pVal; /*Dummy statement, just to hide potential warning*/
	(void)pErrCode; /*Dummy statement, just to hide potential warning*/
	return TRUE;
}




void __po_hi_c_Clock_Division_T_Initialize(__po_hi_c_Clock_Division_T* pVal)
{
	*pVal = 0;
}


flag __po_hi_c_Clock_Division_T_IsConstraintValid(const __po_hi_c_Clock_Division_T* pVal, int* pErrCode) 
{
	if ( !(((*pVal>=0) && (*pVal<=255))) ) {
		*pErrCode = ERR___po_hi_c_Clock_Division_T;
		return FALSE;
	}
	(void)pVal; /*Dummy statement, just to hide potential warning*/
	(void)pErrCode; /*Dummy statement, just to hide potential warning*/
	return TRUE;
}




void __po_hi_c_spacewire_conf_t_Initialize(__po_hi_c_spacewire_conf_t* pVal)
{
	memset(pVal->devname, 0x0, 21);
	pVal->nodeaddr = 0;
	pVal->corefreq = 0;
	pVal->clockdiv = 0;
	pVal->use_router = FALSE;
	pVal->remove_prot_id = FALSE;
	pVal->rxblock = FALSE;
	pVal->txblock = FALSE;
}


flag __po_hi_c_spacewire_conf_t_IsConstraintValid(const __po_hi_c_spacewire_conf_t* pVal, int* pErrCode) 
{
	if ( !(((strlen(pVal->devname)>=1) && (strlen(pVal->devname)<=20))) ) {
		*pErrCode = ERR___po_hi_c_spacewire_conf_t_devname;
		return FALSE;
	}
	if ( !__po_hi_c_Node_Addr_T_IsConstraintValid(&pVal->nodeaddr, pErrCode)) 
		return FALSE;

	if (pVal->exist.corefreq) {
		if ( !__po_hi_c_Core_Frequence_T_IsConstraintValid(&pVal->corefreq, pErrCode)) 
			return FALSE;

	}
	if (pVal->exist.clockdiv) {
		if ( !__po_hi_c_Clock_Division_T_IsConstraintValid(&pVal->clockdiv, pErrCode)) 
			return FALSE;

	}
	if (pVal->exist.use_router) {
	}
	if (pVal->exist.remove_prot_id) {
	}
	if (pVal->exist.rxblock) {
	}
	if (pVal->exist.txblock) {
	}
	(void)pVal; /*Dummy statement, just to hide potential warning*/
	(void)pErrCode; /*Dummy statement, just to hide potential warning*/
	return TRUE;
}





\n#endif
