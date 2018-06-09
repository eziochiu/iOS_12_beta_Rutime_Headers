/* made by EzioChiu.
 */

@protocol _CPMapsCardSectionEngagementFeedback <NSObject>

@required

- (int)actionCardType;
- (NSString *)cardSectionId;
- (_CPPunchoutForFeedback *)destination;
- (int)feedbackType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)resultId;
- (void)setActionCardType:(int)arg1;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setDestination:(_CPPunchoutForFeedback *)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setResultId:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;

@end
