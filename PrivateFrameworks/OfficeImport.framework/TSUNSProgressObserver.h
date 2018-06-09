/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUNSProgressObserver : NSObject {
    OITSUBasicProgress * _basicProgress;
    double  _basicProgressMaxValue;
    bool  _didStart;
    NSProgress * _nsProgress;
    OITSUProgressContext * _progressContext;
}

+ (id)observerForNSProgress:(id)arg1 reportingToBasicProgress:(id)arg2 maxValue:(double)arg3;
+ (id)observerForNSProgress:(id)arg1 reportingToProgressContext:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithNSProgress:(id)arg1 progressContext:(id)arg2 basicProgress:(id)arg3 basicProgressMaxValue:(double)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)start;
- (void)stop;

@end
