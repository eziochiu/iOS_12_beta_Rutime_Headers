/* made by EzioChiu.
 */

@protocol WLKUIScorecardViewDelegate <NSObject>

@required

- (double)maximumInteritemSpacingInScorecardView:(WLKUIScorecardView *)arg1;
- (double)maximumWidthForScorecardView:(WLKUIScorecardView *)arg1;
- (double)minimumInteritemSpacingInScorecardView:(WLKUIScorecardView *)arg1;
- (long long)numberOfElementsForScorecardView:(WLKUIScorecardView *)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(WLKUIScorecardView *)arg1;
- (double)rowSpacingInScorecardView:(WLKUIScorecardView *)arg1;
- (long long)styleForScorecardView:(WLKUIScorecardView *)arg1;
- (TVViewElement *)viewElementForScorecard:(WLKUIScorecardView *)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;

@optional

- (int)backgroundBlendModeForElementInRow:(long long)arg1 atIndex:(long long)arg2;
- (UIImage *)backgroundImageForScorecardViewMaterial:(WLKUIScorecardView *)arg1;

@end
