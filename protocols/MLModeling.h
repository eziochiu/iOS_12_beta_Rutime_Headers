/* made by EzioChiu.
 */

@protocol MLModeling

@required

- (MLModelInterface *)interface;
- (MLModelMetadata *)metadata;
- (MLModelDescription *)modelDescription;
- (<MLFeatureProvider> *)predictionFromFeatures:(id <MLFeatureProvider>)arg1 error:(id*)arg2;
- (<MLFeatureProvider> *)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;
- (<MLBatchProvider> *)predictionsFromBatch:(id <MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;

@end
