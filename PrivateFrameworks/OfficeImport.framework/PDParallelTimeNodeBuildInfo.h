/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDParallelTimeNodeBuildInfo : NSObject {
    double  mDelay;
    double  mDuration;
    int  mIterateType;
    PDAnimationTarget * mTarget;
    id  mValue;
}

@property double delay;
@property double duration;
@property int iterateType;
@property (retain) PDAnimationTarget *target;
@property (retain) id value;

- (void)dealloc;
- (double)delay;
- (double)duration;
- (int)iterateType;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setIterateType:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setValue:(id)arg1;
- (id)target;
- (id)value;

@end
