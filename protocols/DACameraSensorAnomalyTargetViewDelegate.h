/* made by EzioChiu.
 */

@protocol DACameraSensorAnomalyTargetViewDelegate <NSObject>

@required

- (void)cancelTapped;
- (void)takePicture;

@end
