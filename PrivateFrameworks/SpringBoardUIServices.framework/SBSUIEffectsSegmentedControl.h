/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIEffectsSegmentedControl : UISegmentedControl {
    bool  _irisPossible;
    _UILegibilitySettings * _legibilitySettings;
    bool  _parallaxPossible;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned long long selectedEffect;

- (void).cxx_destruct;
- (id)initWithParallaxPossible:(bool)arg1 irisPossible:(bool)arg2;
- (id)legibilitySettings;
- (unsigned long long)selectedEffect;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSelectedEffect:(unsigned long long)arg1;

@end
