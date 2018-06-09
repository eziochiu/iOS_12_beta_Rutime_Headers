/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSourceAvailabilityManager : NSObject {
    NSOrderedSet * _availabilityEntriesInPreferredOrder;
    id /* block */  _preferredSourceChangedNotificationBlock;
    Class  _preferredSourceFetchDescriptorClass;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) NSOrderedSet *availabilityEntriesInPreferredOrder;
@property (nonatomic, copy) id /* block */ preferredSourceChangedNotificationBlock;
@property (nonatomic) Class preferredSourceFetchDescriptorClass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_recomputePreferredAvailableTodayResultsSource;
- (void)_setPreferredAvailableTodayResultsSource:(Class)arg1;
- (id)availabilityEntriesInPreferredOrder;
- (id)init;
- (id)initWithAvailabilityEntriesInPreferredOrder:(id)arg1 queue:(id)arg2;
- (id /* block */)preferredSourceChangedNotificationBlock;
- (Class)preferredSourceFetchDescriptorClass;
- (id)queue;
- (void)setAvailabilityEntriesInPreferredOrder:(id)arg1;
- (void)setPreferredSourceChangedNotificationBlock:(id /* block */)arg1;
- (void)setPreferredSourceFetchDescriptorClass:(Class)arg1;
- (void)setQueue:(id)arg1;

@end