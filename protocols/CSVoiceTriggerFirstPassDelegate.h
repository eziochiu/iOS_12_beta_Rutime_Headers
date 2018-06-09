/* made by EzioChiu.
 */

@protocol CSVoiceTriggerFirstPassDelegate <NSObject>

@required

- (void)voiceTriggerFirstPass:(CSVoiceTriggerFirstPass *)arg1 didDetectKeyword:(NSDictionary *)arg2;

@end
