/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisDiscontinuity : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _discontinuityTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    bool  _onlyRetime;
    NSArray * _recipe;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetFrameDuration;
    NSArray * _timeSkews;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } targetFrameDuration;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, retain) NSArray *timeSkews;

+ (int)maximumNumberOfConsecutiveDroppedFrames;

- (long long)_offsetIndexFromDiscontinuityForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)containsVideoBufferTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)dealloc;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 targetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 onlyRetime:(bool)arg4 timeSkews:(id)arg5;
- (void)setTimeSkews:(id)arg1;
- (bool)shouldKeepBufferWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 nextAdjustedTimeInOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)timeSkews;

@end
