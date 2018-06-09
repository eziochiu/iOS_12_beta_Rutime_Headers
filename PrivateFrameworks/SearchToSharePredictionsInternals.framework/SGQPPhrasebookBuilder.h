/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPPhrasebookBuilder : NSObject {
    NSMutableArray * _entries;
    int  _maxTokensPerEntry;
    struct __CFStringTokenizer { } * _tokenizer;
}

- (void).cxx_destruct;
- (void)addEntry:(id)arg1 predictionType:(unsigned int)arg2 payload:(double)arg3;
- (void)addNormalizedEntry:(id)arg1 predictionType:(unsigned int)arg2 payload:(double)arg3 ntokens:(int)arg4;
- (void)dealloc;
- (id)init;
- (void)serializeToFileAtPath:(id)arg1;
- (void)sortEntries;

@end
