/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusAnalogScene : NTKAnalogScene {
    NSCalendar * _calendar;
    unsigned long long  _currentDensity;
    SKNode * _fontContainerNode;
    NSArray * _fontHourNodes;
    bool  _isEditing;
    bool  _isStatusIconVisible;
    SKSpriteNode * _logo1Node;
    SKSpriteNode * _logo2Node;
    SKNode * _logoContainerNode;
    NSDate * _overrideDate;
    NTKZeusColorPalette * _palette;
    bool  _scrubbing;
    unsigned long long  _style;
}

@property (getter=isScrubbing, nonatomic) bool scrubbing;

- (void).cxx_destruct;
- (void)_applyHourLabelCollectionNode:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromHourLabelCollectionNode:(id)arg2 toHourLabelCollectionNode:(id)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_contentAlphaForEditing:(bool)arg1;
- (double)_digitAlphaForEditMode:(long long)arg1;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (id)_hoursNodeForStyle:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
- (double)_lowerComplicationAlphaForEditing:(bool)arg1;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(bool)arg2;
- (void)_significantTimeChanged;
- (void)_update12ForStatusIconVisibility;
- (void)_update12ForStatusIconVisibilityAnimated:(bool)arg1;
- (void)applyDensity:(unsigned long long)arg1;
- (void)applyPalette:(id)arg1;
- (void)applyStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (unsigned long long)currentDensity;
- (void)dealloc;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 forDevice:(id)arg2;
- (bool)isScrubbing;
- (void)setAdjustsForStatusBarIcon:(bool)arg1 animated:(bool)arg2;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setScrubbing:(bool)arg1;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;

@end
