/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLCustomLayerWrapper : NSObject <EspressoBrick> {
    NSString * _className;
    NSObject<MLCustomLayer> * _customImpl;
}

@property (nonatomic, readonly) NSString *className;
@property (nonatomic, retain) NSObject<MLCustomLayer> *customImpl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)coremlShapeToEspressoShape:(id)arg1;
+ (id)coremlShapesToEspressoShapes:(id)arg1;
+ (id)espressoShapeToCoremlShape:(id)arg1;
+ (id)espressoShapesToCoremlShapes:(id)arg1;
+ (id)espressoTensorToCoremlTensor:(id)arg1;
+ (id)espressoTensorsToCoremlTensors:(id)arg1;
+ (id)espressoTensorsToCoremlTensorsGPU:(id)arg1;
+ (id)factory;
+ (id)getStrides:(id)arg1;
+ (int)intFromFourBytes:(char *)arg1;

- (void).cxx_destruct;
- (id)className;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (id)customImpl;
- (void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (void)setCustomImpl:(id)arg1;
- (void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;

@end
