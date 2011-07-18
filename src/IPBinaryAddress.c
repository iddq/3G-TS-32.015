/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "IPBinaryAddress.h"

static int
memb_iPBinV4Address_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_iPBinV6Address_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_IPBinaryAddress_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IPBinaryAddress, choice.iPBinV4Address),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_iPBinV4Address_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iPBinV4Address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IPBinaryAddress, choice.iPBinV6Address),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_iPBinV6Address_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iPBinV6Address"
		},
};
static asn_TYPE_tag2member_t asn_MAP_IPBinaryAddress_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iPBinV4Address at 568 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iPBinV6Address at 569 */
};
static asn_CHOICE_specifics_t asn_SPC_IPBinaryAddress_specs_1 = {
	sizeof(struct IPBinaryAddress),
	offsetof(struct IPBinaryAddress, _asn_ctx),
	offsetof(struct IPBinaryAddress, present),
	sizeof(((struct IPBinaryAddress *)0)->present),
	asn_MAP_IPBinaryAddress_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_IPBinaryAddress = {
	"IPBinaryAddress",
	"IPBinaryAddress",
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
	asn_MBR_IPBinaryAddress_1,
	2,	/* Elements count */
	&asn_SPC_IPBinaryAddress_specs_1	/* Additional specs */
};

