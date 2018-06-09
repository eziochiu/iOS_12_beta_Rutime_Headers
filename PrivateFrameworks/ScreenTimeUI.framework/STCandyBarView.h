/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STCandyBarView : UIView {
    NSArray * _usageItems;
    NSArray * _viewItems;
}

@property (nonatomic, copy) NSArray *usageItems;
@property (nonatomic, copy) NSArray *viewItems;

- (void).cxx_destruct;
- (id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3;
- (void)layoutSubviews;
- (void)setUsageItems:(id)arg1;
- (void)setUsageItems:(id)arg1 animated:(bool)arg2;
- (void)setViewItems:(id)arg1;
- (void)updateConstraints;
- (void)updateSectionViewImages;
- (id)usageItems;
- (id)viewItems;

@end
