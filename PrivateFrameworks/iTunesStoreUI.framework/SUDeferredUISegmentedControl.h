/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _deferredFrame;
    double  _deferredMaxTotalWidth;
    double  _deferredMinSegmentWidth;
    long long  _deferredSegmentedControlStyle;
    NSMutableArray * _deferredSegments;
    unsigned long long  _deferredSelectedSegmentIndex;
    bool  _deferredSizeToFit;
    bool  _isDeferringInterfaceUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeferringInterfaceUpdates, nonatomic) bool deferringInterfaceUpdates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_commitDeferredInterfaceUpdates;
- (void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_saveCurrentStateAsDeferred;
- (void)_saveSegmentsAsDeferred;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)isDeferringInterfaceUpdates;
- (unsigned long long)numberOfSegments;
- (void)removeAllSegments;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (long long)segmentedControlStyle;
- (long long)selectedSegmentIndex;
- (void)setDeferringInterfaceUpdates:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setSegmentedControlStyle:(long long)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)sizeToFit;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;

@end
