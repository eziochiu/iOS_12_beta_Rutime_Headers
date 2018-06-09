/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOfflineArticleFetchOperation : FCMultiStepFetchOperation {
    NSString * _articleID;
    id  _classificationFetchedObject;
    id  _contentFetchedObject;
    FCCloudContext * _context;
    FCHeadline * _headline;
    id  _thumbnailFetchedObject;
}

@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, retain) id classificationFetchedObject;
@property (nonatomic, retain) id contentFetchedObject;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) FCHeadline *headline;
@property (nonatomic, retain) id thumbnailFetchedObject;

- (void).cxx_destruct;
- (id)articleID;
- (id)classificationFetchedObject;
- (id)completeFetchOperation;
- (id)contentFetchedObject;
- (id)context;
- (id)fetchClassificationWithCompletion:(id /* block */)arg1;
- (id)fetchContentWithCompletion:(id /* block */)arg1;
- (id)fetchHeadlineWithCompletion:(id /* block */)arg1;
- (id)fetchThumbnailWithCompletion:(id /* block */)arg1;
- (id)headline;
- (id)initWithContext:(id)arg1 articleID:(id)arg2;
- (void)setArticleID:(id)arg1;
- (void)setClassificationFetchedObject:(id)arg1;
- (void)setContentFetchedObject:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setThumbnailFetchedObject:(id)arg1;
- (id)thumbnailFetchedObject;

@end
