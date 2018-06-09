/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMEventBannerConfirmed : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg2 category:(struct SGMEventCategory_ { unsigned long long x1; })arg3 extracted:(struct SGMEventExtractionType_ { unsigned long long x1; })arg4 state:(struct SGMEventState_ { unsigned long long x1; })arg5 titleAdj:(struct SGMEventStringAdj_ { unsigned long long x1; })arg6 dateAdj:(struct SGMEventDateAdj_ { unsigned long long x1; })arg7 duraAdj:(struct SGMEventDurationAdj_ { unsigned long long x1; })arg8;
- (id)tracker;

@end
