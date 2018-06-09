/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLRemoteService : SLService <NSSecureCoding> {
    NSString * _accountTypeIdentifier;
    UIImage * _activityImage;
    NSString * _activityImageName;
    NSString * _activityViewIconResourceName;
    bool  _addDeviceClassToRequest;
    long long  _authenticationStyle;
    NSString * _localizedServiceName;
    long long  _maximumImageCount;
    long long  _maximumImageDataSize;
    long long  _maximumURLCount;
    long long  _maximumVideoCount;
    long long  _maximumVideoDataSize;
    long long  _maximumVideoTimeLimit;
    NSBundle * _serviceBundle;
    NSURL * _serviceBundleURL;
    bool  _serviceRegionTargetIsChina;
    NSString * _serviceTypeIdentifier;
    NSSet * _supportedImageAssetURLSchemes;
    NSSet * _supportedVideoAssetURLSchemes;
}

@property (retain) NSString *accountTypeIdentifier;
@property (retain) NSString *activityImageName;
@property (retain) NSString *activityViewIconResourceName;
@property bool addDeviceClassToRequest;
@property long long authenticationStyle;
@property (retain) NSString *localizedServiceName;
@property long long maximumImageCount;
@property long long maximumImageDataSize;
@property long long maximumURLCount;
@property (nonatomic) long long maximumVideoCount;
@property long long maximumVideoDataSize;
@property long long maximumVideoTimeLimit;
@property (readonly) NSBundle *serviceBundle;
@property (retain) NSURL *serviceBundleURL;
@property bool serviceRegionTargetIsChina;
@property (retain) NSString *serviceTypeIdentifier;
@property (retain) NSSet *supportedImageAssetURLSchemes;
@property (retain) NSSet *supportedVideoAssetURLSchemes;

+ (id)_cachedServiceWithType:(id)arg1;
+ (id)_cachedServices;
+ (id)remoteServiceForTypeIdentifier:(id)arg1;
+ (id)remoteServices;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activityImageForImageResourceName:(id)arg1 inBundle:(id)arg2;
- (long long)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1;
- (id)_authenticationStyleIdentifierMappings;
- (id)_encodableStringProperties;
- (bool)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2;
- (bool)_isValidAuthenicationStyleIdentifier:(id)arg1;
- (id)_requiredInfoDictKeys;
- (id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;
- (id)accountTypeIdentifier;
- (id)activityImage;
- (id)activityImageName;
- (id)activityTitle;
- (id)activityViewIconResourceName;
- (bool)addDeviceClassToRequest;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (long long)authenticationStyle;
- (id)composeViewController;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)infoDictHasRequiredKeys:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2;
- (id)integerPropertyKeyMappings;
- (bool)isFirstClassService;
- (id)localizedServiceName;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumURLCount;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (id)serviceBundle;
- (id)serviceBundleURL;
- (bool)serviceRegionTargetIsChina;
- (id)serviceType;
- (id)serviceTypeIdentifier;
- (void)setAccountTypeIdentifier:(id)arg1;
- (void)setActivityImageName:(id)arg1;
- (void)setActivityViewIconResourceName:(id)arg1;
- (void)setAddDeviceClassToRequest:(bool)arg1;
- (void)setAuthenticationStyle:(long long)arg1;
- (void)setLocalizedServiceName:(id)arg1;
- (void)setMaximumImageCount:(long long)arg1;
- (void)setMaximumImageDataSize:(long long)arg1;
- (void)setMaximumURLCount:(long long)arg1;
- (void)setMaximumVideoCount:(long long)arg1;
- (void)setMaximumVideoDataSize:(long long)arg1;
- (void)setMaximumVideoTimeLimit:(long long)arg1;
- (void)setServiceBundleURL:(id)arg1;
- (void)setServiceRegionTargetIsChina:(bool)arg1;
- (void)setServiceTypeIdentifier:(id)arg1;
- (void)setSupportedImageAssetURLSchemes:(id)arg1;
- (void)setSupportedVideoAssetURLSchemes:(id)arg1;
- (id)supportedImageAssetURLSchemes;
- (id)supportedVideoAssetURLSchemes;
- (bool)supportsImageURL:(id)arg1;
- (bool)supportsVideoURL:(id)arg1;

@end
