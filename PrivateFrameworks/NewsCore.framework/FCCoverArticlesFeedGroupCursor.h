/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCoverArticlesFeedGroupCursor : FCFeedGroupEmittingCursor {
    NSOrderedSet * _promotedArticleIDs;
}

@property (nonatomic, copy) NSOrderedSet *promotedArticleIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)promotedArticleIDs;
- (void)setPromotedArticleIDs:(id)arg1;

@end
