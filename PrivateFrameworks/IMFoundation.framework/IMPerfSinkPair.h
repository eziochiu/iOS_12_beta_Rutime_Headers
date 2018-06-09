/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPerfSinkPair : NSObject {
    <IMPerfProfilerBehavior> * _behavior;
    <IMPerfProfilerSink> * _sink;
}

@property (nonatomic, readonly) <IMPerfProfilerBehavior> *behavior;
@property (nonatomic, readonly) <IMPerfProfilerSink> *sink;

- (id)behavior;
- (void)dealloc;
- (id)initWithBehavior:(id)arg1 sink:(id)arg2;
- (id)sink;

@end
