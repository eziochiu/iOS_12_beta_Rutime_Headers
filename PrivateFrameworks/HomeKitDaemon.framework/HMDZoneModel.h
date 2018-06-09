/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDZoneModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *roomUUIDs;

+ (id)properties;

- (id)dependentUUIDs;

@end
