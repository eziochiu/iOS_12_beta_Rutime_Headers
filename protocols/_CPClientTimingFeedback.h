/* made by EzioChiu.
 */

@protocol _CPClientTimingFeedback <NSObject>

@required

- (NSString *)eventName;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (unsigned long long)nanosecondInterval;
- (unsigned long long)queryId;
- (void)setEventName:(NSString *)arg1;
- (void)setInput:(NSString *)arg1;
- (void)setNanosecondInterval:(unsigned long long)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
