/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPLandmarkValidator : NSObject {
    VCPCNNData * _input;
    VCPCNNModel * _model;
}

- (void).cxx_destruct;
- (void)calculateTransferMatrix:(float*)arg1 numLm:(int)arg2 inputWidth:(int)arg3 inputHeight:(int)arg4 outputWidth:(int)arg5 outputHeight:(int)arg6 T:(float*)arg7;
- (id)init:(bool)arg1;
- (float)validateOneImage:(struct __CVBuffer { }*)arg1 landmarks:(float*)arg2 numofLandmarks:(int)arg3;

@end
