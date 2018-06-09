/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCContentIndex : NSObject <NSFilePresenter> {
    NSMutableArray * _cachedContentIndex;
    bool  _invalidated;
    NSURL * _itemURL;
    id  _lastGenerationIdentifier;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, retain) NSMutableArray *cachedContentIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *index;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSURL *itemURL;
@property (nonatomic, retain) id lastGenerationIdentifier;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addContentIdentifier:(id)arg1;
- (id)cachedContentIndex;
- (void)commit;
- (id)description;
- (unsigned long long)hash;
- (id)index;
- (id)initWithContainingFolder:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (bool)isEqual:(id)arg1;
- (id)itemURL;
- (id)lastGenerationIdentifier;
- (void)loadContentIfNecessary;
- (id)operationQueue;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)removeContentIdentifier:(id)arg1;
- (void)setCachedContentIndex:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setItemURL:(id)arg1;
- (void)setLastGenerationIdentifier:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
