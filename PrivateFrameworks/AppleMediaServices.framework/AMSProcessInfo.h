/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSProcessInfo : NSObject {
    NSData * _auditTokenData;
    NSString * _bundleIdentifier;
    NSString * _clientVersion;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _partnerHeader;
    NSString * _proxyAppBundleID;
}

@property (nonatomic, retain) NSData *auditTokenData;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, retain) NSString *partnerHeader;
@property (nonatomic, retain) NSString *proxyAppBundleID;

+ (bool)boolForEntitlement:(id)arg1;
+ (bool)boolForMachLookupAccess:(id)arg1;
+ (id)currentProcess;
+ (bool)isBuddyRunning;

- (void).cxx_destruct;
- (id)auditTokenData;
- (id)bundleIdentifier;
- (id)clientVersion;
- (id)generateConfiguration;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)partnerHeader;
- (id)proxyAppBundleID;
- (void)setAuditTokenData:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setProxyAppBundleID:(id)arg1;

@end
