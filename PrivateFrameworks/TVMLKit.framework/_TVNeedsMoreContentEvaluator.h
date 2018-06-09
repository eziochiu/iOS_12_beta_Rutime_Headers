/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVNeedsMoreContentEvaluator : NSObject {
    long long  _axis;
    UIScrollView * _scrollView;
    long long  _state;
    double  _threshold;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly) long long axis;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) long long state;
@property (nonatomic) double threshold;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (long long)axis;
- (void)evaluateForState:(long long)arg1;
- (id)init;
- (id)initWithScrollView:(id)arg1 axis:(long long)arg2;
- (void)reset;
- (id)scrollView;
- (void)setState:(long long)arg1;
- (void)setThreshold:(double)arg1;
- (void)setViewElement:(id)arg1;
- (long long)state;
- (double)threshold;
- (id)viewElement;

@end
