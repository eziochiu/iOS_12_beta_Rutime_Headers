/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlatform : NSObject

+ (bool)isRunningInGeod;
+ (void)setIsRunningInGeod:(bool)arg1;
+ (id)sharedPlatform;

- (bool)_deviceSupportsNavigation;
- (id)buildVersion;
- (id)clientCapabilities;
- (long long)deviceScreenHeightInPixels;
- (double)deviceScreenScale;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareIdentifier;
- (id)hardwareModel;
- (bool)isCellDataPossible;
- (bool)isInternalInstall;
- (bool)mapsFeatureFreedomEnabled;
- (id)osVersion;
- (id)productName;
- (bool)supportsForceTouch;
- (bool)supportsNavigation;
- (bool)supportsNewiOS9Features;
- (bool)supportsRealisticTiles;

@end
