/* made by EzioChiu.
 */

@protocol _CPProcessableFeedback <_CPFeedbackJSONObject>

@required

- (bool)requiresQueryId;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
