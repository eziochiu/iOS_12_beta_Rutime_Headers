/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLModelImplM : NLModelImpl {
    NLModelConfiguration * _configuration;
    NSDictionary * _labelMap;
    const void * _mrlModel;
    unsigned long long  _numberOfTrainingInstances;
    NSDictionary * _vocabularyMap;
}

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)documentFrequencyMap;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;
- (id)initWithModelTrainer:(id)arg1;
- (id)initWithOwnedModelObject:(const void*)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 numberOfTrainingInstances:(unsigned long long)arg5;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)vocabularyMap;

@end
