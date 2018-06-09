/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNameInversionPredictor : NSObject {
    double  _confidenceThreshold;
    NSDictionary * _tradToInversionRate;
    struct __CFDictionary { } * _tradToTrie;
}

+ (id)sharedInstance;
+ (bool)shouldInvertFirst:(id)arg1 last:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (float)decodeTriePayload:(unsigned int)arg1;
- (double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3;
- (struct _CFBurstTrie { }*)getTrieForNamingTradition:(id)arg1;
- (id)init;
- (double)inversionRateForNamingTradition:(id)arg1;
- (bool)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (bool)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3;

@end
