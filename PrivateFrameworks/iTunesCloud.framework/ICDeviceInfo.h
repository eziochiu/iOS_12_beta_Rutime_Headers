/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDeviceInfo : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _buildVersion;
    NSString * _currentLocale;
    int  _deviceClass;
    NSString * _deviceGUID;
    NSData * _deviceGUIDData;
    NSString * _deviceModel;
    unsigned int  _fairPlayDeviceType;
    NSString * _hardwarePlatform;
    struct atomic_flag { 
        bool _Value; 
    }  _hasRegisteredForNameNotifications;
    struct CGSize { 
        double width; 
        double height; 
    }  _mainScreenSize;
    NSString * _name;
    struct MGNotificationTokenStruct { } * _nameNotificationToken;
    NSString * _pairedDeviceGUID;
    NSString * _productVersion;
    NSString * _rawDeviceModel;
    NSString * _serialNumber;
    NSString * _systemReleaseType;
}

@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *currentLocale;
@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly, copy) NSString *deviceGUID;
@property (nonatomic, readonly, copy) NSData *deviceGUIDData;
@property (nonatomic, readonly, copy) NSString *deviceModel;
@property (nonatomic, readonly) unsigned int fairPlayDeviceType;
@property (nonatomic, readonly, copy) NSString *hardwarePlatform;
@property (getter=isInternalBuild, nonatomic, readonly) bool internalBuild;
@property (nonatomic, readonly) bool isAppleTV;
@property (nonatomic, readonly) bool isAudioAccessory;
@property (nonatomic, readonly) bool isIPad;
@property (nonatomic, readonly) bool isIPhone;
@property (nonatomic, readonly) bool isIPod;
@property (nonatomic, readonly) bool isWatch;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mainScreenSize;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *pairedDeviceGUID;
@property (nonatomic, readonly, copy) NSString *productPlatform;
@property (nonatomic, readonly, copy) NSString *productVersion;
@property (nonatomic, readonly, copy) NSString *rawDeviceModel;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly, copy) NSString *systemReleaseType;

+ (id)currentDeviceInfo;
+ (id)defaultInfo;

- (void).cxx_destruct;
- (int)_gestaltDeviceClass;
- (id)_init;
- (id)buildVersion;
- (id)currentLocale;
- (void)dealloc;
- (int)deviceClass;
- (id)deviceGUID;
- (id)deviceGUIDData;
- (id)deviceModel;
- (unsigned int)fairPlayDeviceType;
- (id)hardwarePlatform;
- (bool)isAppleTV;
- (bool)isAudioAccessory;
- (bool)isIPad;
- (bool)isIPhone;
- (bool)isIPod;
- (bool)isInternalBuild;
- (bool)isWatch;
- (struct CGSize { double x1; double x2; })mainScreenSize;
- (id)name;
- (id)pairedDeviceGUID;
- (id)productPlatform;
- (id)productVersion;
- (id)rawDeviceModel;
- (id)serialNumber;
- (id)systemReleaseType;

@end
