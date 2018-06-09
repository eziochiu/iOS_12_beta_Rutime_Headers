/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarActivityItem : _UIStatusBarItem {
    _UIStatusBarActivityIndicator * _activityIndicator;
}

@property (nonatomic, retain) _UIStatusBarActivityIndicator *activityIndicator;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } activityIndicatorAlignmentRectInsets;

- (void).cxx_destruct;
- (bool)_enableForType:(long long)arg1;
- (id)activityIndicator;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })activityIndicatorAlignmentRectInsets;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (void)setActivityIndicator:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
