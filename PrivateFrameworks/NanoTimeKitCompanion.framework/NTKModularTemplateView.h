/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModularTemplateView : NTKComplicationModuleView <NTKTemplateComplicationDisplay> {
    CLKComplicationTemplate * _complicationTemplate;
    unsigned long long  _highlightMode;
    NSDate * _timeTravelDate;
}

@property (nonatomic, retain) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long highlightMode;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly) NSDate *timeTravelDate;

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateColoringViewsSubviewsWithBlock:(id /* block */)arg1 invertedHighlight:(bool)arg2;
- (void)_propagateColorSchemeToSubviews:(id)arg1;
- (void)_setColorScheme:(id)arg1 propagateToSubviews:(bool)arg2;
- (void)_update;
- (bool)_useInvertedHighlightForColorScheme:(id)arg1;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (id)complicationTemplate;
- (unsigned long long)highlightMode;
- (void)setComplicationTemplate:(id)arg1;
- (void)setContainsOverrideFaceColor:(id)arg1;
- (void)setHighlightMode:(unsigned long long)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (id)timeTravelDate;

@end
