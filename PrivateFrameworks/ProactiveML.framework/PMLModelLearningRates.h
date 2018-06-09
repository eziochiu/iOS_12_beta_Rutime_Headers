/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelLearningRates : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLMutableDenseVector * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modelLearningRatesFromFloats:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (id)initModelLearningRatesFromFloats:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (unsigned long long)length;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)toDictionary;
- (id)toPlistWithChunks:(id)arg1;
- (float*)values;

@end
