/* made by EzioChiu.
 */

@protocol CSSelfTriggerDetectorDelegate <NSObject>

@required

- (void)selfTriggerDetector:(CSSelfTriggerDetector *)arg1 didDetectSelfTrigger:(NSDictionary *)arg2;

@end
