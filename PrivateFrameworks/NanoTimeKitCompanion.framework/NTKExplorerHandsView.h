/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKExplorerHandsView : NTKAnalogHandsView {
    CALayer * _secondHandDot;
    UIColor * _secondHandDotColor;
}

@property (nonatomic, retain) UIColor *secondHandDotColor;

- (void).cxx_destruct;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (id)secondHandDotColor;
- (void)setInlayColor:(id)arg1;
- (void)setSecondHandDotColor:(id)arg1;

@end
