/* made by EzioChiu.
 */

@protocol SVPlayerItemFactory <NSObject>

@required

- (AVPlayerItem *)createPlayerItemWithAsset:(AVAsset *)arg1;

@end
