/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAutoloopAnalysisPerformer : NSObject {
    bool  _cancelled;
    int  _imageRequestID;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

- (void).cxx_destruct;
- (bool)_gatherOutputInfoFromAnalysisResult:(void*)arg1 recipeFlavor:(int)arg2 outputInfo:(id)arg3;
- (void)_handleRequestResultForAsset:(id)arg1 withPlayerItem:(id)arg2 info:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_runAutoloopPipelineForAsset:(id)arg1 withAVAsset:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (id)initWithQueue:(id)arg1;
- (void)startAnalysisWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;

@end
