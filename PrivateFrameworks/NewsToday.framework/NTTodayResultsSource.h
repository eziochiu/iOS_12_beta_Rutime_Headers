/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource> {
    <FCContentContext> * _contentContext;
    <NTTodayResultsFetchDescriptor> * _fetchDescriptor;
    FCAsyncOnceOperation * _firstOperationCompletionOperation;
    bool  _flushingHasBeenEnabled;
    NSObject * _latestConstituentRecordsHoldToken;
    <NTReadablePrivateDataStorage> * _privateDataStorage;
    id /* block */  _sessionProvider;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) <NTTodayResultsFetchDescriptor> *fetchDescriptor;
@property (nonatomic, retain) FCAsyncOnceOperation *firstOperationCompletionOperation;
@property (getter=hasFlushingBeenEnabled, nonatomic) bool flushingHasBeenEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject *latestConstituentRecordsHoldToken;
@property (nonatomic, retain) <NTReadablePrivateDataStorage> *privateDataStorage;
@property (nonatomic, copy) id /* block */ sessionProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentContext;
- (id)fetchDescriptor;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)firstOperationCompletionOperation;
- (bool)hasFlushingBeenEnabled;
- (id)init;
- (id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 sessionProvider:(id /* block */)arg4;
- (id)latestConstituentRecordsHoldToken;
- (id)privateDataStorage;
- (id /* block */)sessionProvider;
- (void)setContentContext:(id)arg1;
- (void)setFetchDescriptor:(id)arg1;
- (void)setFirstOperationCompletionOperation:(id)arg1;
- (void)setFlushingHasBeenEnabled:(bool)arg1;
- (void)setLatestConstituentRecordsHoldToken:(id)arg1;
- (void)setPrivateDataStorage:(id)arg1;
- (void)setSessionProvider:(id /* block */)arg1;

@end
