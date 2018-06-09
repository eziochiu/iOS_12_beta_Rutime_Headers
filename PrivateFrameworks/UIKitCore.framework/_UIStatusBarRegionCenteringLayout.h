/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarRegionCenteringLayout : _UIStatusBarRegionLinearLayout {
    double  _interspace;
    long long  _maxNumberOfItems;
}

@property (nonatomic) double interspace;
@property (nonatomic) long long maxNumberOfItems;

- (id)_horizontalConstraintsForLayoutItems:(id)arg1 layoutGuides:(id)arg2;
- (id)init;
- (double)interspace;
- (long long)maxNumberOfItems;
- (bool)mayFitDisplayItems:(id)arg1;
- (void)setInterspace:(double)arg1;
- (void)setMaxNumberOfItems:(long long)arg1;

@end
