/* made by EzioChiu.
 */

@protocol VUIScorecardViewDelegate <NSObject>

@required

- (double)maximumWidthForScorecardView:(VUIScorecardView *)arg1;
- (long long)numberOfElementsForScorecardView:(VUIScorecardView *)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(VUIScorecardView *)arg1;
- (long long)styleForScorecardView:(VUIScorecardView *)arg1;
- (TVViewElement *)viewElementForScorecard:(VUIScorecardView *)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;

@optional

- (int)backgroundBlendModeForElementInRow:(long long)arg1 atIndex:(long long)arg2;
- (UIImage *)backgroundImageForScorecardViewMaterial:(VUIScorecardView *)arg1;

@end
