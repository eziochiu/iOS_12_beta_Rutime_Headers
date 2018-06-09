/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingListContentController : NSObject <FCKeyedOperationQueueDelegate, FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {
    NSObject<OS_dispatch_group> * _articleContentDownloadGroup;
    FCKeyedOperationQueue * _articleContentDownloadKeyQueue;
    NSArray * _articleIDsAvailableForOfflineReading;
    NSArray * _articleIDsOfInterest;
    FCCloudContext * _context;
    NSMutableSet * _fetchResults;
    bool  _hasBeenEnabled;
    NSDictionary * _holdInterestTokensByArticleID;
    NSMutableDictionary * _outstandingOperationsByArticleID;
    FCThreadSafeMutableSet * _readingListAvailableForOfflineReading;
    <FCOperationThrottler> * _updateHoldInterestTokensThrottler;
    <FCReadingListContentControllerObserving> * observer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *articleContentDownloadGroup;
@property (nonatomic, retain) FCKeyedOperationQueue *articleContentDownloadKeyQueue;
@property (nonatomic, copy) NSArray *articleIDsAvailableForOfflineReading;
@property (nonatomic, copy) NSArray *articleIDsOfInterest;
@property (nonatomic, retain) FCCloudContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *fetchResults;
@property (nonatomic) bool hasBeenEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *holdInterestTokensByArticleID;
@property (nonatomic) <FCReadingListContentControllerObserving> *observer;
@property (nonatomic, retain) NSMutableDictionary *outstandingOperationsByArticleID;
@property (nonatomic, retain) FCThreadSafeMutableSet *readingListAvailableForOfflineReading;
@property (nonatomic, readonly) NSSet *readingListForOfflineReading;
@property (readonly) Class superclass;
@property (nonatomic, retain) <FCOperationThrottler> *updateHoldInterestTokensThrottler;

- (void).cxx_destruct;
- (void)_fetchHoldInterestTokensForArticleIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateInterestsIfNeeded;
- (id)articleContentDownloadGroup;
- (id)articleContentDownloadKeyQueue;
- (id)articleIDsAvailableForOfflineReading;
- (id)articleIDsOfInterest;
- (id)context;
- (void)dealloc;
- (void)enableDownloadingForOfflineReading;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(id /* block */)arg1;
- (id)fetchResults;
- (bool)hasBeenEnabled;
- (id)holdInterestTokensByArticleID;
- (id)init;
- (id)initWithContext:(id)arg1;
- (bool)isArticleAvailableForOfflineReading:(id)arg1;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(id /* block */)arg3;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)observer;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (id)outstandingOperationsByArticleID;
- (id)readingListAvailableForOfflineReading;
- (id)readingListForOfflineReading;
- (void)setArticleContentDownloadGroup:(id)arg1;
- (void)setArticleContentDownloadKeyQueue:(id)arg1;
- (void)setArticleIDsAvailableForOfflineReading:(id)arg1;
- (void)setArticleIDsOfInterest:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setHasBeenEnabled:(bool)arg1;
- (void)setHoldInterestTokensByArticleID:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setOutstandingOperationsByArticleID:(id)arg1;
- (void)setReadingListAvailableForOfflineReading:(id)arg1;
- (void)setUpdateHoldInterestTokensThrottler:(id)arg1;
- (id)updateHoldInterestTokensThrottler;

@end
