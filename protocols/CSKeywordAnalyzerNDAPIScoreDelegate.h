/* made by EzioChiu.
 */

@protocol CSKeywordAnalyzerNDAPIScoreDelegate <NSObject>

@required

- (void)keywordAnalyzerNDAPI:(CSKeywordAnalyzerNDAPI *)arg1 hasResultAvailable:(NSDictionary *)arg2 forChannel:(unsigned long long)arg3;

@end
