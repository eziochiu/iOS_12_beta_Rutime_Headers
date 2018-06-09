/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerConnection : NSObject {
    BWInferenceSchedulerResourceCoordinator * _coordinator;
    BWInferenceSchedulerGraph * _graph;
    unsigned long long  _identifier;
    BWInferenceSchedulerConnectionStorage * _storage;
}

@property (nonatomic, readonly) BWInferenceSchedulerResourceCoordinator *coordinator;
@property (nonatomic, readonly) BWInferenceSchedulerGraph *graph;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) BWInferenceSchedulerConnectionStorage *storage;

- (id)coordinator;
- (void)dealloc;
- (id)graph;
- (unsigned long long)identifier;
- (id)init;
- (id)storage;

@end
