/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelDescriptor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLModelLearningRates * _learningRates;
    NSString * _name;
    NSNumber * _version;
    PMLModelWeights * _weights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PMLModelLearningRates *learningRates;
@property (retain) NSString *name;
@property (readonly) Class superclass;
@property (retain) NSNumber *version;
@property (retain) PMLModelWeights *weights;

+ (bool)isValidModelDescriptorInPlistMetadata:(id)arg1 withErrorDescription:(id*)arg2;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)learningRates;
- (id)name;
- (void)setLearningRates:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)toDictionary;
- (id)toPlistWithChunks:(id)arg1;
- (id)version;
- (id)weights;

@end
