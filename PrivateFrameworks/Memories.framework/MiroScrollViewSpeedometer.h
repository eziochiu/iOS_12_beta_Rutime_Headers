/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroScrollViewSpeedometer : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  __lastContentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  __lastContentSize;
    UIScrollView * __lastScrollView;
    double  __lastTime;
    long long  __nextRegime;
    long long  __nextRegimeCount;
    NSTimer * __timeoutTimer;
    <MiroScrollViewSpeedometerDelegate> * _delegate;
    bool  _delegateSupportsRegimeChange;
    double  _fastLowerThreshold;
    double  _fastUpperThreshold;
    double  _mediumLowerThreshold;
    double  _mediumUpperThreshold;
    long long  _regime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollSpeed;
}

@property (setter=_setLastContentOffset:, nonatomic) struct CGPoint { double x1; double x2; } _lastContentOffset;
@property (setter=_setLastContentSize:, nonatomic) struct CGSize { double x1; double x2; } _lastContentSize;
@property (setter=_setLastScrollView:, nonatomic) UIScrollView *_lastScrollView;
@property (setter=_setLastTime:, nonatomic) double _lastTime;
@property (setter=_setNextRegime:, nonatomic) long long _nextRegime;
@property (setter=_setNextRegimeCount:, nonatomic) long long _nextRegimeCount;
@property (setter=_setTimeoutTimer:, nonatomic, retain) NSTimer *_timeoutTimer;
@property (nonatomic) <MiroScrollViewSpeedometerDelegate> *delegate;
@property (nonatomic) double fastLowerThreshold;
@property (nonatomic) double fastUpperThreshold;
@property (nonatomic) double mediumLowerThreshold;
@property (nonatomic) double mediumUpperThreshold;
@property (setter=_setRegime:, nonatomic) long long regime;
@property (setter=_setScrollSpeed:, nonatomic) struct CGPoint { double x1; double x2; } scrollSpeed;

- (void).cxx_destruct;
- (void)_handleTimeoutTimer:(id)arg1;
- (struct CGPoint { double x1; double x2; })_lastContentOffset;
- (struct CGSize { double x1; double x2; })_lastContentSize;
- (id)_lastScrollView;
- (double)_lastTime;
- (long long)_newRegimeForScrollSpeed:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_nextRegime;
- (long long)_nextRegimeCount;
- (void)_rescheduleTimeout;
- (void)_setLastContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLastContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLastScrollView:(id)arg1;
- (void)_setLastTime:(double)arg1;
- (void)_setNextRegime:(long long)arg1;
- (void)_setNextRegimeCount:(long long)arg1;
- (void)_setRegime:(long long)arg1;
- (void)_setScrollSpeed:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setTimeoutTimer:(id)arg1;
- (id)_timeoutTimer;
- (id)delegate;
- (double)fastLowerThreshold;
- (double)fastUpperThreshold;
- (double)mediumLowerThreshold;
- (double)mediumUpperThreshold;
- (long long)regime;
- (struct CGPoint { double x1; double x2; })scrollSpeed;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFastLowerThreshold:(double)arg1;
- (void)setFastUpperThreshold:(double)arg1;
- (void)setMediumLowerThreshold:(double)arg1;
- (void)setMediumUpperThreshold:(double)arg1;

@end
