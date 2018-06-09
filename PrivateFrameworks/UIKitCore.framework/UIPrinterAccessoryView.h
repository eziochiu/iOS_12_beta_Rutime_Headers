/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterAccessoryView : UIView {
    <UIPrinterAccessoryViewDelegate> * _delegate;
    UIButton * _infoButton;
    int  _printerState;
    UIView * _statusView;
}

@property (nonatomic) <UIPrinterAccessoryViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *infoButton;
@property (nonatomic) int printerState;
@property (nonatomic, retain) UIView *statusView;

- (void).cxx_destruct;
- (id)delegate;
- (id)infoButton;
- (void)infoButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)printerState;
- (void)setDelegate:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setPrinterState:(int)arg1;
- (void)setStatusView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusView;

@end
