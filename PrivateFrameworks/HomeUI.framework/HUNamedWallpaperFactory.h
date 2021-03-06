/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUNamedWallpaperFactory : NSObject <HFNamedWallpaperSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_defaultBlackWallpaperImage;

- (id)allWallpapersForCollection:(long long)arg1;
- (id)defaultWallpaperForCollection:(long long)arg1;
- (id)imageForWallpaper:(id)arg1;

@end
