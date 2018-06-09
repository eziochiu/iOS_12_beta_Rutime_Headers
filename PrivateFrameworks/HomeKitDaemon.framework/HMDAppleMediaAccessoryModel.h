/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) NSString *deviceUUID;
@property (nonatomic, retain) NSData *loggedInAccount;
@property (nonatomic, retain) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, retain) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, retain) NSData *symptoms;
@property (nonatomic, retain) HMFWiFiNetworkInfo *wifiNetworkInfo;

+ (id)properties;

@end
