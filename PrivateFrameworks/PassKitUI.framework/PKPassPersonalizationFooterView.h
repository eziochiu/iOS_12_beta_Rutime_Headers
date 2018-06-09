/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPersonalizationFooterView : UIView <UITextViewDelegate> {
    <PKPassPersonalizationFooterViewDelegate> * _delegate;
    UITextView * _privacyTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPersonalizationFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithOrganizationName:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
