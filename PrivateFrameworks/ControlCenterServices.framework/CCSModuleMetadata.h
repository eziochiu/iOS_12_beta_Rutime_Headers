/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSModuleMetadata : NSObject <NSCopying> {
    NSString * _associatedBundleIdentifier;
    NSString * _associatedBundleMinimumVersion;
    NSURL * _moduleBundleURL;
    NSString * _moduleIdentifier;
    NSSet * _requiredDeviceCapabilities;
    NSSet * _supportedDeviceFamilies;
    unsigned long long  _visibilityPreference;
}

@property (nonatomic, readonly, copy) NSString *associatedBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *associatedBundleMinimumVersion;
@property (nonatomic, readonly, copy) NSURL *moduleBundleURL;
@property (nonatomic, readonly, copy) NSString *moduleIdentifier;
@property (nonatomic, readonly, copy) NSSet *requiredDeviceCapabilities;
@property (nonatomic, readonly, copy) NSSet *supportedDeviceFamilies;
@property (nonatomic, readonly) unsigned long long visibilityPreference;

+ (id)_requiredCapabilitiesForInfoDictionary:(id)arg1;
+ (id)_supportedDeviceFamiliesForBundleInfoDictionary:(id)arg1;
+ (unsigned long long)_visibilityPreferenceForBundleInfoDictionary:(id)arg1;
+ (id)metadataForBundleAtURL:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithModuleIdentifier:(id)arg1 supportedDeviceFamilies:(id)arg2 requiredDeviceCapabilities:(id)arg3 associatedBundleIdentifier:(id)arg4 associatedBundleMinimumVersion:(id)arg5 visibilityPreference:(unsigned long long)arg6 moduleBundleURL:(id)arg7;
- (id)associatedBundleIdentifier;
- (id)associatedBundleMinimumVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)moduleBundleURL;
- (id)moduleIdentifier;
- (id)requiredDeviceCapabilities;
- (id)supportedDeviceFamilies;
- (unsigned long long)visibilityPreference;

@end
