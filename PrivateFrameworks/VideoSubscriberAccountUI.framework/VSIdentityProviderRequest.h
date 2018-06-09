/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderRequest : NSObject {
    VSAccount * _account;
    VSOptional * _accountMetadataRequest;
    NSString * _requestingAppAdamID;
    NSString * _requestingAppDisplayName;
    VSPersistentStorage * _storage;
    long long  _type;
}

@property (nonatomic, retain) VSAccount *account;
@property (nonatomic, retain) VSOptional *accountMetadataRequest;
@property (nonatomic, readonly) bool allowsUI;
@property (nonatomic, readonly) bool forceAuthentication;
@property (nonatomic, copy) NSString *requestingAppAdamID;
@property (nonatomic, copy) NSString *requestingAppDisplayName;
@property (nonatomic, readonly) bool requiresUI;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (nonatomic) long long type;

+ (id)accountMetadataRequestWithAccount:(id)arg1 storage:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4 requestingAppAdamID:(id)arg5;
+ (id)deleteAccountRequestWithAccount:(id)arg1 storage:(id)arg2;
+ (id)makeAccountRequestWithStorage:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithRequestType:(long long)arg1 account:(id)arg2 storage:(id)arg3;
- (id)account;
- (id)accountMetadataRequest;
- (bool)allowsUI;
- (id)description;
- (bool)forceAuthentication;
- (id)init;
- (id)requestingAppAdamID;
- (id)requestingAppDisplayName;
- (bool)requiresUI;
- (void)setAccount:(id)arg1;
- (void)setAccountMetadataRequest:(id)arg1;
- (void)setRequestingAppAdamID:(id)arg1;
- (void)setRequestingAppDisplayName:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setType:(long long)arg1;
- (id)storage;
- (long long)type;

@end
