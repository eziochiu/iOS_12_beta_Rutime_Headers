/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSignatureDissector : SGPipelineDissector

+ (id)singleLineSignatureLeadingCharacterSet;

- (bool)_paragraphWithContent:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 exceedsLineLimit:(unsigned long long)arg3 orCharacterLimit:(unsigned long long)arg4;
- (id)authorFirstname:(id)arg1;
- (id)authorName:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)findRejectSig:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })findSignaturePrefix:(id)arg1;
- (id)findSignaturePrefixesInEntity:(id)arg1 withSignaturePrefixes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })findValediction:(id)arg1;
- (id)findValedictionCommencedSignatureRanges:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmPlausibleSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmSignatureRangeWithContent:(id)arg1 detectedData:(id)arg2 quotedRegions:(id)arg3 authorName:(id)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })miniSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSenderName:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 restrictLength:(bool)arg3 forEntity:(id)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSenderNameComponents:(id)arg1 withFullname:(id)arg2 inSubstring:(id)arg3;
- (bool)shouldIgnoreSignature:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sigHtmlBlockRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })signatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })trailingSenderNameLineRange:(id)arg1;

@end
