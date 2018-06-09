/* made by EzioChiu.
 */

@protocol VTUITrainingManagerDelegate <NSObject>

@optional

- (void)VTUITrainingManagerAudioSessionRouteChange;
- (void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
- (void)VTUITrainingManagerFeedLevel:(float)arg1;
- (void)VTUITrainingManagerStopListening;

@end
