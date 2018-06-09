/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMContactDetailSent : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMDocumentType_ { unsigned long long x1; })arg2 detail:(struct SGMContactDetailType_ { unsigned long long x1; })arg3 foundIn:(struct SGMContactDetailFoundIn_ { unsigned long long x1; })arg4 hasName:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg5 tokens:(struct SGMLowCount_ { unsigned long long x1; })arg6;
- (id)tracker;

@end
