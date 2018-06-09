/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASUtterance : AceObject <SAAceSerializable>

@property (nonatomic) double confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *interpretationIndices;
@property (readonly) Class superclass;

+ (id)utterance;
+ (id)utteranceWithDictionary:(id)arg1 context:(id)arg2;

- (double)confidenceScore;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interpretationIndices;
- (void)setConfidenceScore:(double)arg1;
- (void)setInterpretationIndices:(id)arg1;

@end
