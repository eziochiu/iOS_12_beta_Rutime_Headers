/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleContentFetchOperation : FCMultiStepFetchOperation {
    NSString * _articleID;
    NTPBArticleRecord * _articleRecord;
    FCArticleContentManifest * _contentManifest;
    FCCloudContext * _context;
    NSArray * _flintResources;
    FCHeldRecords * _heldArticleRecords;
    FCInterestToken * _webArchiveInterestToken;
}

@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, retain) NTPBArticleRecord *articleRecord;
@property (nonatomic, retain) FCArticleContentManifest *contentManifest;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSArray *flintResources;
@property (nonatomic, retain) FCHeldRecords *heldArticleRecords;
@property (nonatomic, retain) FCInterestToken *webArchiveInterestToken;

- (void).cxx_destruct;
- (id)articleID;
- (id)articleRecord;
- (id)completeFetchOperation;
- (id)contentManifest;
- (id)context;
- (id)fetchContentManifestWithCompletion:(id /* block */)arg1;
- (id)fetchFlintDocumentWithCompletion:(id /* block */)arg1;
- (id)fetchFlintResourcesWithCompletion:(id /* block */)arg1;
- (id)fetchWebArchiveWithCompletion:(id /* block */)arg1;
- (id)fetchWebExcerptWithCompletion:(id /* block */)arg1;
- (id)flintResources;
- (id)heldArticleRecords;
- (id)initWithContext:(id)arg1 articleID:(id)arg2;
- (void)setArticleID:(id)arg1;
- (void)setArticleRecord:(id)arg1;
- (void)setContentManifest:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFlintResources:(id)arg1;
- (void)setHeldArticleRecords:(id)arg1;
- (void)setWebArchiveInterestToken:(id)arg1;
- (id)webArchiveInterestToken;

@end
