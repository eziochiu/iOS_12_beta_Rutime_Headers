/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXItemizedScrollView : UIScrollView <UIScrollViewDelegate> {
    unsigned long long  _activeViewIndex;
    bool  _contentTooSmall;
    <SXItemizedScrollViewDataSource> * _dataSource;
    NSArray * _frames;
    struct CGSize { 
        double width; 
        double height; 
    }  _framesAreValidForSize;
    bool  _gotActiveViewIndexChange;
    NSIndexSet * _visibleIndices;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visibleRange;
    NSMutableDictionary * _visibleViewsByIndex;
}

@property (nonatomic, readonly) UIView *activeView;
@property (nonatomic, readonly) unsigned long long activeViewIndex;
@property (nonatomic) bool contentTooSmall;
@property (nonatomic) <SXItemizedScrollViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *frames;
@property (nonatomic) struct CGSize { double x1; double x2; } framesAreValidForSize;
@property (nonatomic) bool gotActiveViewIndexChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSIndexSet *visibleIndices;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } visibleRange;
@property (nonatomic, retain) NSMutableDictionary *visibleViewsByIndex;

- (void).cxx_destruct;
- (id)activeView;
- (unsigned long long)activeViewIndex;
- (void)commonInit;
- (bool)contentTooSmall;
- (id)dataSource;
- (void)determineNewVisibilityRange;
- (void)forceCorrectFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForViewAtIndex:(unsigned long long)arg1;
- (id)frames;
- (struct CGSize { double x1; double x2; })framesAreValidForSize;
- (bool)gotActiveViewIndexChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)rebuildFramesArray;
- (void)reindexate;
- (void)setActiveViewIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setContentTooSmall:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrames:(id)arg1;
- (void)setFramesAreValidForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGotActiveViewIndexChange:(bool)arg1;
- (void)setVisibleIndices:(id)arg1;
- (void)setVisibleViewsByIndex:(id)arg1;
- (void)viewManagementForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)visibleIndices;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRange;
- (id)visibleViewsByIndex;

@end
