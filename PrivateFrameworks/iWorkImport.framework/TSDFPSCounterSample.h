/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFPSCounterSample : NSObject {
    double  _duration;
    double  _time;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double time;

+ (id)sampleWithTime:(double)arg1 duration:(double)arg2;

- (double)duration;
- (id)initWithTime:(double)arg1 duration:(double)arg2;
- (double)time;

@end
