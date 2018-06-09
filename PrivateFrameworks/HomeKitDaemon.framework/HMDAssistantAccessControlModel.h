/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSArray *accessoryModelIDs;
@property (nonatomic, retain) NSString *changeTag;
@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) NSNumber *options;

+ (id)properties;

- (id)dependentUUIDs;

@end
