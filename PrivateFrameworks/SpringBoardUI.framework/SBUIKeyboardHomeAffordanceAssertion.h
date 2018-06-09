/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIKeyboardHomeAffordanceAssertion : NSObject {
    double  _additionalEdgeMargin;
    UIWindow * _sourceWindow;
}

@property (nonatomic) double additionalEdgeMargin;
@property (nonatomic) UIWindow *sourceWindow;

+ (id)assertionForGestureWindow:(id)arg1;

- (void).cxx_destruct;
- (double)additionalEdgeMargin;
- (void)dealloc;
- (id)initWithGestureWindow:(id)arg1;
- (void)invalidate;
- (void)setAdditionalEdgeMargin:(double)arg1;
- (void)setSourceWindow:(id)arg1;
- (id)sourceWindow;

@end
