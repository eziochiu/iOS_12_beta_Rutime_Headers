/* made by EzioChiu.
 */

@protocol MiroMediaItem <NSObject>

@required

- (PHAsset *)asset;
- (double)duration;
- (double)startTime;

@end
