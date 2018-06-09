/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel> {
    MLModelDescription * _modelDescription;
    int  _scenePrintRequestRevision;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) int scenePrintRequestRevision;

- (void).cxx_destruct;
- (id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (int)scenePrintRequestRevision;

@end
