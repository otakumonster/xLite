/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_TxRxFrequencySeparation_H_
#define	_TxRxFrequencySeparation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TxRxFrequencySeparation {
	TxRxFrequencySeparation_default_TxRx_separation	= 0,
	TxRxFrequencySeparation_spare2	= 1,
	TxRxFrequencySeparation_spare1	= 2
} e_TxRxFrequencySeparation;

/* TxRxFrequencySeparation */
typedef long	 TxRxFrequencySeparation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TxRxFrequencySeparation;
asn_struct_free_f TxRxFrequencySeparation_free;
asn_struct_print_f TxRxFrequencySeparation_print;
asn_constr_check_f TxRxFrequencySeparation_constraint;
ber_type_decoder_f TxRxFrequencySeparation_decode_ber;
der_type_encoder_f TxRxFrequencySeparation_encode_der;
xer_type_decoder_f TxRxFrequencySeparation_decode_xer;
xer_type_encoder_f TxRxFrequencySeparation_encode_xer;
per_type_decoder_f TxRxFrequencySeparation_decode_uper;
per_type_encoder_f TxRxFrequencySeparation_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TxRxFrequencySeparation_H_ */
#include <asn_internal.h>