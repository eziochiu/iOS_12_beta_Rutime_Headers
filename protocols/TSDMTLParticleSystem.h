/* made by EzioChiu.
 */

@protocol TSDMTLParticleSystem <NSObject>

@required

+ (<TSDMTLParticleSystem> *)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize { double x1; double x2; })arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 duration:(double)arg4 direction:(unsigned long long)arg5 randomGenerator:(id <TSDAnimationRandomGenerator>)arg6 pipelineDescriptor:(MTLRenderPipelineDescriptor *)arg7 device:(id <MTLDevice>)arg8;
+ (<TSDMTLParticleSystem> *)newParticleSystemWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id <TSDAnimationRandomGenerator>)arg7 pipelineDescriptor:(MTLRenderPipelineDescriptor *)arg8 device:(id <MTLDevice>)arg9;

- (<TSDMTLDataBuffer> *)dataBuffer;
- (<MTLDevice> *)device;
- (void)drawMetalWithEncoder:(id <MTLRenderCommandEncoder>)arg1;
- (void)setupMetalWithPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (bool)shouldUseMetal;

@end
