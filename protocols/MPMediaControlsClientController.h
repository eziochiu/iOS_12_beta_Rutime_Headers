/* made by EzioChiu.
 */

@protocol MPMediaControlsClientController <NSObject>

@required

- (void)didReceiveInteraction;
- (void)didSelectRoute:(MPAVRoute *)arg1;
- (void)dismiss;

@end
