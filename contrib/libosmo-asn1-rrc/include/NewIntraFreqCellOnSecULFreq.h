/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_NewIntraFreqCellOnSecULFreq_H_
#define	_NewIntraFreqCellOnSecULFreq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqCellIDOnSecULFreq.h"
#include "CellInfo-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NewIntraFreqCellOnSecULFreq */
typedef struct NewIntraFreqCellOnSecULFreq {
	IntraFreqCellIDOnSecULFreq_t	*intraFreqCellIDOnSecULFreq	/* OPTIONAL */;
	CellInfo_r4_t	 cellInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewIntraFreqCellOnSecULFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCellOnSecULFreq;

#ifdef __cplusplus
}
#endif

#endif	/* _NewIntraFreqCellOnSecULFreq_H_ */
#include <asn_internal.h>
