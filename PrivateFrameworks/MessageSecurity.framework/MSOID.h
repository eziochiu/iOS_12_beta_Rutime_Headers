/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSOID : NSObject {
    struct heim_oid { 
        unsigned long long length; 
        unsigned int *components; 
    }  _Asn1OID;
    NSData * _OIDBytes;
    NSString * _OIDString;
}

@property (readonly) struct heim_oid { unsigned long long x1; unsigned int *x2; } Asn1OID;
@property (readonly) NSData *OIDBytes;
@property (readonly) NSString *OIDString;
@property (readonly) const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*ccdigest;
@property (readonly) const struct __CFString { }*secKeyAlgorithm;

+ (id)ECSignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2;
+ (id)OIDWithAsn1OID:(struct heim_oid { unsigned long long x1; unsigned int *x2; }*)arg1 error:(id*)arg2;
+ (id)OIDWithData:(id)arg1;
+ (id)OIDWithData:(id)arg1 error:(id*)arg2;
+ (id)OIDWithString:(id)arg1;
+ (id)OIDWithString:(id)arg1 error:(id*)arg2;
+ (id)RSASignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2;
+ (id)digestOIDWithSignatureAlgorithm:(id)arg1 error:(id*)arg2;
+ (id)signatureAlgorithmOIDWithSecKeyAlgorithm:(struct __CFString { }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (struct heim_oid { unsigned long long x1; unsigned int *x2; })Asn1OID;
- (id)OIDBytes;
- (id)OIDString;
- (const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*)ccdigest;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initDigestOIDWithSignatureAlgorithm:(id)arg1 error:(id*)arg2;
- (id)initECSignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2;
- (id)initRSASignatureOIDWithDigestAlgorithm:(id)arg1 error:(id*)arg2;
- (id)initSignatureOIDWithSecKeyAlgorithm:(struct __CFString { }*)arg1 error:(id*)arg2;
- (id)initWithAsn1OID:(struct heim_oid { unsigned long long x1; unsigned int *x2; }*)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithString:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (const struct __CFString { }*)secKeyAlgorithm;
- (bool)setAsn1OidFromOIDString:(id)arg1 error:(id*)arg2;

@end
