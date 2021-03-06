/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLHorizontalSubBatchLayout : NFLSubBatchLayout {
    NSArray * _components;
}

@property (nonatomic, copy) NSArray *components;

- (void).cxx_destruct;
- (id)components;
- (id)initWithFeedSettings:(id)arg1;
- (id)initWithFeedSettings:(id)arg1 components:(id)arg2;
- (bool)isValid;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (unsigned long long)rowSpan;
- (void)setComponents:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;

@end
