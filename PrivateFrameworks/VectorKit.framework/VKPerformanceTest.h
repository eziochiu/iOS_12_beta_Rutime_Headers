/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPerformanceTest : NSObject {
    int  _loopCounter;
    VKMapView * _mapView;
    NSString * _outputHeader;
    int  _resultCount;
    struct VKPerformanceTestResult_struct { char *x1; float x2[5]; } * _results;
    bool  _running;
}

+ (void)runWithMapView:(id)arg1 outputHeader:(id)arg2;

- (void)abort;
- (void)dealloc;
- (id)initWithMapView:(id)arg1 outputHeader:(id)arg2;
- (void)loop;
- (void)printResults;
- (void)runTest:(int)arg1 step:(int)arg2;
- (void)tick:(int)arg1;

@end
