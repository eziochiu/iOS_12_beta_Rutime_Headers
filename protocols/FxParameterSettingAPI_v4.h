/* made by EzioChiu.
 */

@protocol FxParameterSettingAPI_v4 <NSObject>

@required

- (bool)setBoolValue:(bool)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setCustomParameterValue:(id <NSCoding>)arg1 toParm:(unsigned int)arg2;
- (bool)setCustomParameterValue:(id <NSCoding>)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (bool)setPathID:(void*)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)setStringParameterValue:(NSString *)arg1 toParm:(unsigned int)arg2;
- (bool)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg4;

@end
