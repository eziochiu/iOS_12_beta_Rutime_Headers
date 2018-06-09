/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISUIActivityImageConfiguration : NSObject <NSSecureCoding> {
    _UIActivityBundleImageConfiguration * _bundleImageConfiguration;
    UIImage * _image;
    NSString * _imageCreationBundleIdentifier;
    bool  _isSettingsVariant;
}

@property (nonatomic) bool isSettingsVariant;

+ (id)configurationWithDefaultImage;
+ (id)configurationWithImageSpecifiedByBundleIdentifier:(id)arg1;
+ (id)configurationWithImageSpecifiedBySpecificBundleImage:(id)arg1;
+ (id)configurationWithImageSpecifiedBySpecificImage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 bundleImageConfiguration:(id)arg2 imageCreationBundleIdentifier:(id)arg3 isSettingsVariant:(bool)arg4;
- (bool)isSettingsVariant;
- (id)loadedActivityImage;
- (void)setIsSettingsVariant:(bool)arg1;

@end
