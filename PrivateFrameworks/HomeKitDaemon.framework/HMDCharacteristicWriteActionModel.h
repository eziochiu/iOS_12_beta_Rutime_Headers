/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicWriteActionModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *accessory;
@property (nonatomic, retain) NSNumber *characteristicID;
@property (nonatomic, retain) NSNumber *serviceID;
@property (nonatomic, retain) id targetValue;

+ (id)properties;

- (id)dependentUUIDs;
- (void)loadModelWithActionInformation:(id)arg1;

@end
