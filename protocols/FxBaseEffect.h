/* made by EzioChiu.
 */

@protocol FxBaseEffect

@required

- (bool)addParameters;
- (NSDictionary *)properties;
- (bool)variesOverTime;

@optional

- (NSDictionary *)dynamicPropertiesAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1 withError:(id*)arg2;
- (bool)finishInitialSetup:(id*)arg1;
- (unsigned long long)numberOfFramesToScheduleAtRenderTime:(union { double x1; struct { /* ? */ } *x2; })arg1 forParam:(unsigned int)arg2;
- (bool)parameterChanged:(unsigned int)arg1;
- (void)schedule:(unsigned long long)arg1 frames:(union { double x1; struct { /* ? */ } *x2; }*)arg2 forParam:(unsigned int)arg3 forRenderAtTime:(union { double x1; struct { /* ? */ } *x2; })arg4;

@end
