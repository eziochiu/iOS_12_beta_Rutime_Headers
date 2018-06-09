/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheZone : HMFObject {
    NSMutableArray * _actualGroups;
    NSMutableArray * _actualShares;
    long long  _zoneID;
    NSString * _zoneName;
}

@property (retain) NSMutableArray *actualGroups;
@property (retain) NSMutableArray *actualShares;
@property (readonly) NSArray *groups;
@property (readonly) NSArray *shares;
@property (readonly) long long zoneID;
@property (readonly) NSString *zoneName;

- (void).cxx_destruct;
- (id)actualGroups;
- (id)actualShares;
- (id)dumpDebug;
- (id)groups;
- (id)initWithZoneID:(long long)arg1 name:(id)arg2;
- (void)setActualGroups:(id)arg1;
- (void)setActualShares:(id)arg1;
- (id)shares;
- (long long)zoneID;
- (id)zoneName;

@end