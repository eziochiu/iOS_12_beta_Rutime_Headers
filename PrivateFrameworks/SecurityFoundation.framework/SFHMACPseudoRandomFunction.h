/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFHMACPseudoRandomFunction : NSObject <SFPseudoRandomFunction> {
    id  _hmacPseudoRandomFunctionInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) <SFDigestOperation> *digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)generateBytesWithLength:(long long)arg1 key:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (void)setDigestOperation:(id)arg1;

@end
