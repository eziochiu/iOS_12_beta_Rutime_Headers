/* made by EzioChiu.
 */

@protocol HFNamedWallpaperSource <NSObject>

@required

- (NSArray *)allWallpapersForCollection:(long long)arg1;
- (HFWallpaper *)defaultWallpaperForCollection:(long long)arg1;
- (UIImage *)imageForWallpaper:(HFWallpaper *)arg1;

@end
