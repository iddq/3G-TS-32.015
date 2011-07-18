/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "CallEventRecord.h"

static asn_TYPE_member_t asn_MBR_CallEventRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventRecord, choice.sgsnPDPRecord),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNPDPRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnPDPRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventRecord, choice.ggsnPDPRecord),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GGSNPDPRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ggsnPDPRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventRecord, choice.sgsnMMRecord),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNMMRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnMMRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventRecord, choice.sgsnSMORecord),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNSMORecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnSMORecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventRecord, choice.sgsnSMTRecord),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNSMTRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnSMTRecord"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CallEventRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sgsnPDPRecord at 8 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ggsnPDPRecord at 9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sgsnMMRecord at 10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sgsnSMORecord at 11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sgsnSMTRecord at 13 */
};
static asn_CHOICE_specifics_t asn_SPC_CallEventRecord_specs_1 = {
	sizeof(struct CallEventRecord),
	offsetof(struct CallEventRecord, _asn_ctx),
	offsetof(struct CallEventRecord, present),
	sizeof(((struct CallEventRecord *)0)->present),
	asn_MAP_CallEventRecord_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CallEventRecord = {
	"CallEventRecord",
	"CallEventRecord",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_CallEventRecord_1,
	5,	/* Elements count */
	&asn_SPC_CallEventRecord_specs_1	/* Additional specs */
};
