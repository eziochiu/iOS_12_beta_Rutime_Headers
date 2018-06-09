/* made by EzioChiu.
 */

@protocol WBSParsecSearchSession <NSObject>

@required

- (WBSCompletionQuery *)currentQuery;
- (<WBSParsecSearchSessionDelegate> *)delegate;
- (<WBSParsecFeedbackDispatcher> *)feedbackDispatcher;
- (bool)isValid;
- (void)setCurrentQuery:(WBSCompletionQuery *)arg1;
- (void)setDelegate:(id <WBSParsecSearchSessionDelegate>)arg1;
- (void)setUIScale:(double)arg1;
- (double)uiScale;

@end
