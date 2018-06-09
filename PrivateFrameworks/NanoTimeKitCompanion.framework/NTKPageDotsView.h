/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPageDotsView : UIView {
    unsigned long long  _currentPage;
    UIColor * _currentPageColor;
    CLKDevice * _device;
    double  _dotDiameter;
    double  _dotPadding;
    unsigned long long  _numberOfPages;
    UIColor * _otherPageColor;
    NSMutableArray * _pageDots;
}

@property (nonatomic) unsigned long long currentPage;
@property (nonatomic, retain) UIColor *currentPageColor;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) double dotDiameter;
@property (nonatomic) double dotPadding;
@property (nonatomic) unsigned long long numberOfPages;
@property (nonatomic, retain) UIColor *otherPageColor;
@property (nonatomic, retain) NSMutableArray *pageDots;

- (void).cxx_destruct;
- (void)_regenerateDots;
- (void)applyDefaultConfiguration;
- (unsigned long long)currentPage;
- (id)currentPageColor;
- (id)device;
- (double)dotDiameter;
- (double)dotPadding;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (id)makePageDot;
- (unsigned long long)numberOfPages;
- (id)otherPageColor;
- (id)pageDots;
- (void)setCurrentPage:(unsigned long long)arg1;
- (void)setCurrentPageColor:(id)arg1;
- (void)setDotDiameter:(double)arg1;
- (void)setDotPadding:(double)arg1;
- (void)setNumberOfPages:(unsigned long long)arg1;
- (void)setOtherPageColor:(id)arg1;
- (void)setPageDots:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
