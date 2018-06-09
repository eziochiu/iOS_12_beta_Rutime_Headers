/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDismissView : UIView {
    <CKDismissViewDelegate> * _delegate;
    NSArray * _passthroughViews;
}

@property (nonatomic) <CKDismissViewDelegate> *delegate;
@property (nonatomic, copy) NSArray *passthroughViews;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)passthroughViews;
- (void)setDelegate:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
