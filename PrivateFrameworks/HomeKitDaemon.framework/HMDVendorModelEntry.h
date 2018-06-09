/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVendorModelEntry : HMFObject {
    NSString * _appBundleID;
    NSString * _appStoreID;
    NSString * _category;
    NSString * _certificationStatus;
    HMDAccessoryVersion * _firmwareVersion;
    NSString * _manufacturer;
    NSString * _modelName;
    NSString * _ppid;
}

@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSString *appStoreID;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *certificationStatus;
@property (nonatomic, readonly) HMDAccessoryVersion *firmwareVersion;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *ppid;

- (void).cxx_destruct;
- (id)appBundleID;
- (id)appStoreID;
- (id)category;
- (id)certificationStatus;
- (id)description;
- (id)firmwareVersion;
- (id)initWithModelName:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 certificationStatus:(id)arg4 ppid:(id)arg5 appBundleID:(id)arg6 appStoreID:(id)arg7 firmwareVersion:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)modelName;
- (id)ppid;

@end
