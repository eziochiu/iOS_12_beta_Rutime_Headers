/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWEspressoInferenceContext : NSObject {
    void * _espressoContext;
    int  _executionTarget;
    unsigned long long  _options;
}

@property (nonatomic, readonly) void*espressoContext;
@property (nonatomic, readonly) int executionTarget;
@property (getter=isPrepared, nonatomic, readonly) bool prepared;

- (void)dealloc;
- (id)description;
- (void*)espressoContext;
- (int)executionTarget;
- (id)init;
- (id)initWithExecutionTarget:(int)arg1 options:(unsigned long long)arg2;
- (bool)isPrepared;
- (int)prepareForInferenceUsingProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg1;

@end
