/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRPollingTimer : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _fireTime;
    bool  _fired;
    SEL  _selector;
    id  _target;
    bool  _valid;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } fireTime;
@property (nonatomic) bool fired;
@property (nonatomic) SEL selector;
@property (nonatomic, retain) id target;
@property (nonatomic) bool valid;

- (void).cxx_destruct;
- (void)evalAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fireTime;
- (bool)fired;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (SEL)selector;
- (void)setFireTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFired:(bool)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setValid:(bool)arg1;
- (id)target;
- (bool)valid;

@end
