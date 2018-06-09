/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKLabel : UILabel <GKTextStyleReplay> {
    double  _actualFontShrinkageFactor;
    GKTextStyle * _appliedStyle;
    GKTextStyle * _baseStyle;
    bool  _shouldEnforcePreferredWidth;
    bool  _shouldInhibitReplay;
    bool  _usingAttributedText;
}

@property (nonatomic) double actualFontShrinkageFactor;
@property (nonatomic, retain) GKTextStyle *appliedStyle;
@property (nonatomic, retain) GKTextStyle *baseStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldEnforcePreferredWidth;
@property (nonatomic) bool shouldInhibitReplay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usingAttributedText;

+ (void)initialize;

- (double)actualFontShrinkageFactor;
- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)baseStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)replayAndApplyStyleUnlessInhibited;
- (void)replayAndApplyStyleWithSystemContentChange:(bool)arg1;
- (void)setActualFontShrinkageFactor:(double)arg1;
- (void)setAppliedStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldEnforcePreferredWidth:(bool)arg1;
- (void)setShouldInhibitReplay:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)shouldEnforcePreferredWidth;
- (bool)shouldInhibitReplay;
- (struct CGSize { double x1; double x2; })shrinkFontToFitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)shrinkFontToFitWidth;
- (void)updateConstraints;
- (bool)usingAttributedText;

@end
