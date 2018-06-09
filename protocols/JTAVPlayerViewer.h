/* made by EzioChiu.
 */

@protocol JTAVPlayerViewer <NSObject>

@required

- (struct CGSize { double x1; double x2; })displaySize;
- (bool)isReadyForDisplay;
- (AVPlayer *)player;
- (<JTAVPlayerViewerDelegate> *)playerViewDelegate;
- (void)setPlayer:(AVPlayer *)arg1;
- (void)setPlayerViewDelegate:(id <JTAVPlayerViewerDelegate>)arg1;
- (void)setVideoGravity:(NSString *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (NSString *)videoGravity;

@end
