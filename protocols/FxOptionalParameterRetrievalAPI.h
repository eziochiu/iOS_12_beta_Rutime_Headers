/* made by EzioChiu.
 */

@protocol FxOptionalParameterRetrievalAPI

@required

- (bool)getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atTime:(double)arg5;
- (bool)getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atTime:(double)arg8;

@end