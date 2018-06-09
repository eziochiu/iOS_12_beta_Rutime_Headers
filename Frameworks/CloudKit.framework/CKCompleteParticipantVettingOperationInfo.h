/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding> {
    NSString * _baseToken;
    NSString * _displayedHostname;
    NSData * _encryptedKey;
    NSString * _routingKey;
    NSString * _vettingEmail;
    NSString * _vettingPhone;
    NSString * _vettingToken;
}

@property (nonatomic, retain) NSString *baseToken;
@property (nonatomic, retain) NSString *displayedHostname;
@property (nonatomic, retain) NSData *encryptedKey;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSString *vettingEmail;
@property (nonatomic, retain) NSString *vettingPhone;
@property (nonatomic, copy) NSString *vettingToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseToken;
- (id)displayedHostname;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedKey;
- (id)initWithCoder:(id)arg1;
- (id)routingKey;
- (void)setBaseToken:(id)arg1;
- (void)setDisplayedHostname:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setVettingEmail:(id)arg1;
- (void)setVettingPhone:(id)arg1;
- (void)setVettingToken:(id)arg1;
- (id)vettingEmail;
- (id)vettingPhone;
- (id)vettingToken;

@end
