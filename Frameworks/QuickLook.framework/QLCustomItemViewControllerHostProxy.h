/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLCustomItemViewControllerHostProxy : NSObject <QLCustomItemViewControllerHost> {
    <QLCustomItemViewControllerHost> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <QLCustomItemViewControllerHost> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissQuickLook;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 dismissCompletion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFullScreen:(bool)arg1;

@end
