/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMLSentimentAnalyzer : NSObject <NSCopying> {
    REContentRanker * _contentRanker;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentRanker:(id)arg1;
- (float)sentimentForText:(id)arg1;
- (float)sentimentForTokens:(id)arg1;

@end
