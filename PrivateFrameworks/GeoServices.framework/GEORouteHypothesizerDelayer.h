/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizerDelayer : NSObject {
    struct __CFBinaryHeap { } * _minHeap;
    GEORouteHypothesizer * _nextHypothesizer;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (void)checkin;

- (void).cxx_destruct;
- (void)_setNextHypothesizer:(id)arg1;
- (void)_startValidHypothesizers;
- (void)dealloc;
- (void)delayStartOfHypothesizer:(id)arg1;
- (id)init;

@end
