/* made by EzioChiu.
 */

@protocol NTKAVListing <NSObject>

@required

- (void)discardAssets;
- (UIImage *)image;
- (bool)snapshotDiffers:(id <NTKAVListing>)arg1;
- (CLKVideo *)video;

@end
