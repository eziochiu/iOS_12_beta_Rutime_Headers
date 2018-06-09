/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAStorableLoginContext : NSObject {
    NSString * _DSID;
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _cloudKitToken;
    NSString * _continuationKey;
    NSString * _passwordResetKey;
    NSString * _rawPassword;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, copy) NSString *cloudKitToken;
@property (nonatomic, copy) NSString *continuationKey;
@property (nonatomic, copy) NSString *passwordResetKey;
@property (nonatomic, copy) NSString *rawPassword;

- (void).cxx_destruct;
- (id)DSID;
- (id)altDSID;
- (id)appleID;
- (id)cloudKitToken;
- (id)continuationKey;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (id)passwordResetKey;
- (id)rawPassword;
- (void)setCloudKitToken:(id)arg1;
- (void)setContinuationKey:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setPasswordResetKey:(id)arg1;
- (void)setRawPassword:(id)arg1;

@end