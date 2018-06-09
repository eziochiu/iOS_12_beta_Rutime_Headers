/* made by EzioChiu.
 */

@protocol SBFProceduralWallpaperDelegate <NSObject>

@required

- (void)wallpaper:(id <SBFProceduralWallpaper>)arg1 didComputeAverageColor:(UIColor *)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)wallpaper:(id <SBFProceduralWallpaper>)arg1 didGenerateBlur:(struct __IOSurface { }*)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end