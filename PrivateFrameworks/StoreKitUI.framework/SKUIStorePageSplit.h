/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageSplit : NSObject <NSCopying> {
    UIColor * _dividerColor;
    long long  _numberOfPageSections;
    NSArray * _pageComponents;
    SKUIStorePageSectionContext * _sectionContext;
    double  _widthFraction;
}

@property (nonatomic, copy) UIColor *dividerColor;
@property (nonatomic) long long numberOfPageSections;
@property (nonatomic, copy) NSArray *pageComponents;
@property (nonatomic, retain) SKUIStorePageSectionContext *sectionContext;
@property (nonatomic) double widthFraction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dividerColor;
- (long long)numberOfPageSections;
- (id)pageComponents;
- (id)sectionContext;
- (void)setDividerColor:(id)arg1;
- (void)setNumberOfPageSections:(long long)arg1;
- (void)setPageComponents:(id)arg1;
- (void)setSectionContext:(id)arg1;
- (void)setWidthFraction:(double)arg1;
- (double)widthFraction;

@end
