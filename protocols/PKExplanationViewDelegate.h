/* made by EzioChiu.
 */

@protocol PKExplanationViewDelegate <NSObject>

@optional

- (void)explanationViewDidSelectContinue:(PKExplanationView *)arg1;
- (void)explanationViewDidSelectSetupLater:(PKExplanationView *)arg1;

@end
