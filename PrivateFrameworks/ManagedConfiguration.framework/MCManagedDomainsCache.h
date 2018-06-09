/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCManagedDomainsCache : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableArray * _memberQueueCache;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSMutableArray *memberQueueCache;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (bool)isURLManaged:(id)arg1;
- (id)memberQueue;
- (id)memberQueueCache;
- (void)memberQueueRereadCache;
- (void)rereadCache;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueCache:(id)arg1;

@end
