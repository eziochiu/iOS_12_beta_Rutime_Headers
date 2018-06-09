/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXColumnLayout : NSObject <NSCopying> {
    long long  _bottomPadding;
    double  _columnWidth;
    SXDocumentLayout * _documentLayout;
    long long  _gutter;
    unsigned long long  _layoutColumns;
    long long  _layoutWidth;
    long long  _leftColumnOffset;
    double  _leftInset;
    long long  _leftMargin;
    double  _minimumHeight;
    double  _minimumViewportWidthForLooseLayout;
    unsigned long long  _numberOfColumns;
    long long  _rightColumnOffset;
    double  _rightInset;
    long long  _rightMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetedViewportSize;
    long long  _topPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic) long long bottomPadding;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, readonly) SXDocumentLayout *documentLayout;
@property (nonatomic, readonly) long long gutter;
@property (nonatomic, readonly) unsigned long long layoutColumns;
@property (nonatomic, readonly) long long layoutWidth;
@property (nonatomic, readonly) long long leftColumnOffset;
@property (nonatomic) double leftInset;
@property (nonatomic, readonly) long long leftMargin;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumViewportWidthForLooseLayout;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic) long long rightColumnOffset;
@property (nonatomic) double rightInset;
@property (nonatomic, readonly) long long rightMargin;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetedViewportSize;
@property (nonatomic) long long topPadding;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (long long)bottomPadding;
- (id)columnLayoutForComponentBlueprint:(id)arg1;
- (double)columnWidth;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 minimumColumnLength:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentLayout;
- (long long)gutter;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1 targetedViewportSize:(struct CGSize { double x1; double x2; })arg2 layoutWidth:(double)arg3 documentLayout:(id)arg4 numberOfLayoutColumns:(unsigned long long)arg5 leftMargin:(double)arg6 rightMargin:(double)arg7 numberOfColumns:(unsigned long long)arg8 columnWidth:(double)arg9;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutColumns;
- (long long)layoutWidth;
- (long long)leftColumnOffset;
- (double)leftInset;
- (long long)leftMargin;
- (double)minimumHeight;
- (double)minimumViewportWidthForLooseLayout;
- (unsigned long long)numberOfColumns;
- (long long)rightColumnOffset;
- (double)rightInset;
- (long long)rightMargin;
- (void)setBottomPadding:(long long)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setMinimumViewportWidthForLooseLayout:(double)arg1;
- (void)setRightColumnOffset:(long long)arg1;
- (void)setRightInset:(double)arg1;
- (void)setTopPadding:(long long)arg1;
- (struct CGSize { double x1; double x2; })targetedViewportSize;
- (long long)topPadding;
- (struct CGSize { double x1; double x2; })viewportSize;
- (double)widthForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3;
- (double)xPositionForColumnIndex:(long long)arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3;

@end
