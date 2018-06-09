/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface jprL7AuZZkLkFoBK : NSObject {
    NSString * _FPANSuffix;
    NSData * _challengeResponse;
    NSString * _emailAddress;
    unsigned long long  _eventFrequency;
    NSData * _hostChallenge;
    NSSet * _identities;
    NSString * _phoneNumber;
    NSString * _seid;
    NSString * _serverEndpointIdentifier;
}

@property (nonatomic, retain) NSString *FPANSuffix;
@property (nonatomic, retain) NSData *challengeResponse;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic) unsigned long long eventFrequency;
@property (nonatomic, retain) NSData *hostChallenge;
@property (nonatomic, retain) NSSet *identities;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *seid;
@property (nonatomic, retain) NSString *serverEndpointIdentifier;

- (void).cxx_destruct;
- (id)FPANSuffix;
- (id)challengeResponse;
- (id)emailAddress;
- (unsigned long long)eventFrequency;
- (id)hostChallenge;
- (id)identities;
- (id)initWithServerEndpointIdentifier:(id)arg1;
- (id)phoneNumber;
- (id)seid;
- (id)serverEndpointIdentifier;
- (void)setChallengeResponse:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEventFrequency:(unsigned long long)arg1;
- (void)setFPANSuffix:(id)arg1;
- (void)setHostChallenge:(id)arg1;
- (void)setIdentities:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSeid:(id)arg1;
- (void)setServerEndpointIdentifier:(id)arg1;

@end
