/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface _MLNLPSentenceClassifierModel : NSObject <MLCustomModel> {
    MLModelDescription * _modelDescription;
    void * _sentenceClassifierModel;
}

@property (retain) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setModelDescription:(id)arg1;

@end
