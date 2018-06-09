/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSUserAgent : NSObject {
    AMSLRUCache * _cache;
}

@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSString *clientVersion;

+ (id)shared;

- (void).cxx_destruct;
- (id)_iOSComponentBuildVersion;
- (id)_iOSComponentClientInfoWithBundleID:(id)arg1;
- (id)_iOSComponentDeviceModel;
- (id)_iOSComponentFairPlayDeviceType;
- (id)_iOSComponentHardwarePlatform;
- (id)_iOSComponentParentheticalWithFairPlayDeviceType:(id)arg1;
- (id)_iOSComponentProductVersion;
- (bool)_iOSFairPlayDeviceType:(unsigned int*)arg1 error:(id*)arg2;
- (void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)cachedUserAgentForBundleIdentifier:(id)arg1;
- (id)clientName;
- (id)clientNameForBundleIdentifier:(id)arg1;
- (id)clientVersion;
- (id)clientVersionForBundleIdentifier:(id)arg1;
- (id)init;
- (id)userAgentForBundleIdentifier:(id)arg1 additionalComponents:(id)arg2;

@end
