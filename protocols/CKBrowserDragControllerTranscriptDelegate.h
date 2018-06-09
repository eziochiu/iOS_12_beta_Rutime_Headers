/* made by EzioChiu.
 */

@protocol CKBrowserDragControllerTranscriptDelegate <NSObject>

@required

- (void)dragManager:(CKBrowserDragManager *)arg1 draggedItemWithTarget:(CKBrowserDragControllerTarget *)arg2;
- (int)dragManager:(CKBrowserDragManager *)arg1 dropAreaForDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)dragManagerDidBeginDragging:(CKBrowserDragManager *)arg1;
- (void)dragManagerDidEndDragging:(CKBrowserDragManager *)arg1;

@end
