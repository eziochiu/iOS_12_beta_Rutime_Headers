/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingHistorySyncResults : NSObject {
    NSArray * _deletedArticleIDs;
    NSArray * _modifiedArticleIDs;
    NSArray * _newlyCreatedArticleIDs;
}

@property (nonatomic, retain) NSArray *deletedArticleIDs;
@property (nonatomic, retain) NSArray *modifiedArticleIDs;
@property (nonatomic, retain) NSArray *newlyCreatedArticleIDs;

- (void).cxx_destruct;
- (id)deletedArticleIDs;
- (id)initWithModifiedArticleIDs:(id)arg1 deletedArticleIDs:(id)arg2 newArticleIDs:(id)arg3;
- (id)modifiedArticleIDs;
- (id)newlyCreatedArticleIDs;
- (void)setDeletedArticleIDs:(id)arg1;
- (void)setModifiedArticleIDs:(id)arg1;
- (void)setNewlyCreatedArticleIDs:(id)arg1;

@end
