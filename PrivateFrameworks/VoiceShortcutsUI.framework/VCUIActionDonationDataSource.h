/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIActionDonationDataSource : NSObject <UITableViewDataSource> {
    NSOrderedSet * _donations;
    Class  _fetcherClass;
    NSObject<OS_dispatch_queue> * _queue;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSOrderedSet *donations;
@property (nonatomic, readonly) Class fetcherClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

+ (void)initialize;

- (void).cxx_destruct;
- (id)donationAtIndexPath:(id)arg1;
- (id)donations;
- (Class)fetcherClass;
- (id)initWithFetcher:(Class)arg1;
- (id)queue;
- (void)refreshDonations;
- (void)setDonations:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
