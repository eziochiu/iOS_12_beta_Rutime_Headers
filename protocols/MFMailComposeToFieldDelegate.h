/* made by EzioChiu.
 */

@protocol MFMailComposeToFieldDelegate <NSObject>

@required

- (bool)shouldShowSMIMEButton;
- (void)tappedSMIMEButton;

@end
