/* made by EzioChiu.
 */

@protocol MPAVControllerNode <NSObject>

@required

- (void)lockPlayer;
- (MPAVController *)player;
- (void)setPlayer:(MPAVController *)arg1;
- (void)unlockPlayer;

@end
