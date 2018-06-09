/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILegibilityCachedShadow : NSObject {
    _UILegibilitySettings * _settings;
    UIImage * _shadow;
    double  _strength;
}

@property (nonatomic, retain) _UILegibilitySettings *settings;
@property (nonatomic, retain) UIImage *shadow;
@property (nonatomic) double strength;

- (void)dealloc;
- (bool)isEqual:(id)arg1;
- (bool)matchesSettings:(id)arg1 strength:(double)arg2;
- (void)setSettings:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setStrength:(double)arg1;
- (id)settings;
- (id)shadow;
- (double)strength;

@end
