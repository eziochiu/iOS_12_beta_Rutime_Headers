/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMLLinearModel : REMLModel {
    NSDictionary * _models;
    float  _scaleFactor;
}

- (void).cxx_destruct;
- (void)_clearModel;
- (long long)_getNumberOfCoordinates;
- (bool)_loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (bool)_saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2;
- (bool)requiresDirectory;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3;

@end
