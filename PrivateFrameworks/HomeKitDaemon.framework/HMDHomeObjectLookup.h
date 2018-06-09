/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol> {
    HMDHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_scanAccessoriesAndServices;
- (void)_scanActionSets;
- (void)_scanMediaSystems;
- (void)_scanResidentDevices;
- (void)_scanRooms;
- (void)_scanServiceGroups;
- (void)_scanSetting:(id)arg1;
- (void)_scanSettingGroup:(id)arg1;
- (void)_scanTriggers;
- (void)_scanUsers;
- (void)_scanZones;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)scanObjects;

@end