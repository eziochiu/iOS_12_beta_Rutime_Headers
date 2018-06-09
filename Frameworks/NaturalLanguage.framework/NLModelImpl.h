/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLModelImpl : NSObject {
    unsigned long long  _numberOfTrainingInstances;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly, copy) NSDictionary *documentFrequencyMap;
@property (readonly, copy) NSDictionary *labelMap;
@property (readonly) unsigned long long numberOfTrainingInstances;
@property (readonly, copy) NSDictionary *vocabularyMap;

- (id)configuration;
- (id)documentFrequencyMap;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;
- (id)initWithModelTrainer:(id)arg1;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)vocabularyMap;

@end
