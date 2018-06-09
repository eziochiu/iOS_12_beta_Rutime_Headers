/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFSharablePassword : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _highLevelDomain;
    NSString * _password;
    NSArray * _protectionSpaces;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *highLevelDomain;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly) NSURL *passwordManagerURL;
@property (nonatomic, readonly, copy) NSArray *protectionSpaces;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)_decryptedDataForEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;
+ (id)sharablePasswordFromData:(id)arg1;
+ (id)sharablePasswordFromEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;
+ (id)sharablePasswordFromURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encryptionInformationWithNewKey;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)highLevelDomain;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 displayName:(id)arg3 highLevelDomain:(id)arg4 protectionSpaces:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)password;
- (id)passwordManagerURL;
- (id)protectionSpaces;
- (id)urlRepresentationForAirDrop;
- (id)username;

@end
