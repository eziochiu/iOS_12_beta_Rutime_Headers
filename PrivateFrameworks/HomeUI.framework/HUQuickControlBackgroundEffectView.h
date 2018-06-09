/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlBackgroundEffectView : UIView {
    unsigned long long  _effectType;
}

@property (nonatomic, readonly) unsigned long long effectType;

- (void)_configureForCurrentEffectType;
- (unsigned long long)effectType;
- (id)initWithEffectType:(unsigned long long)arg1;
- (void)tintColorDidChange;

@end