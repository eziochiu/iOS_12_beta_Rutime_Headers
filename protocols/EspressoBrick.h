/* made by EzioChiu.
 */

@protocol EspressoBrick <NSObject>

@required

- (bool)hasGPUSupport;
- (id)initWithParameters:(NSDictionary *)arg1;
- (NSArray *)setupForInputShapes:(NSArray *)arg1 withParameters:(NSDictionary *)arg2;

@optional

- (void)computeOnCPUWithInputTensors:(NSArray *)arg1 outputTensors:(NSArray *)arg2;
- (void)encodeToMetalCommandBuffer:(id <MTLCommandBuffer>)arg1 inputTensors:(NSArray *)arg2 outputTensors:(NSArray *)arg3;
- (void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2;

@end
