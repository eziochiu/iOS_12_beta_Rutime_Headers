/* made by EzioChiu.
 */

@protocol WFLWorkflowControllerDelegate <NSObject>

@optional

- (void)workflowController:(WFLWorkflowController *)arg1 didRunAction:(WFLAction *)arg2;
- (<WFLActionUserInterface> *)workflowController:(WFLWorkflowController *)arg1 userInterfaceForRunningAction:(WFLAction *)arg2;
- (void)workflowController:(void *)arg1 willRunAction:(void *)arg2 withInput:(void *)arg3 proceedHandler:(void *)arg4; // needs 4 arg types, found 8: WFLWorkflowController *, WFLAction *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)workflowControllerDidFinishRunning:(WFLWorkflowController *)arg1 withOutput:(NSArray *)arg2;
- (void)workflowControllerDidStop:(WFLWorkflowController *)arg1 withError:(NSError *)arg2;
- (void)workflowControllerWillRun:(WFLWorkflowController *)arg1;

@end
