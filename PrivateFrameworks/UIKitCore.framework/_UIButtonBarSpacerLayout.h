/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {
    NSLayoutConstraint * _equalSize;
    bool  _flexible;
    UIBarButtonItem * _item;
    NSLayoutConstraint * _minimumSize;
    NSLayoutConstraint * _requestedSize;
    UIView * _spacer;
    long long  _spacerType;
}

@property (nonatomic, readonly) long long spacerType;

+ (id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3;
+ (long long)typeOfSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (bool)_isSpace;
- (id)_item;
- (id)description;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (long long)spacerType;

@end
