/* made by EzioChiu.
 */

@protocol TPBackgroundLayoutControllerDelegate

@required

- (void)backgroundLayoutDidEnd;
- (bool)backgroundLayoutWillBegin;
- (bool)performBackgroundLayout;

@end
