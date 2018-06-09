/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDSPContext : NSObject <NSCopying> {
    NSString * _cardholderName;
    unsigned long long  _eventFrequency;
    NSString * _peerPaymentRecipientAddress;
    NSString * _phoneNumber;
    NSString * _primaryAppleAccountFirstName;
    NSString * _primaryAppleAccountLastName;
    NSString * _secureElementID;
    NSString * _serverEndpointIdentifier;
}

@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic) unsigned long long eventFrequency;
@property (nonatomic, copy) NSString *peerPaymentRecipientAddress;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *primaryAppleAccountFirstName;
@property (nonatomic, copy) NSString *primaryAppleAccountLastName;
@property (nonatomic, copy) NSString *secureElementID;
@property (nonatomic, copy) NSString *serverEndpointIdentifier;

- (void).cxx_destruct;
- (id)cardholderName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)eventFrequency;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)peerPaymentRecipientAddress;
- (id)phoneNumber;
- (id)primaryAppleAccountFirstName;
- (id)primaryAppleAccountLastName;
- (id)secureElementID;
- (id)serverEndpointIdentifier;
- (void)setCardholderName:(id)arg1;
- (void)setEventFrequency:(unsigned long long)arg1;
- (void)setPeerPaymentRecipientAddress:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPrimaryAppleAccount:(id)arg1;
- (void)setPrimaryAppleAccountFirstName:(id)arg1;
- (void)setPrimaryAppleAccountLastName:(id)arg1;
- (void)setSecureElementID:(id)arg1;
- (void)setServerEndpointIdentifier:(id)arg1;

@end
