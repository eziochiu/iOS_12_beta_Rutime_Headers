/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, retain) NSDate *dateIrisWallpaperLastPlayed;
@property (nonatomic, retain) NSData *homeScreenColorData;
@property (nonatomic, retain) NSString *homeScreenColorName;
@property (nonatomic, retain) NSString *homeScreenCropRectString;
@property (nonatomic) bool homeScreenMagnifyEnabled;
@property (nonatomic) double homeScreenParallaxFactor;
@property (nonatomic) bool homeScreenPortrait;
@property (nonatomic) bool homeScreenSupportsCropping;
@property (nonatomic, retain) NSString *homeScreenWallpaperIdentifier;
@property (nonatomic, retain) NSString *homeScreenWallpaperName;
@property (nonatomic, retain) NSDictionary *homeScreenWallpaperOptions;
@property (nonatomic) bool homeScreenWallpaperWasUserSet;
@property (nonatomic) double homeScreenZoomScale;
@property (nonatomic) unsigned long long irisWallpaperPlayCount;
@property (nonatomic, readonly) bool legacyUsesUniqueHomeScreenWallpaper;
@property (nonatomic, retain) NSData *lockScreenColorData;
@property (nonatomic, retain) NSString *lockScreenColorName;
@property (nonatomic, retain) NSString *lockScreenCropRectString;
@property (nonatomic) bool lockScreenHasVideo;
@property (nonatomic) bool lockScreenMagnifyEnabled;
@property (nonatomic) double lockScreenParallaxFactor;
@property (nonatomic) bool lockScreenPortrait;
@property (nonatomic) double lockScreenStillTimeInVideo;
@property (nonatomic) bool lockScreenSupportsCropping;
@property (nonatomic, retain) NSString *lockScreenWallpaperIdentifier;
@property (nonatomic, retain) NSString *lockScreenWallpaperName;
@property (nonatomic, retain) NSDictionary *lockScreenWallpaperOptions;
@property (nonatomic) bool lockScreenWallpaperWasUserSet;
@property (nonatomic) double lockScreenZoomScale;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
