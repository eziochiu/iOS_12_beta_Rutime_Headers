/* made by EzioChiu.
 */

@protocol MNVoiceEventQueueDelegate <NSObject>

@optional

- (void)voiceEventQueue:(MNVoiceEventQueue *)arg1 wantsToImmediatelyPlayEvent:(MNVoiceEvent *)arg2;

@end
