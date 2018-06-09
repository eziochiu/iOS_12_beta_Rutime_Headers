/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRControlView_Internal : UIView <TVRTouchProcessorDelegate, _TVRButtonsViewDelegate, _TVRDropDownViewDelegate> {
    _TVRButtonsView * _buttonsView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _continuousCornerRadius;
    <_TVRControlViewInternalDelegate> * _delegate;
    _TVRDropDownView * _dropdownView;
    _TVRMessageView * _messageView;
    UIView * _psuedoTouchpadView;
    TVRTouchProcessor * _touchProcessor;
    UIView * _touchpadClippingView;
    TVRTouchpadView * _touchpadView;
}

@property (nonatomic, retain) _TVRButtonsView *buttonsView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVRControlViewInternalDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _TVRDropDownView *dropdownView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long messageType;
@property (nonatomic, retain) _TVRMessageView *messageView;
@property (nonatomic, retain) UIView *psuedoTouchpadView;
@property (readonly) Class superclass;
@property (nonatomic, retain) TVRTouchProcessor *touchProcessor;
@property (nonatomic, retain) UIView *touchpadClippingView;
@property (nonatomic) TVRTouchpadView *touchpadView;

- (void).cxx_destruct;
- (void)_applyCornerRadius:(double)arg1;
- (id)buttonsView;
- (void)buttonsView:(id)arg1 generatedbuttonEvent:(id)arg2;
- (void)buttonsViewRequestedKeyboardPresentation:(id)arg1;
- (void)clearMessageContent;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)continuousCornerRadius;
- (id)delegate;
- (void)didChangeToExpanded:(bool)arg1;
- (void)disableAllButtons;
- (void)disableButtonsAndSetTitle:(id)arg1;
- (id)dropdownView;
- (void)dropdownView:(id)arg1 didUpdateState:(bool)arg2;
- (void)dropdownView:(id)arg1 selectedDevice:(id)arg2;
- (void)enableButtons:(id)arg1;
- (void)expandPicker:(bool)arg1;
- (void)hidePicker:(bool)arg1;
- (id)init;
- (void)layoutSubviews;
- (unsigned long long)messageType;
- (id)messageView;
- (id)psuedoTouchpadView;
- (void)setButtonsView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setDropdownView:(id)arg1;
- (void)setMessageView:(id)arg1;
- (void)setPsuedoTouchpadView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTouchProcessor:(id)arg1;
- (void)setTouchpadClippingView:(id)arg1;
- (void)setTouchpadView:(id)arg1;
- (void)showKeyboardButton:(bool)arg1;
- (void)showLoadingSpinner;
- (void)showMessageWithError:(id)arg1 andDevice:(id)arg2;
- (void)showMessageWithTitle:(id)arg1 message:(id)arg2;
- (void)showNoAssociatedNetworkMessage;
- (void)showNoWIFIConnectionMessage;
- (void)showSearchingSpinner;
- (void)supportedButtonsAdded:(id)arg1 removed:(id)arg2;
- (id)touchProcessor;
- (void)touchProcessor:(id)arg1 generatedButtonEvent:(id)arg2;
- (void)touchProcessor:(id)arg1 generatedGameControllerEvent:(id)arg2;
- (void)touchProcessor:(id)arg1 generatedTouchEvent:(id)arg2;
- (id)touchpadClippingView;
- (id)touchpadView;

@end
