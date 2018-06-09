/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISImageDescriptor : NSObject <NSCopying> {
    unsigned long long  _backgroundStyle;
    unsigned long long  _badgeOptions;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _variantOptions;
}

@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) bool drawBorder;
@property (nonatomic) double scale;
@property (nonatomic) bool selectedVariant;
@property (nonatomic) unsigned long long shape;
@property (nonatomic) bool shouldApplyMask;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool templateVariant;
@property (nonatomic) unsigned long long variantOptions;

- (unsigned long long)backgroundStyle;
- (unsigned long long)badgeOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)drawBorder;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (double)scale;
- (bool)selectedVariant;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setBadgeOptions:(unsigned long long)arg1;
- (void)setDrawBorder:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setSelectedVariant:(bool)arg1;
- (void)setShape:(unsigned long long)arg1;
- (void)setShouldApplyMask:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTemplateVariant:(bool)arg1;
- (void)setVariantOptions:(unsigned long long)arg1;
- (unsigned long long)shape;
- (bool)shouldApplyMask;
- (struct CGSize { double x1; double x2; })size;
- (bool)templateVariant;
- (unsigned long long)variantOptions;

@end
