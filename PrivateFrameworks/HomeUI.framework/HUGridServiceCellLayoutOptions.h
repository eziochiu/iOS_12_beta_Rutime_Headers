/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions {
    double  _lineSpacing;
}

@property (nonatomic) double lineSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;

@end
