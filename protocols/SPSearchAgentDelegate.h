/* made by EzioChiu.
 */

@protocol SPSearchAgentDelegate

@required

- (void)searchAgentClearedResults:(SPUISearchModel *)arg1;
- (void)searchAgentUpdatedResults:(SPUISearchModel *)arg1;

@end
