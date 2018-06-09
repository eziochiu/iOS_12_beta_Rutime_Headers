/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageSaliencyAnalyzerFull : VCPImageSaliencyAnalyzer {
    VCPCNNData * _input;
    VCPCNNModel * _model;
    NSURL * _modelURL;
}

- (void).cxx_destruct;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (int)getSalientRegions:(id /* block */)arg1;
- (int)initializeModel:(int)arg1 srcWidth:(int)arg2;

@end
