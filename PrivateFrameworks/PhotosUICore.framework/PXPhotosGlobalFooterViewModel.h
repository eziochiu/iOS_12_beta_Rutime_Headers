/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosGlobalFooterViewModel : PXObservable {
    UIView * _accessoryView;
    id /* block */  _action;
    NSString * _actionConfirmationAlertButtonTitle;
    NSString * _actionConfirmationAlertTitle;
    long long  _actionStyle;
    NSString * _actionTitle;
    bool  _isPaused;
    <PXPhotosGlobalFooterViewModelPresentationDelegate> * _presentingDelegate;
    double  _progress;
    NSString * _subtitle1;
    NSString * _subtitle2;
    NSString * _title;
}

@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic, readonly) id /* block */ action;
@property (nonatomic, readonly) NSString *actionConfirmationAlertButtonTitle;
@property (nonatomic, readonly) NSString *actionConfirmationAlertTitle;
@property (nonatomic, readonly) long long actionStyle;
@property (nonatomic, readonly) NSString *actionTitle;
@property (nonatomic, readonly) bool isPaused;
@property (nonatomic) <PXPhotosGlobalFooterViewModelPresentationDelegate> *presentingDelegate;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) NSString *subtitle1;
@property (nonatomic, readonly) NSString *subtitle2;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)accessoryView;
- (id /* block */)action;
- (id)actionConfirmationAlertButtonTitle;
- (id)actionConfirmationAlertTitle;
- (long long)actionStyle;
- (id)actionTitle;
- (id)init;
- (bool)isPaused;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (id)presentingDelegate;
- (double)progress;
- (void)setAccessoryView:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setActionConfirmationAlertButtonTitle:(id)arg1;
- (void)setActionConfirmationAlertTitle:(id)arg1;
- (void)setActionStyle:(long long)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setSubtitle1:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle1;
- (id)subtitle2;
- (id)title;

@end
