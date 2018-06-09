/* made by EzioChiu.
 */

@protocol VCAudioSessionDelegate <NSObject>

@optional

- (void)didSessionBeginQuietTime;
- (void)didSessionEnd;
- (void)didSessionEndQuietTime;
- (void)didSessionPause;
- (void)didSessionResume;
- (void)didSessionSampleRateChange;
- (void)didSessionStop;

@end
