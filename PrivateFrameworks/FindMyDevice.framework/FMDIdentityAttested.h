/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDIdentityAttested : NSObject <FMDIdentityAttesting> {
    NSData * _attestation;
    NSString * _sessionIdentifier;
    NSData * _signature;
}

@property (nonatomic, retain) NSData *attestation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSData *signature;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sessionIdentifier;
- (void)setAttestation:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
