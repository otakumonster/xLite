/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_RadioAccessCapabilityInfo_TDD128_vb50ext_H_
#define	_UE_RadioAccessCapabilityInfo_TDD128_vb50ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementCapabilityTDD_vb50ext;

/* UE-RadioAccessCapabilityInfo-TDD128-vb50ext */
typedef struct UE_RadioAccessCapabilityInfo_TDD128_vb50ext {
	struct MeasurementCapabilityTDD_vb50ext	*measurementCapabilityTDD	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabilityInfo_TDD128_vb50ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabilityInfo_TDD128_vb50ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementCapabilityTDD-vb50ext.h"

#endif	/* _UE_RadioAccessCapabilityInfo_TDD128_vb50ext_H_ */
#include <asn_internal.h>