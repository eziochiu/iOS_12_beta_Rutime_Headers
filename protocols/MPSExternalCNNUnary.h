/* made by EzioChiu.
 */

@protocol MPSExternalCNNUnary <MPSExternalPluginBase>

@required

- (unsigned long long)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 computeCommandEncoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 sourceTexture:(id <MTLTexture>)arg5 sourceInfo:(const struct { unsigned long long x1; unsigned long long x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; } x3; unsigned long long x4; }*)arg6 destinationTexture:(id <MTLTexture>)arg7 destinationInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; } x_4_1_1; struct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; } x_4_1_2; } x4; }*)arg8;
- (unsigned long long)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 computeCommandEncoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 sourceTexture:(id <MTLTexture>)arg4 sourceInfo:(const struct { unsigned long long x1; unsigned long long x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; } x3; unsigned long long x4; }*)arg5 destinationTexture:(id <MTLTexture>)arg6 destinationInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; } x_4_1_1; struct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; } x_4_1_2; } x4; }*)arg7;

@end
