/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentExposureTracking : NSObject {
    SXComponentView * _componentView;
    id /* block */  _exposureStateChangeBlock;
    long long  _lastObservedVisibilityState;
    double  _maximumVisibleY;
    double  _minimumVisibleY;
    double  _visibilityFactor;
}

@property (nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly, copy) id /* block */ exposureStateChangeBlock;
@property (nonatomic) long long lastObservedVisibilityState;
@property (nonatomic) double maximumVisibleY;
@property (nonatomic) double minimumVisibleY;
@property (nonatomic, readonly) double visibilityFactor;

+ (id)exposureTrackingWithComponent:(id)arg1 exposureStateChangeBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)calculateVisibilityFactor;
- (id)componentView;
- (id /* block */)exposureStateChangeBlock;
- (id)initWithComponent:(id)arg1 exposureStateChangeBlock:(id /* block */)arg2;
- (long long)lastObservedVisibilityState;
- (double)maximumVisibleY;
- (double)minimumVisibleY;
- (void)setLastObservedVisibilityState:(long long)arg1;
- (void)setMaximumVisibleY:(double)arg1;
- (void)setMinimumVisibleY:(double)arg1;
- (double)visibilityFactor;

@end
