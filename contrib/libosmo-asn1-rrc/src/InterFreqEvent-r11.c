/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "InterFreqEvent-r11.h"

static asn_per_constraints_t asn_PER_type_InterFreqEvent_r11_constr_1 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_InterFreqEvent_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqEvent_r11, choice.event2a),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event2a_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"event2a"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqEvent_r11, choice.event2b),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event2b_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"event2b"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqEvent_r11, choice.event2c),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event2c_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"event2c"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqEvent_r11, choice.event2d),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event2d_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"event2d"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqEvent_r11, choice.event2e),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event2e_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"event2e"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqEvent_r11, choice.event2f),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event2f_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"event2f"
		},
};
static asn_TYPE_tag2member_t asn_MAP_InterFreqEvent_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* event2a at 15136 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* event2b at 15137 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* event2c at 15138 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* event2d at 15139 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* event2e at 15140 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* event2f at 15142 */
};
static asn_CHOICE_specifics_t asn_SPC_InterFreqEvent_r11_specs_1 = {
	sizeof(struct InterFreqEvent_r11),
	offsetof(struct InterFreqEvent_r11, _asn_ctx),
	offsetof(struct InterFreqEvent_r11, present),
	sizeof(((struct InterFreqEvent_r11 *)0)->present),
	asn_MAP_InterFreqEvent_r11_tag2el_1,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqEvent_r11 = {
	"InterFreqEvent-r11",
	"InterFreqEvent-r11",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_InterFreqEvent_r11_constr_1,
	asn_MBR_InterFreqEvent_r11_1,
	6,	/* Elements count */
	&asn_SPC_InterFreqEvent_r11_specs_1	/* Additional specs */
};

