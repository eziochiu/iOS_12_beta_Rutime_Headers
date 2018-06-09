/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem {
    _UIStatusBarBackgroundActivityView * _backgroundView;
    _UIStatusBarBackgroundActivityView * _combinedView;
}

@property (nonatomic, retain) _UIStatusBarBackgroundActivityView *backgroundView;
@property (nonatomic, retain) _UIStatusBarBackgroundActivityView *combinedView;

+ (id)backgroundDisplayIdentifier;
+ (id)combinedDisplayIdentifier;
+ (bool)shouldKeepIconVisibleForActivityType:(long long)arg1;

- (void).cxx_destruct;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)_imageNameForActivityType:(long long)arg1;
- (struct CGSize { double x1; double x2; })_pillSizeAndBaselineOffset:(double*)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)backgroundView;
- (id)combinedView;
- (id)imageForUpdate:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)indicatorEntryKey;
- (void)setBackgroundView:(id)arg1;
- (void)setCombinedView:(id)arg1;
- (void)setupDisplayItem:(id)arg1;
- (bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
