/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationDisplayWrapperView : UIControl <NTKComplicationDisplayObserver, NTKControl, NTKTimeTravel> {
    double  _alphaForDimmedState;
    <NTKComplicationDisplayWrapperViewAnimationDelegate> * _animationDelegate;
    UIView * _clipView;
    NSString * _complicationSlotIdentifier;
    CLKComplicationTemplate * _complicationTemplate;
    UIView * _currentComplicationView;
    UIView * _deferredComplicationView;
    bool  _didChangeLayoutOverride;
    bool  _dimmed;
    UIView<NTKComplicationDisplay> * _display;
    id /* block */  _displayConfigurationHandler;
    UIView * _earlierContainerView;
    bool  _editing;
    long long  _family;
    bool  _hasLegacyDisplay;
    bool  _hasTemplateDisplay;
    bool  _isAnimating;
    UIView * _laterContainerView;
    long long  _layoutOverride;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    id /* block */  _needsResizeHandler;
    UIView * _nextComplicationView;
    bool  _paused;
    bool  _tapEnabled;
    CLKComplicationTemplate * _template;
    NSDate * _timeTravelDate;
    id /* block */  _touchDownHandler;
    id /* block */  _touchUpInsideHandler;
}

@property (nonatomic) double alphaForDimmedState;
@property (nonatomic) <NTKComplicationDisplayWrapperViewAnimationDelegate> *animationDelegate;
@property (nonatomic, retain) NSString *complicationSlotIdentifier;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, readonly) UIView<NTKComplicationDisplay> *display;
@property (nonatomic, copy) id /* block */ displayConfigurationHandler;
@property (nonatomic) bool editing;
@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) bool hasLegacyDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOverride;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, copy) id /* block */ needsResizeHandler;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (readonly) Class superclass;
@property (nonatomic) bool tapEnabled;
@property (nonatomic, copy) id /* block */ touchDownHandler;
@property (nonatomic, copy) id /* block */ touchUpInsideHandler;

- (void).cxx_destruct;
- (void)_didSetDisplayFromDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_invokeNeedsResizeHandler;
- (void)_invokeTouchDownHandler;
- (void)_invokeTouchUpInsideHandler;
- (void)_prepareToSetDisplay:(id)arg1 withComplicationAnimation:(inout unsigned long long*)arg2;
- (void)_removeDisplay:(id)arg1;
- (void)_resetComplicationViews;
- (void)_setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)_setDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_setDisplayEditing:(bool)arg1;
- (void)_setDisplayMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_startDefaultNewDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 forward:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)_tryToSetDisplayHighlighted:(bool)arg1;
- (double)alphaForDimmedState;
- (id)animationDelegate;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (id)complicationSlotIdentifier;
- (id)complicationTemplate;
- (void)dealloc;
- (id)display;
- (id /* block */)displayConfigurationHandler;
- (bool)editing;
- (long long)family;
- (bool)hasLegacyDisplay;
- (id)init;
- (id)initWithCustomTemplateDisplay:(id)arg1 hasTemplateDisplay:(bool)arg2 family:(long long)arg3;
- (id)initWithFamily:(long long)arg1;
- (id)initWithLegacyDisplay:(id)arg1;
- (id)initWithLegacyDisplay:(id)arg1 layoutOverride:(long long)arg2;
- (bool)isDimmed;
- (long long)layoutOverride;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxSize;
- (void)needsResize;
- (id /* block */)needsResizeHandler;
- (bool)paused;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setAlphaForDimmedState:(double)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setComplicationSlotIdentifier:(id)arg1;
- (void)setComplicationTemplate:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)setComplicationView:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)setDisplayConfigurationHandler:(id /* block */)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsResizeHandler:(id /* block */)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTapEnabled:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setTouchDownHandler:(id /* block */)arg1;
- (void)setTouchUpInsideHandler:(id /* block */)arg1;
- (bool)shouldCancelTouchesInScrollview;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)tapEnabled;
- (id /* block */)touchDownHandler;
- (id /* block */)touchUpInsideHandler;

@end
