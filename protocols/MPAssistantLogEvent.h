/* made by EzioChiu.
 */

@protocol MPAssistantLogEvent <NSObject>

@required

- (long long)eventCode;
- (NSMutableDictionary *)eventPayload;

@end
