/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable> {
    NSArray * _dataViews;
    UIView * _headerContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerMargin;
    double  _headerMaxWidth;
    double  _headerMinWidth;
    bool  _headerOnLeading;
    double  _headerWidth;
    double  _normalizedHeaderWidth;
}

@property (nonatomic, retain) NSArray *dataViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerMargin;
@property (nonatomic) double headerMaxWidth;
@property (nonatomic) double headerMinWidth;
@property (nonatomic) bool headerOnLeading;
@property (nonatomic) double headerWidth;
@property (nonatomic) double normalizedHeaderWidth;
@property (readonly) Class superclass;

+ (id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)dataViews;
- (id)headerContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerMargin;
- (double)headerMaxWidth;
- (double)headerMinWidth;
- (bool)headerOnLeading;
- (double)headerWidth;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (double)minimumHeaderWidth;
- (double)normalizedHeaderWidth;
- (void)setDataViews:(id)arg1;
- (void)setHeaderContentView:(id)arg1;
- (void)setHeaderMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderMaxWidth:(double)arg1;
- (void)setHeaderMinWidth:(double)arg1;
- (void)setHeaderOnLeading:(bool)arg1;
- (void)setHeaderWidth:(double)arg1;
- (void)setNormalizedHeaderWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withHeaderWidth:(double)arg2;

@end
