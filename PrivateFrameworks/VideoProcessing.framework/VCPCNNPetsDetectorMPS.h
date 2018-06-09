/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPetsDetectorMPS : VCPCNNPetsDetector {
    VCPCNNData * _input;
    int  _inputChannels;
    int  _maxNumRegions;
    VCPCNNModel * _model;
    NSURL * _modelURL;
    bool  _useGPU;
}

- (void).cxx_destruct;
- (int)createBasicBlock:(int)arg1 stride:(int)arg2;
- (int)createConv1x1Block:(int)arg1;
- (int)createConv3x3Block:(int)arg1 stride:(int)arg2;
- (int)createGroup4Conv3x3Block:(int)arg1 stride:(int)arg2;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)generatePetsBoxes:(id)arg1 cancel:(id /* block */)arg2;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)initWithMaxNumRegions:(int)arg1;

@end
