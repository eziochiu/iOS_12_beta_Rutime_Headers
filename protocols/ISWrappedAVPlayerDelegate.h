/* made by EzioChiu.
 */

@protocol ISWrappedAVPlayerDelegate <NSObject>

@required

- (void)avPlayer:(ISWrappedAVPlayer *)arg1 itemDidPlayToEnd:(AVPlayerItem *)arg2;
- (void)avPlayerDidDeallocate;

@end
