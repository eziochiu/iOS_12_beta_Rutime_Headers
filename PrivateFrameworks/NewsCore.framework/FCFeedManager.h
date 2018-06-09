/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedManager : NSObject {
    FCCloudContext * _context;
    NSMapTable * _feedDescriptorsByID;
    NFMutexLock * _feedDescriptorsLock;
    <FCFeedPersonalizing> * _feedPersonalizer;
    FCAsyncSerialQueue * _feedUpdateQueue;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSMapTable *feedDescriptorsByID;
@property (nonatomic, retain) NFMutexLock *feedDescriptorsLock;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, retain) FCAsyncSerialQueue *feedUpdateQueue;

+ (id)_identifierForFeedName:(id)arg1;
+ (id)feedDescriptorNameForForYou;
+ (id)feedDescriptorNameForReadingHistory;
+ (id)feedDescriptorNameForReadingList;

- (void).cxx_destruct;
- (id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(bool)arg2 tag:(id)arg3;
- (id)context;
- (id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1;
- (id)feedDescriptorForForYou;
- (id)feedDescriptorForReadingHistory;
- (id)feedDescriptorForReadingList;
- (id)feedDescriptorForTag:(id)arg1;
- (id)feedDescriptorWithIdentifier:(id)arg1;
- (id)feedDescriptorsByID;
- (id)feedDescriptorsLock;
- (id)feedPersonalizer;
- (id)feedUpdateQueue;
- (id)init;
- (id)initWithCloudContext:(id)arg1;
- (void)prefetchForYouWithHighPriority:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setContext:(id)arg1;
- (void)setFeedDescriptorsByID:(id)arg1;
- (void)setFeedDescriptorsLock:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFeedUpdateQueue:(id)arg1;

@end
