/* made by EzioChiu.
 */

@protocol NEProfilePayloadHandlerDelegate

@required

- (NSArray *)getCertificates;
- (NSString *)getConfigurationIdentifier;
- (NSDictionary *)getPendingCertificateInfo:(id <NEProfilePayloadBaseDelegate>)arg1;
- (NSDictionary *)getPendingCertificateUUIDs:(id <NEProfilePayloadBaseDelegate>)arg1;
- (bool)setAppLayerVPNRuleSettings:(NSDictionary *)arg1 withAppIdentifier:(NSString *)arg2;
- (bool)setAppLayerVPNUUID:(NSString *)arg1 andSafariDomains:(NSArray *)arg2;
- (bool)setCertificates:(NSDictionary *)arg1;
- (bool)setPayloadInfoCommon:(NSString *)arg1 payloadOrganization:(NSString *)arg2;
- (bool)setPayloadInfoIdentity:(id <NEProfilePayloadBaseDelegate>)arg1;
- (bool)setProfileInfo:(NSDictionary *)arg1;

@end
