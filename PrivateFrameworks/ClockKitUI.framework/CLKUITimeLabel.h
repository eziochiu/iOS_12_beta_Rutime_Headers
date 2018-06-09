/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUITimeLabel : UIView <CLKTimeFormatterDelegate, CLKTimeFormatterObserver, CLKUILabel> {
    CLKDevice * _device;
    id /* block */  _didResizeHandler;
    double  _fadeEnd;
    double  _fadeStart;
    <_CLKUITimeLabelManager> * _fromLabelManager;
    CLKUITimeLabelStyle * _fromStyle;
    <_CLKUITimeLabelManager> * _labelManager;
    double  _maxWidth;
    unsigned long long  _options;
    bool  _paused;
    bool  _showSeconds;
    bool  _showsDesignator;
    CLKUITimeLabelStyle * _style;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _styleTransitionEndFrame;
    double  _styleTransitionFraction;
    bool  _styleTransitioning;
    CLKTimeFormatter * _timeFormatter;
    NSString * _timeText;
}

@property (nonatomic, readonly) double _lastLineBaseline;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, copy) id /* block */ didResizeHandler;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicSize;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } opticalInsets;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) bool paused;
@property (nonatomic) bool showSeconds;
@property (nonatomic) bool showsDesignator;
@property (nonatomic, copy) CLKUITimeLabelStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) CLKTimeFormatter *timeFormatter;

+ (id)labelWithOptions:(unsigned long long)arg1;
+ (id)labelWithOptions:(unsigned long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelAnimation;
- (void)_enumerateUnderlyingLabelsWithBlock:(id /* block */)arg1;
- (void)_fadeTransitionLabels;
- (double)_lastLineBaseline;
- (id)_newLabelManager;
- (id)_newUnderlyingLabel:(bool)arg1;
- (void)_resizeIfNecessary;
- (void)_scaleTransitionLabels;
- (id)attributedText;
- (void)cleanupAfterStyleTransition;
- (id)device;
- (void)didMoveToWindow;
- (id /* block */)didResizeHandler;
- (id)font;
- (id)identifyingInfoForTimeFormatter:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicSize;
- (void)layoutSubviews;
- (double)maxWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (unsigned long long)options;
- (bool)paused;
- (void)prepareToTransitionToStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBlinkingPaused:(bool)arg1;
- (void)setDidResizeHandler:(id /* block */)arg1;
- (void)setFont:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setPaused:(bool)arg1;
- (void)setShowSeconds:(bool)arg1;
- (void)setShowsDesignator:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleTransitionFraction:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setThreeDigitFont:(id)arg1 fourDigitFont:(id)arg2 designatorFont:(id)arg3;
- (void)setTimeFont:(id)arg1 designatorFont:(id)arg2;
- (void)setTimeOffset:(double)arg1;
- (bool)showSeconds;
- (bool)showsDesignator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)style;
- (struct CGSize { double x1; double x2; })styleTransitionCurrentSize;
- (struct CGSize { double x1; double x2; })styleTransitionEndSize;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)timeFormatter;
- (void)timeFormatterTextDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
