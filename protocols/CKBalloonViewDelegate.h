/* made by EzioChiu.
 */

@protocol CKBalloonViewDelegate <NSObject>

@required

- (void)balloonViewDoubleTapped:(CKBalloonView *)arg1;
- (void)balloonViewLongTouched:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)liveBalloonTouched:(CKBalloonView *)arg1;

@optional

- (void)tuConversationBalloonJoinButtonTapped:(CKBalloonView *)arg1;

@end
