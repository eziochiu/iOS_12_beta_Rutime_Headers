/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDetectedAttributeDissector : SGPipelineDissector {
    SGDetectedAttributeML * _ml;
    unsigned long long  _selfIdentificationMessageCount;
}

@property (nonatomic) unsigned long long selfIdentificationMessageCount;

+ (void)clearConversationCache;
+ (id)currentPatterns;
+ (id)dissectorWithMockedMLTrainingForTests;
+ (bool)isAddressContext:(id)arg1;
+ (bool)isMaybeNameContext:(id)arg1;
+ (bool)isNameRequest:(id)arg1;
+ (bool)isPhoneContext:(id)arg1;
+ (id)patterns;

- (void).cxx_destruct;
- (id)_extractEmailishTokenFromMailHeader:(id)arg1;
- (id)_makeAlnum:(id)arg1;
- (id)_makeSimplifiedListIdEmail:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)detectionFromBodyDDMatch:(id)arg1 onEntity:(id)arg2 withSupervisionToFill:(id)arg3;
- (id)detectionFromSignatureDDMatch:(id)arg1 onEntity:(id)arg2 detectedLabelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 lastClaimedLabelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)filterDangerousSigAddressDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)filterDangerousSigEmailDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)filterDangerousSigPhoneDetections:(id)arg1 onEntity:(id)arg2;
- (id)getLineContaining:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2;
- (void)handleTextMessageSelfIdentification:(id)arg1;
- (id)init;
- (id)initWithML:(id)arg1;
- (id)processTextMessageConversation:(id)arg1 messageIndex:(unsigned long long)arg2;
- (unsigned long long)selfIdentificationMessageCount;
- (void)setSelfIdentificationMessageCount:(unsigned long long)arg1;

@end
