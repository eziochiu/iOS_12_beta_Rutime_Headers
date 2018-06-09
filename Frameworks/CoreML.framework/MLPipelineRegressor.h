/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLPipelineRegressor : MLRegressor {
    MLPipeline * _engine;
}

@property (retain) MLPipeline *engine;

- (void).cxx_destruct;
- (id)engine;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setEngine:(id)arg1;

@end
