/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewGridLayoutInfo : NSObject {
    struct { 
        unsigned long long numberOfItems; 
        unsigned long long numberOfRows; 
        unsigned long long maximumNumberOfColumns; 
        long long horizontalAlignment; 
        unsigned long long itemSize; 
    }  _configuration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    double  _maximumRowHeight;
    NSArray * _rowLayouts;
    unsigned long long  _sectionIndex;
    HUQuickControlCollectionViewLayoutGridSectionSettings * _settings;
}

@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; unsigned long long x5; } configuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic) double maximumRowHeight;
@property (nonatomic, copy) NSArray *rowLayouts;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic, retain) HUQuickControlCollectionViewLayoutGridSectionSettings *settings;

- (void).cxx_destruct;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; unsigned long long x5; })configuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)indexPathForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (double)maximumRowHeight;
- (unsigned long long)numberOfColumnsInRow:(unsigned long long)arg1;
- (id)rowLayouts;
- (unsigned long long)sectionIndex;
- (void)setConfiguration:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; unsigned long long x5; })arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaximumRowHeight:(double)arg1;
- (void)setRowLayouts:(id)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
