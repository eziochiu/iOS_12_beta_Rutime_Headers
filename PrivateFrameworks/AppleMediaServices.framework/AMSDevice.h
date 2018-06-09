/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDevice : NSObject

+ (id)MLBSerialNumber;
+ (id)_compatibleProductType;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (id)_systemVersionDictionary;
+ (id)buildVersion;
+ (id)deviceGUID;
+ (bool)deviceIsAppleTV;
+ (bool)deviceIsAppleWatch;
+ (bool)deviceIsAudioAccessory;
+ (bool)deviceIsInternalBuild;
+ (bool)deviceIsSeedBuild;
+ (bool)deviceIsiPad;
+ (bool)deviceIsiPhone;
+ (bool)deviceIsiPod;
+ (id)deviceOffers;
+ (bool)deviceOffersContainProductType:(unsigned long long)arg1;
+ (bool)deviceOffersContainType:(unsigned long long)arg1;
+ (id)deviceOffersForProductType:(unsigned long long)arg1;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (bool)expressedIntent;
+ (id)hardwarePlatform;
+ (bool)isEligibleForOffers;
+ (bool)isGift;
+ (id)localIPAddress;
+ (id)macAddress;
+ (id)macAddressData;
+ (id)productType;
+ (id)productVersion;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (id)serialNumber;
+ (bool)shouldPresentSetupOffersForAccount:(id)arg1;
+ (id)thinnedAppVariantId;
+ (id)uniqueDeviceId;

@end
