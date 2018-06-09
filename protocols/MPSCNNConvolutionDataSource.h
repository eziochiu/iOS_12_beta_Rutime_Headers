/* made by EzioChiu.
 */

@protocol MPSCNNConvolutionDataSource <NSObject>

@required

- (float*)biasTerms;
- (unsigned int)dataType;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (NSString *)label;
- (bool)load;
- (void)purge;
- (void*)weights;

@optional

- (float*)lookupTableForUInt8Kernel;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (MPSCNNConvolutionWeightsAndBiasesState *)updateWithCommandBuffer:(id <MTLCommandBuffer>)arg1 gradientState:(MPSCNNConvolutionGradientState *)arg2 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg3;
- (bool)updateWithGradientState:(MPSCNNConvolutionGradientState *)arg1 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg2;
- (unsigned int)weightsQuantizationType;

@end
