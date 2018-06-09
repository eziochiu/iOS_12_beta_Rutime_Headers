/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTrendingStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {
    long long  _desiredArticlesCount;
}

@property (nonatomic) long long desiredArticlesCount;

- (id)_filterTrendingHeadlines:(id)arg1;
- (long long)desiredArticlesCount;
- (void)performOperation;
- (void)setDesiredArticlesCount:(long long)arg1;

@end
