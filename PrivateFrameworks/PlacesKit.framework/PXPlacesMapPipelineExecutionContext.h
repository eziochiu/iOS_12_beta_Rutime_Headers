/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapPipelineExecutionContext : NSObject {
    NSArray * _callstack;
    NSMapTable * _changesForDataSources;
    id /* block */  _completionHandler;
    NSMutableSet * _dataSources;
    double  _duration;
    NSDate * _start;
    bool  _stopped;
    NSMutableDictionary * _timerStartDataSource;
    NSMutableDictionary * _timerStartPipeline;
    NSDate * _timerStartPlanResultsExecution;
    NSMutableDictionary * _timerStopDataSource;
    NSMutableDictionary * _timerStopPipeline;
    NSDate * _timerStopPlanResultsExecution;
    NSArray * _updatePlanResults;
    PXPlacesMapViewPort * _viewPort;
}

@property (readonly) NSMapTable *changesForDataSources;
@property (readonly) NSArray *dataSources;
@property (readonly) double duration;
@property (retain) NSArray *updatePlanResults;
@property (retain) PXPlacesMapViewPort *viewPort;

- (void).cxx_destruct;
- (void)addDataSources:(id)arg1 changesForDataSources:(id)arg2;
- (id)changesForDataSources;
- (id)dataSources;
- (double)duration;
- (id)durationForDataSources;
- (double)durationForExecutionOfPlanResults;
- (id)durationForPipelines;
- (id)initWithViewPort:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setUpdatePlanResults:(id)arg1;
- (void)setViewPort:(id)arg1;
- (void)start;
- (void)startTimerForDataSource:(id)arg1;
- (void)startTimerForExecutionOfPlanResults;
- (void)startTimerForPipeline:(id)arg1;
- (void)stop;
- (void)stopTimerForDataSource:(id)arg1;
- (void)stopTimerForExecutionOfPlanResults;
- (void)stopTimerForPipeline:(id)arg1;
- (id)updatePlanResults;
- (id)viewPort;

@end
