/* made by EzioChiu.
 */

@protocol CXAudioSessionActivationStateObserver <NSObject>

@required

- (oneway void)handleAudioSessionActivationStateChangedTo:(bool)arg1;

@end
