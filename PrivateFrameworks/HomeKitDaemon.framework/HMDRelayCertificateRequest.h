/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayCertificateRequest : HMFObject {
    NSData * _challengeCertificate;
    NSString * _challengeIdentifier;
    NSData * _challengeResponse;
    NSData * _publicKey;
}

@property (nonatomic, readonly, copy) NSData *challengeCertificate;
@property (nonatomic, readonly, copy) NSString *challengeIdentifier;
@property (nonatomic, readonly, copy) NSData *challengeResponse;
@property (nonatomic, readonly, copy) NSData *publicKey;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)challengeCertificate;
- (id)challengeIdentifier;
- (id)challengeResponse;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)init;
- (id)initWithPublicKey:(id)arg1 challengeIdentifier:(id)arg2 challengeResponse:(id)arg3 challengeCertificate:(id)arg4;
- (id)publicKey;
- (id)serializeWithError:(id*)arg1;
- (id)shortDescription;

@end
