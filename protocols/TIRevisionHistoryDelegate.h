/* made by EzioChiu.
 */

@protocol TIRevisionHistoryDelegate <NSObject>

@required

- (struct TITokenID { unsigned int x1; unsigned int x2; })addWord:(NSString *)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id*)arg4;
- (void)decrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4;
- (struct TITokenID { unsigned int x1; unsigned int x2; })findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4;
- (struct TITokenID { unsigned int x1; unsigned int x2; })findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id*)arg5 hasCaseInsensitiveStaticVariant:(bool*)arg6;
- (void)incrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4 saveToDifferentialPrivacy:(int)arg5;
- (void)incrementUsageTrackingKey:(NSString *)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;
- (void)registerNegativeEvidence:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; }*)arg5 hint:(int)arg6;

@end
