/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKUIActionSheet : TSKAbstractAlert <UIActionSheetDelegate> {
    UIActionSheet * _actionSheet;
    UIView * _targetView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)alertWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (long long)addButtonWithTitle:(id)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (void)dealloc;
- (void)didPresentActionSheet:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)firstOtherButtonIndex;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5;
- (long long)numberOfButtons;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)showAlert;
- (void)willPresentActionSheet:(id)arg1;

@end
