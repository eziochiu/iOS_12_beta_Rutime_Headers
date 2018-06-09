/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNMPSDataSource : NSObject <MPSCNNConvolutionDataSource> {
    float * _biasTerms;
    unsigned int  _dataType;
    MPSCNNConvolutionDescriptor * _descriptor;
    void * _kernelWeights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float*)biasTerms;
- (unsigned int)dataType;
- (id)descriptor;
- (id)initWith:(unsigned int)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(void*)arg3 biasTerm:(float*)arg4;
- (id)label;
- (bool)load;
- (void)purge;
- (void*)weights;

@end
