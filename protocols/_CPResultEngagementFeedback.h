/* made by EzioChiu.
 */

@protocol _CPResultEngagementFeedback <NSObject>

@required

- (bool)actionEngaged;
- (int)actionTarget;
- (int)destination;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (bool)matchesUnengagedSuggestion;
- (_CPSearchResultForFeedback *)result;
- (void)setActionEngaged:(bool)arg1;
- (void)setActionTarget:(int)arg1;
- (void)setDestination:(int)arg1;
- (void)setMatchesUnengagedSuggestion:(bool)arg1;
- (void)setResult:(_CPSearchResultForFeedback *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTitleText:(NSString *)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (NSString *)titleText;
- (int)triggerEvent;

@end
