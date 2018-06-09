/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityAutoscrollManager : NSObject {
    double  _autoscrollSpeed;
    bool  _autoscrolling;
    unsigned long long  _scrollDirection;
    UIScrollView * _scrollView;
}

@property (nonatomic) double autoscrollSpeed;
@property (getter=isAutoscrolling, nonatomic) bool autoscrolling;
@property (nonatomic) unsigned long long scrollDirection;
@property (nonatomic, retain) UIScrollView *scrollView;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_autoscroll;
- (void)autoscrollInDirection:(unsigned long long)arg1;
- (double)autoscrollSpeed;
- (unsigned long long)availableAutoscrollDirections;
- (void)decrementAutoscrollSpeed;
- (void)incrementAutoscrollSpeed;
- (id)init;
- (bool)isAutoscrolling;
- (void)pause;
- (unsigned long long)scrollDirection;
- (void)scrollToBottom;
- (void)scrollToTop;
- (id)scrollView;
- (void)setAutoscrollSpeed:(double)arg1;
- (void)setAutoscrolling:(bool)arg1;
- (void)setScrollDirection:(unsigned long long)arg1;
- (void)setScrollView:(id)arg1;

@end
