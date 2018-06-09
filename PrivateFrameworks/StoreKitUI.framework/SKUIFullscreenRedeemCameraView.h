/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {
    <SKUIRedeemCameraViewDelegate> * _delegate;
    bool  _enabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardRect;
    UIView * _overlay;
    UIView * _redeemerView;
    SKUIRedeemTextField * _textField;
    _UIBackdropView * _textFieldSafeAreaBackdrop;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIRedeemCameraViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_hideKeyboard;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_pauseRedeemer;
- (void)_resumeRedeemer;
- (void)_tapGestureAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (id)image;
- (id)initWithClientContext:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)showKeyboard;
- (void)start;
- (id)text;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
