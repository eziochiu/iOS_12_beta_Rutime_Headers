/* made by EzioChiu.
 */

@protocol TSDGLParticleSystem <NSObject>

@required

+ (<TSDGLParticleSystem> *)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize { double x1; double x2; })arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(TSDGLShader *)arg6 randomGenerator:(id <TSDAnimationRandomGenerator>)arg7;
+ (<TSDGLParticleSystem> *)newParticleSystemWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(TSDGLShader *)arg7 randomGenerator:(id <TSDAnimationRandomGenerator>)arg8;

- (<TSDGLDataBuffer> *)dataBuffer;
- (void)drawGLSLWithPercent:(double)arg1 opacity:(double)arg2;
- (void)setupGLSL;
- (bool)shouldUseGLSL;

@end
