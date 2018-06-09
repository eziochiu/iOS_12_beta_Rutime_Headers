/* made by EzioChiu.
 */

@protocol PXFeedbackFormDelegate <NSObject>

@required

- (NSString *)longTitleText;
- (NSArray *)negativeFeedbackKeys;
- (NSArray *)positiveFeedbackKeys;
- (bool)shouldDisplaySecondaryFeedbackButtons;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (void)userSentPositiveFeedback:(NSDictionary *)arg1 negativeFeedback:(NSDictionary *)arg2 customFeedback:(NSString *)arg3;
- (NSString *)viewTitleForRadar;

@optional

- (bool)shouldContinuePresentingFormAfterFeedback;
- (bool)wantsCustomFeedbackSection;
- (bool)wantsPositiveFeedbackSection;

@end
