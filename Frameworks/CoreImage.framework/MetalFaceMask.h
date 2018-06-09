/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface MetalFaceMask : NSObject {
    int  _chromaDilateRadius;
    int  _chromaErodeRadius;
    <MTLTexture> * _colorCubeTex;
    <MTLBuffer> * _inputScalingBuf;
    <MTLBuffer> * _labellingRowStartIdxBuf;
    <MTLBuffer> * _labellingSpanTableBuf;
    int  _lumaDilateRadius;
    int  _lumaErodeRadius;
    <MTLBuffer> * _minMaxAtomicBuf;
    <MTLDevice> * _mtlDevice;
    <MTLComputePipelineState> * _mtlKernel_AddSeedPoint;
    <MTLComputePipelineState> * _mtlKernel_CalcCubeInputScaling;
    <MTLComputePipelineState> * _mtlKernel_Clear;
    <MTLComputePipelineState> * _mtlKernel_ConnectSpans;
    <MTLComputePipelineState> * _mtlKernel_DilateCubeChroma1;
    <MTLComputePipelineState> * _mtlKernel_DilateCubeChroma2;
    <MTLComputePipelineState> * _mtlKernel_DilateCubeLuma;
    <MTLComputePipelineState> * _mtlKernel_DrawEye;
    <MTLComputePipelineState> * _mtlKernel_DrawSpans;
    <MTLComputePipelineState> * _mtlKernel_ErodeCubeChroma1;
    <MTLComputePipelineState> * _mtlKernel_ErodeCubeChroma2;
    <MTLComputePipelineState> * _mtlKernel_ErodeCubeLuma;
    <MTLComputePipelineState> * _mtlKernel_GenerateMask;
    <MTLComputePipelineState> * _mtlKernel_GenerateToothMask;
    <MTLComputePipelineState> * _mtlKernel_InitMinMax;
    <MTLComputePipelineState> * _mtlKernel_InitSpanTable;
    <MTLComputePipelineState> * _mtlKernel_MinMax;
    <MTLComputePipelineState> * _mtlKernel_PopulateCube;
    <MTLComputePipelineState> * _mtlKernel_PropagateParents;
    <MTLComputePipelineState> * _mtlKernel_PropogateAssociations;
    <MTLComputePipelineState> * _mtlKernel_ResolveAssociations;
    <MTLLibrary> * _mtlLibrary;
    <MTLTexture> * _tempColorCubeTex;
}

@property (nonatomic) int chromaDilateRadius;
@property (nonatomic) int chromaErodeRadius;
@property (nonatomic) int lumaDilateRadius;
@property (nonatomic) int lumaErodeRadius;

- (int)chromaDilateRadius;
- (int)chromaErodeRadius;
- (int)clearOutputTexture:(id)arg1 CommandBuffer:(id)arg2;
- (int)drawEyeMaskUsingQuads:(struct MetalFaceMaskEyeQuads_t { unsigned int x1; unsigned int x2; unsigned char x3; struct MetalFaceMaskQuad_t { } x4[16]; }*)arg1 OutputMaskTexture:(id)arg2 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 FaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 CommandBuffer:(id)arg5;
- (int)findSkinMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 OutputMaskTexture:(id)arg3 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 FaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 SeedPoints:(struct CGPoint { double x1; double x2; }*)arg6 NumberOfSeedPoints:(unsigned long long)arg7 FillValue:(unsigned char)arg8 CommandBuffer:(id)arg9;
- (int)findToothMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 OutputMaskTexture:(id)arg3 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 TeethBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 SeedPoints:(struct CGPoint { double x1; double x2; }*)arg6 NumberOfSeedPoints:(unsigned long long)arg7 FillValue:(unsigned char)arg8 CommandBuffer:(id)arg9;
- (id)initForDevice:(id)arg1;
- (int)lumaDilateRadius;
- (int)lumaErodeRadius;
- (void)setChromaDilateRadius:(int)arg1;
- (void)setChromaErodeRadius:(int)arg1;
- (void)setLumaDilateRadius:(int)arg1;
- (void)setLumaErodeRadius:(int)arg1;
- (int)trainSkinMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 QuadRegion:(struct CGPoint { double x1; double x2; })arg3 CommandBuffer:(id)arg4;

@end
