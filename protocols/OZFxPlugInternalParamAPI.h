/* made by EzioChiu.
 */

@protocol OZFxPlugInternalParamAPI <NSObject>

@required

- (bool)_getBoolValue:(bool*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getFloatValue:(double*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getIntValue:(int*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getPathID:(void**)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)_getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)_getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned int)arg3 atTime:(union { double x1; struct { /* ? */ } *x2; })arg4;

@end