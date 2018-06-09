/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUIHeaderBlurView : UIVisualEffectView {
    bool  _useInPlaceFilteredBlur;
}

@property (nonatomic) bool useInPlaceFilteredBlur;

- (id)init;
- (void)setTintColor:(id)arg1;
- (void)setUseInPlaceFilteredBlur:(bool)arg1;
- (void)updateEffect;
- (bool)useInPlaceFilteredBlur;

@end
