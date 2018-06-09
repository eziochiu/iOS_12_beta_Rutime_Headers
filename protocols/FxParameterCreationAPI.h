/* made by EzioChiu.
 */

@protocol FxParameterCreationAPI

@required

- (bool)addAngleSliderWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 parmFlags:(unsigned int)arg6;
- (bool)addColorParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 defaultAlpha:(double)arg6 parmFlags:(unsigned int)arg7;
- (bool)addColorParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 parmFlags:(unsigned int)arg6;
- (bool)addCustomParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(id <NSCoding>)arg3 parmFlags:(unsigned int)arg4;
- (bool)addFloatSliderWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
- (bool)addImageReferenceWithName:(NSString *)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)addIntSliderWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(int)arg3 parameterMin:(int)arg4 parameterMax:(int)arg5 sliderMin:(int)arg6 sliderMax:(int)arg7 delta:(int)arg8 parmFlags:(unsigned int)arg9;
- (bool)addPointParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (bool)addPopupMenuWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(unsigned int)arg3 menuEntries:(NSArray *)arg4 parmFlags:(unsigned int)arg5;
- (bool)addToggleButtonWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(bool)arg3 parmFlags:(unsigned int)arg4;
- (bool)endParameterSubGroup;
- (bool)startParameterSubGroup:(NSString *)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;

@end
