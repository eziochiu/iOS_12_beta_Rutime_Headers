/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMLModel : NSObject {
    REConcurrentDictionary * _predictionCache;
}

+ (unsigned long long)featureBitWidth;
+ (unsigned long long)maxFeatureCount;
+ (id)modelWithFeatureSet:(id)arg1;

- (void).cxx_destruct;
- (void)_clearModel;
- (long long)_getNumberOfCoordinates;
- (bool)_loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (bool)_saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (void)clearModel;
- (void)collectLoggableState:(id /* block */)arg1;
- (long long)getNumberOfCoordinates;
- (id)init;
- (id)initWithFeatureSet:(id)arg1;
- (bool)loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)predictWithFeatures:(id)arg1;
- (bool)requiresDirectory;
- (bool)saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;

@end
