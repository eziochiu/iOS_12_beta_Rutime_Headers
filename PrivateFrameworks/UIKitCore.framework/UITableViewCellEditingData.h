/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableViewCellEditingData : NSObject {
    UITableViewCell * _cell;
    UITableViewCellDeleteConfirmationControl_Legacy * _deleteConfirmationControl;
    UITableViewCellEditControl * _editControl;
    long long  _editingStyle;
    UITableViewCellReorderControl * _reorderControl;
    UIView * _reorderSeparatorView;
}

@property (getter=isDataRequired, nonatomic, readonly) bool dataRequired;
@property (nonatomic, readonly) bool wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)deleteConfirmationControl:(bool)arg1;
- (id)editControl:(bool)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (bool)isDataRequired;
- (id)reorderControl:(bool)arg1;
- (id)reorderSeparatorView:(bool)arg1;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end
