/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFMessageAuthenticationCodeOperation : NSObject <SFSigningOperation> {
    id  _messageAuthenticationCodeOperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _SFKeySpecifier *signingKeySpecifier;
@property (readonly) Class superclass;

+ (id)_defaultMacOperation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3;

@end
