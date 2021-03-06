/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MultiflowCapability_H_
#define	_MultiflowCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MultiflowMIMOCapability.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MultiflowCapability__longerHARQProcessing {
	MultiflowCapability__longerHARQProcessing_true	= 0
} e_MultiflowCapability__longerHARQProcessing;

/* MultiflowCapability */
typedef struct MultiflowCapability {
	MultiflowMIMOCapability_t	*mimoInDifferentBands	/* OPTIONAL */;
	long	*longerHARQProcessing	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiflowCapability_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_longerHARQProcessing_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MultiflowCapability;

#ifdef __cplusplus
}
#endif

#endif	/* _MultiflowCapability_H_ */
#include <asn_internal.h>
