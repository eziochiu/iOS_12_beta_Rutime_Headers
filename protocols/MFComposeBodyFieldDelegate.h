/* made by EzioChiu.
 */

@protocol MFComposeBodyFieldDelegate

@required

- (void)composeBodyFieldDidDraw:(MFComposeBodyField *)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(MFComposeBodyField *)arg1;
- (void)composeBodyFieldFrameChanged:(MFComposeBodyField *)arg1;

@end
