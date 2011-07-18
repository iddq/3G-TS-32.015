/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_GSMQoSInformation_H_
#define	_GSMQoSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QoSReliability.h"
#include "QoSDelay.h"
#include "QoSPrecedence.h"
#include "QoSPeakThroughput.h"
#include "QoSMeanThroughput.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSMQoSInformation */
typedef struct GSMQoSInformation {
	QoSReliability_t	 reliability;
	QoSDelay_t	 delay;
	QoSPrecedence_t	 precedence;
	QoSPeakThroughput_t	 peakThroughput;
	QoSMeanThroughput_t	 meanThroughput;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSMQoSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSMQoSInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _GSMQoSInformation_H_ */
#include <asn_internal.h>