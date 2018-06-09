/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation {
    NSString * _applicationBundleID;
    long long  _discoverable;
}

@property (nonatomic, copy) NSString *applicationBundleID;
@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (id)activityCreate;
- (id)applicationBundleID;
- (long long)discoverable;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setApplicationBundleID:(id)arg1;
- (void)setDiscoverable:(long long)arg1;
- (bool)shouldCheckAppVersion;

@end
