/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STScrollView : TSDScrollView {
    STAXCustomRotorProvider * _customRotorProvider;
    <STScrollViewDelegate> * _scrollViewDelegate;
}

@property (nonatomic, retain) STAXCustomRotorProvider *customRotorProvider;
@property (nonatomic, readonly) bool isBouncing;
@property (nonatomic) <STScrollViewDelegate> *scrollViewDelegate;

- (void).cxx_destruct;
- (id)accessibilityCustomRotors;
- (id)customRotorProvider;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBouncing;
- (id)scrollViewDelegate;
- (void)setCustomRotorProvider:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
