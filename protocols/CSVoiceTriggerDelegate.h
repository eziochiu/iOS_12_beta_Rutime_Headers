/* made by EzioChiu.
 */

@protocol CSVoiceTriggerDelegate <NSObject>

@required

- (void)voiceTriggerDidDetectKeyword:(NSDictionary *)arg1;

@optional

- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectNearMiss:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;

@end
