/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyerMatteTools : NSObject

- (bool)addAdvancedParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2;
- (bool)addLevelsParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2;
- (bool)addParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2 isLumaKey:(bool)arg3;
- (bool)doMatteManipulationWithParamAPI:(id)arg1 withPrivateParamAPI:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3 pixelAspectRatio:(float)arg4 fieldHeight:(float)arg5 doInvertMatte:(bool)arg6 inputIsInverted:(bool)arg7 fillHoles:(bool)arg8 scaling:(bool)arg9 blendingGamma:(float)arg10 preKeyedInputNode:(struct HGRef<HGNode> { struct HGNode {} *x1; }*)arg11 outputNode:(struct HGRef<HGNode> { struct HGNode {} *x1; }*)arg12;
- (id)init;

@end
