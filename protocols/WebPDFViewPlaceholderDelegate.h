/* made by EzioChiu.
 */

@protocol WebPDFViewPlaceholderDelegate

@required

- (struct CGPDFDocument { }*)cgPDFDocument;

@optional

- (void)didCompleteLayout;
- (void)viewWillClose;

@end
