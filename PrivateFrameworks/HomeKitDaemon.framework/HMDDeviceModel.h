/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceModel : HMDBackingStoreModelObject

@property (nonatomic, readonly) NSArray *deviceHandles;
@property (nonatomic, retain) NSArray *handles;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) HMFProductInfo *productInfo;
@property (nonatomic, retain) HMDHomeKitVersion *version;

+ (id)properties;

- (id)deviceHandles;
- (bool)diff:(id)arg1 differingFields:(id*)arg2;

@end
