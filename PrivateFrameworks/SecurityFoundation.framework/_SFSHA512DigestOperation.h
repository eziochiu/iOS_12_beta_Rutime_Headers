/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFSHA512DigestOperation : NSObject <SFDigestOperation, SFDigestOperationInternal> {
    id  _sha512DigestOperationInternal;
}

@property (getter=_ccDigestInfo, nonatomic, readonly) const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*ccDigestInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSData *hashValue;
@property (getter=_secKeyECDSAAlgorithm, nonatomic, readonly) const struct __CFString { }*secKeyECDSAAlgorithm;
@property (readonly) Class superclass;

+ (long long)blockSize;
+ (id)digest:(id)arg1;
+ (long long)outputSize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*)_ccDigestInfo;
- (const struct __CFString { }*)_secKeyECDSAAlgorithm;
- (void)addData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hashValue;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
