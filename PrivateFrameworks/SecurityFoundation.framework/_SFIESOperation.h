/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFIESOperation : NSObject <_SFEncryptionOperation> {
    long long  _curve;
    id  _iesOperationInternal;
}

@property long long curve;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) _SFECDHOperation *diffieHellmanOperation;
@property (nonatomic, copy) <SFDigestOperation> *digestOperation;
@property (nonatomic, readonly, copy) _SFKeySpecifier *encryptionKeySpecifier;
@property (nonatomic, copy) _SFAuthenticatedEncryptionOperation *encryptionOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*)_ccDigestInfoWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)curve;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)diffieHellmanOperation;
- (id)digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)encryptionKeySpecifier;
- (id)encryptionOperation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(long long)arg1;
- (id)initWithCurve:(long long)arg1 diffieHellmanOperation:(id)arg2 encryptionOperation:(id)arg3 digestOperation:(id)arg4;
- (void)setCurve:(long long)arg1;
- (void)setDiffieHellmanOperation:(id)arg1;
- (void)setDigestOperation:(id)arg1;
- (void)setEncryptionOperation:(id)arg1;

@end
