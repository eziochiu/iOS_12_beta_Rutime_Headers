/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMSuggestdExitReason : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 exitCode:(unsigned long long)arg2;
- (id)tracker;

@end
