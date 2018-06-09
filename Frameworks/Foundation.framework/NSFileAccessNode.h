/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessNode : NSObject {
    id  _accessClaimOrClaims;
    NSMutableDictionary * _childrenByNormalizedName;
    bool  _isArbitrationBoundary;
    bool  _isFilePackage;
    bool  _isFilePackageIsFigured;
    NSFileAccessNode * _lastRequestedChild;
    NSString * _lastRequestedChildName;
    NSString * _name;
    NSString * _normalizedName;
    NSFileAccessNode * _parent;
    id  _presenterOrPresenters;
    id  _progressPublisherOrPublishers;
    id  _progressSubscriberOrSubscribers;
    NSFileProviderProxy * _provider;
    NSFileAccessNode * _symbolicLinkDestination;
    unsigned long long  _symbolicLinkReferenceCount;
}

- (id)_childrenExcludingExcessNodes:(bool)arg1 excludingReactors:(bool)arg2;
- (void)_forEachRelevantAccessClaimExcludingClaimsFromSuperarbiter:(bool)arg1 performProcedure:(id /* block */)arg2;
- (bool)_mayContainCriticalDebuggingInformationExcludingReactors:(bool)arg1;
- (void)addAccessClaim:(id)arg1;
- (void)addPresenter:(id)arg1;
- (void)addProgressPublisher:(id)arg1;
- (void)addProgressSubscriber:(id)arg1;
- (void)assertDead;
- (void)assertDescendantsLive;
- (void)assertLive;
- (id)biggestFilePackageLocation;
- (id)childForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofPath:(id)arg2;
- (void)dealloc;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 create:(bool)arg3;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forAddingLeafNode:(id)arg3 create:(bool)arg4;
- (id)descendantForFileURL:(id)arg1;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(bool)arg2 excludingReactors:(bool)arg3;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id /* block */)arg1;
- (void)forEachAccessClaimOnItemPerformProcedure:(id /* block */)arg1;
- (void)forEachDescendantPerformProcedure:(id /* block */)arg1;
- (void)forEachPresenterOfContainedItemPerformProcedure:(id /* block */)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(id /* block */)arg1;
- (void)forEachPresenterOfContainingItemPerformProcedure:(id /* block */)arg1;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id /* block */)arg1;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id /* block */)arg1;
- (void)forEachPresenterOfItemPerformProcedure:(id /* block */)arg1;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(id /* block */)arg1;
- (void)forEachProgressPublisherOfItemPerformProcedure:(id /* block */)arg1;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(id /* block */)arg1;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(id /* block */)arg1;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(id /* block */)arg1;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(id /* block */)arg1;
- (void)forEachRelevantAccessClaimForEvaluatingAgainstClaim:(id)arg1 performProcedure:(id /* block */)arg2;
- (void)forEachRelevantAccessClaimPerformProcedure:(id /* block */)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;
- (bool)itemIsFilePackage;
- (bool)itemIsInItemAtLocation:(id)arg1;
- (bool)itemIsItemAtLocation:(id)arg1;
- (bool)itemIsSubarbitrable;
- (id)itemProvider;
- (id)normalizationOfChildName:(id)arg1;
- (id)parent;
- (id)pathExceptPrivate;
- (id)pathFromAncestor:(id)arg1;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)removeAccessClaim:(id)arg1;
- (void)removeChildForNormalizedName:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)removeProgressPublisher:(id)arg1;
- (void)removeProgressSubscriber:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)removeSelfIfUseless;
- (id)sensitiveDescription;
- (id)sensitiveSubarbiterDescription;
- (void)setArbitrationBoundary;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (void)setParent:(id)arg1 name:(id)arg2;
- (bool)setProvider:(id)arg1;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)standardizedURL;
- (id)subarbiterDescription;
- (id)url;
- (id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2;

@end