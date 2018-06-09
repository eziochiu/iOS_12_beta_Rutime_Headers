/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQDaemonPersisted : NSObject {
    NSString * _accountAltDSID;
    double  _callbackInterval;
    bool  _failedToFetchFromServer;
    NSDictionary * _failureDetails;
    NSDate * _retrievalDate;
    NSDictionary * _serverDictionary;
}

@property (nonatomic, readonly) NSNumber *_cachedQuotaAvailable;
@property (nonatomic, readonly) NSMutableDictionary *_mutablePersistenceDictionary;
@property (nonatomic, readonly) NSDictionary *_persistenceDictionary;
@property (nonatomic, retain) NSString *accountAltDSID;
@property (nonatomic) double callbackInterval;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic) bool failedToFetchFromServer;
@property (nonatomic, retain) NSDictionary *failureDetails;
@property (nonatomic, retain) NSDate *retrievalDate;
@property (nonatomic, retain) NSDictionary *serverDictionary;

+ (id)_mutablePlaceholderPersistanceDictionary;
+ (id)_placeholderObject;
+ (id)_placeholderPersistenceDictionary;
+ (void)clearPersistedObject;
+ (void)clearPersistedObjectWithCompletion:(id /* block */)arg1;
+ (double)defaultCallbackInterval;
+ (id)persistedObject;
+ (id)persistenceDomain;
+ (id)persistenceKey;

- (void).cxx_destruct;
- (id)_cachedQuotaAvailable;
- (double)_callbackIntervalFromServerObject:(id)arg1;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (id)_initWithAccountAltDSID:(id)arg1 error:(id)arg2;
- (id)_mutablePersistenceDictionary;
- (id)_persistenceDictionary;
- (id)accountAltDSID;
- (double)callbackInterval;
- (id)expirationDate;
- (bool)failedToFetchFromServer;
- (id)failureDetails;
- (id)initWithDictionary:(id)arg1;
- (bool)isExpired;
- (bool)isValidForAccount:(id)arg1;
- (void)persistObject;
- (void)persistWithCompletion:(id /* block */)arg1;
- (id)retrievalDate;
- (id)serverDictionary;
- (void)setAccountAltDSID:(id)arg1;
- (void)setCallbackInterval:(double)arg1;
- (void)setFailedToFetchFromServer:(bool)arg1;
- (void)setFailureDetails:(id)arg1;
- (void)setRetrievalDate:(id)arg1;
- (void)setServerDictionary:(id)arg1;

@end
