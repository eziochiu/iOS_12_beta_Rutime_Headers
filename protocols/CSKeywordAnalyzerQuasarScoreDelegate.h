/* made by EzioChiu.
 */

@protocol CSKeywordAnalyzerQuasarScoreDelegate <NSObject>

@required

- (void)keywordAnalyzerQuasar:(CSKeywordAnalyzerQuasar *)arg1 hasResultAvailable:(NSDictionary *)arg2 forChannel:(unsigned long long)arg3;

@end
