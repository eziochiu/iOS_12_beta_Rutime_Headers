/* made by EzioChiu.
 */

@protocol CKLocationShareBalloonViewDelegate <CKBalloonViewDelegate>

@required

- (void)locationShareBalloonViewIgnoreButtonTapped:(CKLocationShareBalloonView *)arg1;
- (void)locationShareBalloonViewShareButtonTapped:(CKLocationShareBalloonView *)arg1;

@end
