/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "ManagementExtension.h"

static asn_TYPE_member_t asn_MBR_ManagementExtension_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ManagementExtension, identifier),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"identifier"
		},
	{ ATF_POINTER, 1, offsetof(struct ManagementExtension, significance),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"significance"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ManagementExtension, information),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"information"
		},
};
static ber_tlv_tag_t asn_DEF_ManagementExtension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ManagementExtension_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* identifier at 385 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* significance at 386 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* information at 387 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ManagementExtension_specs_1 = {
	sizeof(struct ManagementExtension),
	offsetof(struct ManagementExtension, _asn_ctx),
	asn_MAP_ManagementExtension_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ManagementExtension = {
	"ManagementExtension",
	"ManagementExtension",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ManagementExtension_tags_1,
	sizeof(asn_DEF_ManagementExtension_tags_1)
		/sizeof(asn_DEF_ManagementExtension_tags_1[0]), /* 1 */
	asn_DEF_ManagementExtension_tags_1,	/* Same as above */
	sizeof(asn_DEF_ManagementExtension_tags_1)
		/sizeof(asn_DEF_ManagementExtension_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ManagementExtension_1,
	3,	/* Elements count */
	&asn_SPC_ManagementExtension_specs_1	/* Additional specs */
};

