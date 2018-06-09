/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMMailClientInMailApp : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 isSynced:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg2 service:(struct SGMEventICSSourceType_ { unsigned long long x1; })arg3;
- (id)tracker;

@end
