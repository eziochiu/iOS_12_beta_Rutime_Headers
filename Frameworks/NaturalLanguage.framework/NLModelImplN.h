/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLModelImplN : NLModelImpl {
    NLModelConfiguration * _configuration;
    NSDictionary * _labelMap;
    void * _nlModel;
    unsigned long long  _numberOfTrainingInstances;
}

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)documentFrequencyMap;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;
- (id)initWithModelTrainer:(id)arg1;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsDictionaryForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)vocabularyMap;

@end
