/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingContainer : NSObject {
    HMDAccessory * _accessory;
    HMDMediaSystem * _mediaSystem;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) HMDMediaSystem *mediaSystem;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUUID *parentUUID;
@property (nonatomic, readonly) HMDAccessorySettingTarget *target;

- (void).cxx_destruct;
- (id)accessory;
- (void)auditRootSettingsGroup:(unsigned long long)arg1;
- (id)description;
- (id)home;
- (id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2;
- (bool)isMediaSystemContainer;
- (id)mediaSystem;
- (id)name;
- (id)parentUUID;
- (id)target;

@end