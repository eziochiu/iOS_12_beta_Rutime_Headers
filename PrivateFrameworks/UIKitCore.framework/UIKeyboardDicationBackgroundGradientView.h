/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory> {
    UIDictationView * _dictationView;
    UIKBRenderConfig * _renderConfig;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIDictationView *dictationView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFillFrame;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)backgroundColorForCurrentRenderConfig;
- (void)dealloc;
- (id)dictationView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)renderConfig;
- (void)setDictationView:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)startColorTransitionIn;
- (void)startColorTransitionOut;

@end
