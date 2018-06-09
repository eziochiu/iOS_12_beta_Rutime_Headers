/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer {
    float  _contrast;
    bool  _sdof;
}

+ (id)analyzer;

- (float)calculateScoreFromNetworkOutput:(float*)arg1 outChannel:(int)arg2 outHeight:(int)arg3 outWidth:(int)arg4 textureness:(char *)arg5 imgWidth:(int)arg6;
- (int)computeCNNBasedSharpness:(struct __CVBuffer { }*)arg1 sharpnessScore:(float*)arg2 cancel:(id /* block */)arg3;
- (int)computeSharpnessScore:(float*)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(id /* block */)arg5;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (int)initInputFromCVPixelBuffer:(struct __CVBuffer { }*)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 input:(float*)arg5;
- (int)initModel:(int)arg1 srcWidth:(int)arg2;
- (id)initWithParameters:(bool)arg1 contrast:(float)arg2;

@end
