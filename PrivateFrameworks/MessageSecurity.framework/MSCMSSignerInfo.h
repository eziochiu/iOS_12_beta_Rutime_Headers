/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSSignerInfo : NSObject {
    NSData * _LAContext;
    MSCMSSignedData * _containingSignedData;
    MSAlgorithmIdentifier * _digestAlgorithm;
    struct SignerInfo { int x1; struct CMSIdentifier { int x_2_1_1; union { struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_4_1; void *x_1_4_2; } x_1_3_1; struct heim_integer { unsigned long long x_2_4_1; void *x_2_4_2; int x_2_4_3; } x_1_3_2; } x_2_2_1; struct heim_base_data { unsigned long long x_2_3_1; void *x_2_3_2; } x_2_2_2; } x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct SignerInfo_signedAttrs {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct SignerInfo_unsignedAttrs {} *x7; } * _encodedSignerInfo;
    MSCMSMutableAttributeArray * _protectedAttributes;
    NSData * _signature;
    MSAlgorithmIdentifier * _signatureAlgorithm;
    struct SignerInfo_signedAttrs { 
        unsigned int len; 
        struct Attribute {} *val; 
    }  _signedAttrsStruct;
    struct __SecCertificate { } * _signerCertificate;
    NSData * _signerIssuerSequence;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _signerPrivKey;
    NSData * _signerSerialNumber;
    MSCMSMutableAttributeArray * _unprotectedAttributes;
    struct SignerInfo_unsignedAttrs { 
        unsigned int len; 
        struct Attribute {} *val; 
    }  _unsignedAttrsStruct;
    NSNumber * _version;
}

@property (retain) NSData *LAContext;
@property MSCMSSignedData *containingSignedData;
@property (retain) MSAlgorithmIdentifier *digestAlgorithm;
@property struct SignerInfo { int x1; struct CMSIdentifier { int x_2_1_1; union { struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_4_1; void *x_1_4_2; } x_1_3_1; struct heim_integer { unsigned long long x_2_4_1; void *x_2_4_2; int x_2_4_3; } x_1_3_2; } x_2_2_1; struct heim_base_data { unsigned long long x_2_3_1; void *x_2_3_2; } x_2_2_2; } x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct SignerInfo_signedAttrs {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct SignerInfo_unsignedAttrs {} *x7; }*encodedSignerInfo;
@property (retain) MSCMSMutableAttributeArray *protectedAttributes;
@property (retain) NSData *signature;
@property (retain) MSAlgorithmIdentifier *signatureAlgorithm;
@property struct SignerInfo_signedAttrs { unsigned int x1; struct Attribute {} *x2; } signedAttrsStruct;
@property struct __SecCertificate { }*signerCertificate;
@property (retain) NSData *signerIssuerSequence;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*signerPrivKey;
@property (retain) NSData *signerSerialNumber;
@property (retain) MSCMSMutableAttributeArray *unprotectedAttributes;
@property struct SignerInfo_unsignedAttrs { unsigned int x1; struct Attribute {} *x2; } unsignedAttrsStruct;
@property (retain) NSNumber *version;

