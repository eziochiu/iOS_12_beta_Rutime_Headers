/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNConvBlockBinary : VCPCNNBlock {
    float * _bias;
    unsigned long long  _convType;
    int  _filterNum;
    float * _filterScaling;
    int  _filterSize;
    int  _filterWeightSize;
    unsigned int * _filterWeightsBinary;
    MPSCNNBinaryConvolution * _mpsBinaryConv;
    int  _padding;
    bool  _reLU;
}

- (void).cxx_destruct;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (int)fillConvWeightsGPU;
- (int)forward;
- (int)gpuForward;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 convType:(unsigned long long)arg3 reLU:(bool)arg4 padding:(bool)arg5;
- (int)readFromDisk:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 quantFactor:(short)arg2;
- (bool)supportGPU;
- (bool)useGPU;

@end
