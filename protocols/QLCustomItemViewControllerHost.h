/* made by EzioChiu.
 */

@protocol QLCustomItemViewControllerHost <NSObject>

@required

- (void)dismissQuickLook;
- (void)presentShareSheetWithPopoverTracker:(void *)arg1 dismissCompletion:(void *)arg2; // needs 2 arg types, found 6: <QLRemotePopoverTracker> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setFullScreen:(bool)arg1;

@end
