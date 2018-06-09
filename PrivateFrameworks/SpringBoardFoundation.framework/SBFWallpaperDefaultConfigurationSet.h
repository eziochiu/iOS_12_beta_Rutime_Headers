/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperDefaultConfigurationSet : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    SBFWallpaperDefaultConfiguration * _homeScreenDefaultWallpaperConfiguration;
    SBFWallpaperDefaultConfiguration * _lockScreenDefaultWallpaperConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBFWallpaperDefaultConfiguration *homeScreenDefaultWallpaperConfiguration;
@property (nonatomic, readonly) SBFWallpaperDefaultConfiguration *lockScreenDefaultWallpaperConfiguration;
@property (nonatomic, readonly) SBFWallpaperDefaultConfiguration *sharedDefaultWallpaperConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool variantsShareDefaultWallpaperConfiguration;

+ (id)defaultWallpaperBaseURL;
+ (id)defaultWallpaperConfigurationFromWallpaperDictionary:(id)arg1;
+ (id)defaultWallpaperConfigurationSetFromDefaultWallpaperDictionary:(id)arg1;
+ (id)defaultWallpaperConfigurationSetFromDirectoryURL:(id)arg1;
+ (id)defaultWallpaperDictionary;
+ (bool)supportsSecureCoding;
+ (id)systemDefaultConfigurationSet;
+ (id)verifiedPNGOrJPEGURLForImageName:(id)arg1 inDirectory:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultWallpaperConfigurationForVariant:(long long)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeScreenDefaultWallpaperConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockDefaultWallpaperConfiguration:(id)arg1 homeDefaultWallpaperConfiguration:(id)arg2;
- (id)initWithSharedDefaultWallpaperConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lockScreenDefaultWallpaperConfiguration;
- (id)sharedDefaultWallpaperConfiguration;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)variantsShareDefaultWallpaperConfiguration;

@end
