/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {
    NSMutableArray * _constraints;
    <HUAboutResidentDeviceFooterViewDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _messageInsets;
    UITextView * _messageView;
}

@property (nonatomic, retain) NSMutableArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAboutResidentDeviceFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } messageInsets;
@property (nonatomic, retain) UITextView *messageView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_linkTextAttributes;
- (void)_setupViews;
- (id)_textAttributes;
- (id)constraints;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })messageInsets;
- (id)messageView;
- (void)setConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMessageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateConstraints;

@end
