/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLModelImplLC : NLModelImpl {
    NLModelConfiguration * _configuration;
    NSDictionary * _documentFrequencyMap;
    NSDictionary * _labelMap;
    const void * _maxEntModel;
    NSData * _modelData;
    unsigned long long  _numberOfTrainingInstances;
    NSDictionary * _vocabularyMap;
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
- (id)predictedLabelsForTokens:(id)arg1;
- (id)vocabularyMap;

@end
