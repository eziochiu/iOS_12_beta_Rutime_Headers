/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLModel : NSObject {
    NLModelConfiguration * _configuration;
    void * _container;
    NSData * _data;
    NSDictionary * _infoDictionary;
    MLModel * _mlModel;
    NLModelImpl * _modelImpl;
}

@property (readonly, copy) NLModelConfiguration *configuration;

+ (id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)classifierTestResultsWithDataProvider:(id)arg1;
- (id)configuration;
- (id)data;
- (void)dealloc;
- (id)documentFrequencyMap;
- (id)initWithConfiguration:(id)arg1 modelImpl:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 mlModel:(id)arg2 error:(id*)arg3;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (id)labelMap;
- (id)mlModel;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)sequenceTestResultsWithDataProvider:(id)arg1;
- (id)testResultsWithDataProvider:(id)arg1;
- (id)testResultsWithDataSet:(id)arg1;
- (id)vocabularyMap;
- (bool)writeMLModelToURL:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;

@end
