/* made by EzioChiu.
 */

@protocol CKBrowserDragViewControllerDelegate <NSObject>

@required

- (void)browserDragViewController:(CKBrowserDragViewController *)arg1 dragEndedWithTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)browserDragViewController:(CKBrowserDragViewController *)arg1 draggedWithTarget:(CKBrowserDragControllerTarget *)arg2;

@end
