/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
    NSString * _accountDescription;
    NSString * _accountPersistentUUID;
    NSData * _certificatePersistentID;
    NSString * _certificateUUID;
    NSDictionary * _communicationServiceRules;
    NSString * _emailAddress;
    NSData * _embeddedCertificate;
    NSString * _embeddedCertificateName;
    NSString * _embeddedCertificatePassword;
    NSString * _hostname;
    NSNumber * _mailNumberOfPastDaysToSync;
    NSString * _password;
    bool  _syncDefaultFoldersOnly;
    NSNumber * _syncDefaultFoldersOnlyNum;
    NSNumber * _useOAuth;
    NSNumber * _useSSL;
    NSString * _username;
}

@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountPersistentUUID;
@property (nonatomic, retain) NSData *certificatePersistentID;
@property (nonatomic, readonly, retain) NSString *certificateUUID;
@property (nonatomic, readonly) NSDictionary *communicationServiceRules;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, readonly, retain) NSData *embeddedCertificate;
@property (nonatomic, readonly, retain) NSString *embeddedCertificateName;
@property (nonatomic, copy) NSString *embeddedCertificatePassword;
@property (nonatomic, readonly) bool hasCertificate;
@property (nonatomic, readonly, retain) NSString *hostname;
@property (nonatomic, readonly, retain) NSNumber *mailNumberOfPastDaysToSync;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool syncDefaultFoldersOnly;
@property (nonatomic, readonly) NSNumber *syncDefaultFoldersOnlyNum;
@property (nonatomic, retain) NSNumber *useOAuth;
@property (nonatomic, retain) NSNumber *useSSL;
@property (nonatomic, copy) NSString *username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)certificatePersistentID;
- (id)certificateUUID;
- (id)communicationServiceRules;
- (bool)containsSensitiveUserInformation;
- (id)description;
- (id)emailAddress;
- (id)embeddedCertificate;
- (id)embeddedCertificateName;
- (id)embeddedCertificatePassword;
- (bool)hasCertificate;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)mailNumberOfPastDaysToSync;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (void)setAccountPersistentUUID:(id)arg1;
- (void)setCertificatePersistentID:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEmbeddedCertificatePassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSyncDefaultFoldersOnly:(bool)arg1;
- (void)setUseOAuth:(id)arg1;
- (void)setUseSSL:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (bool)syncDefaultFoldersOnly;
- (id)syncDefaultFoldersOnlyNum;
- (id)title;
- (id)useOAuth;
- (id)useSSL;
- (id)username;

@end
