/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewLayoutGridSectionSettings : NSObject <NAIdentifiable, NSCopying> {
    double  _interitemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredItemSize;
    unsigned long long  _preferredLayoutStyle;
    double  _rowSpacing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredItemSize;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) double rowSpacing;
@property (readonly) Class superclass;

+ (id)na_identity;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (double)interitemSpacing;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredItemSize;
- (unsigned long long)preferredLayoutStyle;
- (double)rowSpacing;
- (void)setInteritemSpacing:(double)arg1;
- (void)setPreferredItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredLayoutStyle:(unsigned long long)arg1;
- (void)setRowSpacing:(double)arg1;

@end
