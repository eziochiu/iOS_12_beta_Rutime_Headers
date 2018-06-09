/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *confirmed;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) HMDDeviceHandle *deviceHandle;
@property (nonatomic, retain) NSString *deviceUUID;
@property (nonatomic, retain) NSNumber *enabled;

+ (id)properties;

@end
