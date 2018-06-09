/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIRefreshControlContentView : UIView {
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    UIRefreshControl * _refreshControl;
    UIColor * _tintColor;
}

@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic, readonly) double maximumSnappingHeight;
@property (nonatomic, readonly) double minimumSnappingHeight;
@property (nonatomic) UIRefreshControl *refreshControl;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)_removeAllAnimations;
- (id)attributedTitle;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)impactFeedbackGenerator;
- (double)maximumSnappingHeight;
- (double)minimumSnappingHeight;
- (id)refreshControl;
- (void)refreshControlInvalidatedSnappingHeight;
- (void)setAttributedTitle:(id)arg1;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setTintColor:(id)arg1;
- (long long)style;
- (id)tintColor;
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;

@end
