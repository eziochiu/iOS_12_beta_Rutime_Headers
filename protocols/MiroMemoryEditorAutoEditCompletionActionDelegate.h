/* made by EzioChiu.
 */

@protocol MiroMemoryEditorAutoEditCompletionActionDelegate <NSObject>

@required

- (void)cancelAutoEditWaitingBehavior;
- (void)performAutoEditDidCompleteAction;
- (void)startAutoEditWaitingBehavior;

@end
