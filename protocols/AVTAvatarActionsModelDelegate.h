/* made by EzioChiu.
 */

@protocol AVTAvatarActionsModelDelegate <NSObject>

@required

- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didAddRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didCancelEditingRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsModel:(void *)arg1 didDeleteRecord:(void *)arg2 withRecordUpdate:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: AVTAvatarActionsModel *, <AVTAvatarRecord> *, AVTAvatarActionsRecordUpdate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionsModel:(void *)arg1 didDuplicateToRecord:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: AVTAvatarActionsModel *, <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didEditRecord:(id <AVTAvatarRecord>)arg2;
- (AVTAvatarActionsRecordUpdate *)actionsModel:(AVTAvatarActionsModel *)arg1 recordUpdateForDeletingRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsModel:(void *)arg1 shouldDeleteRecord:(void *)arg2 resultBlock:(void *)arg3; // needs 3 arg types, found 8: AVTAvatarActionsModel *, <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)actionsModelDidFinish:(AVTAvatarActionsModel *)arg1;
- (void)actionsModelDidUpdateInlineActionButtons:(AVTAvatarActionsModel *)arg1;
- (void)dismissEditorViewController:(void *)arg1 forActionsModel:(void *)arg2 wasCreate:(void *)arg3 didEdit:(void *)arg4 animated:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 10: AVTAvatarEditorViewController *, AVTAvatarActionsModel *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentEditorViewController:(AVTAvatarEditorViewController *)arg1 forActionsModel:(AVTAvatarActionsModel *)arg2 isCreate:(bool)arg3;

@end
