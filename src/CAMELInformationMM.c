/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "CAMELInformationMM.h"

static asn_TYPE_member_t asn_MBR_CAMELInformationMM_1[] = {
	{ ATF_POINTER, 7, offsetof(struct CAMELInformationMM, sCFAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCFAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sCFAddress"
		},
	{ ATF_POINTER, 6, offsetof(struct CAMELInformationMM, serviceKey),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceKey,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serviceKey"
		},
	{ ATF_POINTER, 5, offsetof(struct CAMELInformationMM, defaultTransactionHandling),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultGPRS_Handling,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defaultTransactionHandling"
		},
	{ ATF_POINTER, 4, offsetof(struct CAMELInformationMM, numberOfDPEncountered),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfDPEncountered,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numberOfDPEncountered"
		},
	{ ATF_POINTER, 3, offsetof(struct CAMELInformationMM, levelOfCAMELService),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LevelOfCAMELService,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"levelOfCAMELService"
		},
	{ ATF_POINTER, 2, offsetof(struct CAMELInformationMM, freeFormatData),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreeFormatData,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"freeFormatData"
		},
	{ ATF_POINTER, 1, offsetof(struct CAMELInformationMM, fFDAppendIndicator),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FFDAppendIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fFDAppendIndicator"
		},
};
static ber_tlv_tag_t asn_DEF_CAMELInformationMM_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CAMELInformationMM_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* sCFAddress at 425 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* serviceKey at 426 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* defaultTransactionHandling at 427 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* numberOfDPEncountered at 428 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* levelOfCAMELService at 429 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* freeFormatData at 430 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 } /* fFDAppendIndicator at 431 */
};
static uint8_t asn_MAP_CAMELInformationMM_mmap_1[(7 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(0 << 7) | (0 << 6) | (0 << 5) | (0 << 4) | (0 << 3) | (0 << 2) | (0 << 1)
};
static asn_SET_specifics_t asn_SPC_CAMELInformationMM_specs_1 = {
	sizeof(struct CAMELInformationMM),
	offsetof(struct CAMELInformationMM, _asn_ctx),
	offsetof(struct CAMELInformationMM, _presence_map),
	asn_MAP_CAMELInformationMM_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_CAMELInformationMM_tag2el_1,	/* Same as above */
	7,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(unsigned int *)asn_MAP_CAMELInformationMM_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_CAMELInformationMM = {
	"CAMELInformationMM",
	"CAMELInformationMM",
	SET_free,
	SET_print,
	SET_constraint,
	SET_decode_ber,
	SET_encode_der,
	SET_decode_xer,
	SET_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CAMELInformationMM_tags_1,
	sizeof(asn_DEF_CAMELInformationMM_tags_1)
		/sizeof(asn_DEF_CAMELInformationMM_tags_1[0]), /* 1 */
	asn_DEF_CAMELInformationMM_tags_1,	/* Same as above */
	sizeof(asn_DEF_CAMELInformationMM_tags_1)
		/sizeof(asn_DEF_CAMELInformationMM_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CAMELInformationMM_1,
	7,	/* Elements count */
	&asn_SPC_CAMELInformationMM_specs_1	/* Additional specs */
};

