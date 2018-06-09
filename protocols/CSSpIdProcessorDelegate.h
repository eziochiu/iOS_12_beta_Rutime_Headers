/* made by EzioChiu.
 */

@protocol CSSpIdProcessorDelegate <NSObject>

@required

- (void)speakerIdProcessor:(CSSpIdProcessor *)arg1 hasSpeakerIdInfo:(NSDictionary *)arg2;
- (void)speakerIdProcessorFinishedProcessing:(CSSpIdProcessor *)arg1 withSpeakerInfo:(NSDictionary *)arg2;

@end
