/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCalDAVAccountPayload : MCPayload {
    NSString * _accountDescription;
    NSString * _accountPersistentUUID;
    NSString * _hostname;
    NSString * _password;
    int  _port;
    NSNumber * _portNum;
    NSString * _principalURL;
    bool  _useSSL;
    NSNumber * _useSSLNum;
    NSString * _username;
}

@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountPersistentUUID;
@property (nonatomic, readonly, retain) NSString *hostname;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) int port;
@property (nonatomic, readonly) NSNumber *portNum;
@property (nonatomic, readonly, retain) NSString *principalURL;
@property (nonatomic, readonly) bool useSSL;
@property (nonatomic, readonly) NSNumber *useSSLNum;
@property (nonatomic, copy) NSString *username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (bool)containsSensitiveUserInformation;
- (id)description;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (int)port;
- (id)portNum;
- (id)principalURL;
- (void)setAccountPersistentUUID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (bool)useSSL;
- (id)useSSLNum;
- (id)username;

@end
