/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCInflateFeedGroupOperation : FCOperation {
    bool  _cachedOnly;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    FCDeflatedFeedGroup * _deflatedGroup;
    FCFeedDescriptor * _feedDescriptor;
    FCFeedGroup * _inflatedGroup;
    id /* block */  _inflationCompletionHandler;
}

@property (nonatomic) bool cachedOnly;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) FCDeflatedFeedGroup *deflatedGroup;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, retain) FCFeedGroup *inflatedGroup;
@property (nonatomic, copy) id /* block */ inflationCompletionHandler;

- (void).cxx_destruct;
- (void)_fetchHeadlinesWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchHeadlinesWithDeflatedHeadlines:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchTagsForPBGroup:(id)arg1 sharedStrings:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)cachedOnly;
- (id)configuration;
- (id)context;
- (id)deflatedGroup;
- (id)feedDescriptor;
- (id)inflatedGroup;
- (id /* block */)inflationCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCachedOnly:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeflatedGroup:(id)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setInflatedGroup:(id)arg1;
- (void)setInflationCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
