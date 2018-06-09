/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceInfo : NSObject

+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
+ (id)currentInfo;
+ (bool)hasiCloudSignOutRestriction;
+ (id)infoDictionary;
+ (bool)isInternalBuild;
+ (bool)isMultiUserMode;
+ (id)osVersion;
+ (id)productVersion;
+ (id)serialNumber;
+ (id)udid;
+ (id)userAgentHeader;

- (id)apnsToken;
- (id)appleIDClientIdentifier;
- (id)bluetoothMacAddress;
- (id)buildVersion;
- (id)chipIdentifier;
- (id)clientInfoHeader;
- (id)deviceBackingColor;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceCoverGlassColor;
- (id)deviceEnclosureColor;
- (id)deviceHousingColor;
- (id)deviceInfoDictionary;
- (id)deviceName;
- (bool)hasCellularCapability;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (id)modelNumber;
- (id)osName;
- (id)osVersion;
- (id)productType;
- (id)productVersion;
- (id)regionCode;
- (id)serialNumber;
- (id)storageCapacity;
- (id)udid;
- (id)uniqueChipIdentifier;
- (id)userAgentHeader;
- (id)wifiMacAddress;

@end
