/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBSFNservicesNotNotified_r7_H_
#define	_MBSFNservicesNotNotified_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFNservicesNotNotified_r7__notificationOfAllMBSFNServicesInTheBand {
	MBSFNservicesNotNotified_r7__notificationOfAllMBSFNServicesInTheBand_true	= 0
} e_MBSFNservicesNotNotified_r7__notificationOfAllMBSFNServicesInTheBand;

/* MBSFNservicesNotNotified-r7 */
typedef struct MBSFNservicesNotNotified_r7 {
	long	*notificationOfAllMBSFNServicesInTheBand	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFNservicesNotNotified_r7_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_notificationOfAllMBSFNServicesInTheBand_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBSFNservicesNotNotified_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFNservicesNotNotified_r7_H_ */
#include <asn_internal.h>
