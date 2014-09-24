/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType19_vb30ext_H_
#define	_SysInfoType19_vb30ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SysInfoType19_vb30ext__cell_fach_meas_ind {
	SysInfoType19_vb30ext__cell_fach_meas_ind_high_priority_layers	= 0,
	SysInfoType19_vb30ext__cell_fach_meas_ind_all_layers	= 1
} e_SysInfoType19_vb30ext__cell_fach_meas_ind;

/* SysInfoType19-vb30ext */
typedef struct SysInfoType19_vb30ext {
	long	*cell_fach_meas_ind	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType19_vb30ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cell_fach_meas_ind_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType19_vb30ext;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType19_vb30ext_H_ */
#include <asn_internal.h>