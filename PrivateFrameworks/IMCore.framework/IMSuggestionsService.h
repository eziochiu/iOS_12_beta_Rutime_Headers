/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSuggestionsService : NSObject {
    NSCache * _cache;
    NSObject<SGSuggestionsServiceContactsProtocol> * _connection;
    NSHashTable * _handlesToRetry;
    NSDictionary * _localTable;
    id  _newContactNotificationToken;
    struct __CFRunLoopObserver { } * _notificationObserver;
    NSMutableDictionary * _pending;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_maybeEmailAddress:(id)arg1;
- (bool)_maybePhoneNumber:(id)arg1;
- (void)_startRequestForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3;
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg1 displayName:(id)arg2 queue:(id)arg3;
- (void)dealloc;
- (void)fetchSuggestedRealNameForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (id)init;
- (bool)isBusiness:(id)arg1;
- (void)scheduleFetchIfNecessaryForHandle:(id)arg1;
- (void)startUsingLocalLookupsWithTable:(id)arg1;
- (void)stopUsingLocalLookups;
- (id)suggestedNameFromCache:(id)arg1 wasFound:(bool*)arg2;

@end