+ (id)decodeSignerInfo:(struct SignerInfo { int x1; struct CMSIdentifier { int x_2_1_1; union { struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_4_1; void *x_1_4_2; } x_1_3_1; struct heim_integer { unsigned long long x_2_4_1; void *x_2_4_2; int x_2_4_3; } x_1_3_2; } x_2_2_1; struct heim_base_data { unsigned long long x_2_3_1; void *x_2_3_2; } x_2_2_2; } x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct SignerInfo_signedAttrs {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct SignerInfo_unsignedAttrs {} *x7; }*)arg1 certificates:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)LAContext;
- (id)calculateSignedAttributesDigest:(id*)arg1;
- (id)calculateSignerInfoDigest:(id*)arg1;
- (id)containingSignedData;
- (struct __SecTrust { }*)createTrustObjectWithPolicies:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)digestAlgorithm;
- (bool)encodeSignerInfo:(struct SignerInfo { int x1; struct CMSIdentifier { int x_2_1_1; union { struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_4_1; void *x_1_4_2; } x_1_3_1; struct heim_integer { unsigned long long x_2_4_1; void *x_2_4_2; int x_2_4_3; } x_1_3_2; } x_2_2_1; struct heim_base_data { unsigned long long x_2_3_1; void *x_2_3_2; } x_2_2_2; } x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct SignerInfo_signedAttrs {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct SignerInfo_unsignedAttrs {} *x7; }*)arg1 error:(id*)arg2;
- (struct SignerInfo { int x1; struct CMSIdentifier { int x_2_1_1; union { struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_4_1; void *x_1_4_2; } x_1_3_1; struct heim_integer { unsigned long long x_2_4_1; void *x_2_4_2; int x_2_4_3; } x_1_3_2; } x_2_2_1; struct heim_base_data { unsigned long long x_2_3_1; void *x_2_3_2; } x_2_2_2; } x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct SignerInfo_signedAttrs {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct SignerInfo_unsignedAttrs {} *x7; }*)encodedSignerInfo;
- (id)getAttributesWithType:(id)arg1;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 error:(id*)arg2;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id*)arg3;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 signatureAlgorithm:(id)arg2 error:(id*)arg3;
- (id)initWithEmail:(id)arg1 LAContext:(id)arg2 error:(id*)arg3;
- (id)initWithEmail:(id)arg1 recipientsAlgorithmCapabilities:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;
- (id)initWithEmail:(id)arg1 signatureAlgorithm:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 error:(id*)arg2;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id*)arg3;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 signatureAlgorithm:(id)arg2 error:(id*)arg3;
- (id)protectedAttributes;
- (void)setContainingSignedData:(id)arg1;
- (void)setDigestAlgorithm:(id)arg1;
- (void)setEncodedSignerInfo:(struct SignerInfo { int x1; struct CMSIdentifier { int x_2_1_1; union { struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_4_1; void *x_1_4_2; } x_1_3_1; struct heim_integer { unsigned long long x_2_4_1; void *x_2_4_2; int x_2_4_3; } x_1_3_2; } x_2_2_1; struct heim_base_data { unsigned long long x_2_3_1; void *x_2_3_2; } x_2_2_2; } x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct SignerInfo_signedAttrs {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct SignerInfo_unsignedAttrs {} *x7; }*)arg1;
- (void)setLAContext:(id)arg1;
- (void)setProtectedAttributes:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignatureAlgorithm:(id)arg1;
- (void)setSignedAttrsStruct:(struct SignerInfo_signedAttrs { unsigned int x1; struct Attribute {} *x2; })arg1;
- (void)setSignerCertificate:(struct __SecCertificate { }*)arg1;
- (void)setSignerIssuerSequence:(id)arg1;
- (void)setSignerPrivKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setSignerSerialNumber:(id)arg1;
- (void)setUnprotectedAttributes:(id)arg1;
- (void)setUnsignedAttrsStruct:(struct SignerInfo_unsignedAttrs { unsigned int x1; struct Attribute {} *x2; })arg1;
- (void)setVersion:(id)arg1;
- (bool)sign:(id*)arg1;
- (id)signature;
- (id)signatureAlgorithm;
- (struct SignerInfo_signedAttrs { unsigned int x1; struct Attribute {} *x2; })signedAttrsStruct;
- (struct __SecCertificate { }*)signerCertificate;
- (id)signerIssuerSequence;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)signerPrivKey;
- (id)signerSerialNumber;
- (id)unprotectedAttributes;
- (struct SignerInfo_unsignedAttrs { unsigned int x1; struct Attribute {} *x2; })unsignedAttrsStruct;
- (bool)verifyContentTypeAttribute:(id*)arg1;
- (bool)verifyCountersignatures:(id*)arg1;
- (bool)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id*)arg3;
- (bool)verifyMessageDigestAttribute:(id)arg1 error:(id*)arg2;
- (bool)verifySignature:(id*)arg1;
- (bool)verifySignatureAndSignerWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id*)arg3;
- (id)verifyTime:(id)arg1;
- (bool)verifyTimestamps:(id*)arg1;
- (id)version;

@end
