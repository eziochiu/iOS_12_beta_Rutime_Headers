/* made by EzioChiu.
 */

@protocol _CPCardViewDisappearFeedback <NSObject>

@required

- (int)cardDisappearEvent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCardDisappearEvent:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
