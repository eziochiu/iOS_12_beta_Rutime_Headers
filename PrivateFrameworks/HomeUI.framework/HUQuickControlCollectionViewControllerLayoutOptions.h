/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject {
    double  _interitemSpacingForRegularControlSize;
    double  _interitemSpacingForSmallControlSize;
    double  _minimumSectionSpacing;
    unsigned long long  _preferredLayoutStyle;
    double  _rowSpacing;
    unsigned long long  _titlePosition;
}

@property (nonatomic) double interitemSpacingForRegularControlSize;
@property (nonatomic) double interitemSpacingForSmallControlSize;
@property (nonatomic) double minimumSectionSpacing;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) double rowSpacing;
@property (nonatomic) unsigned long long titlePosition;

+ (id)defaultOptions;

- (double)interitemSpacingForRegularControlSize;
- (double)interitemSpacingForSmallControlSize;
- (double)minimumSectionSpacing;
- (unsigned long long)preferredLayoutStyle;
- (double)rowSpacing;
- (void)setInteritemSpacingForRegularControlSize:(double)arg1;
- (void)setInteritemSpacingForSmallControlSize:(double)arg1;
- (void)setMinimumSectionSpacing:(double)arg1;
- (void)setPreferredLayoutStyle:(unsigned long long)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (unsigned long long)titlePosition;

@end
