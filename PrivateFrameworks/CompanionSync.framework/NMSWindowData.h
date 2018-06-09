/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSWindowData : NSObject {
    struct sqlite3_stmt { } * _addMessageInFlight;
    struct sqlite3_stmt { } * _countPendingMessages;
    struct sqlite3 { } * _db;
    struct sqlite3_stmt { } * _getBytesInFlight;
    struct sqlite3_stmt { } * _getCountInFlight;
    struct sqlite3_stmt { } * _getExpiredMessageIDs;
    struct sqlite3_stmt { } * _getMessageLength;
    struct sqlite3_stmt { } * _getNextExpireDate;
    struct sqlite3_stmt { } * _getPendingMessage;
    struct __CFString { } * _loggingFacility;
    NSString * _path;
    struct sqlite3_stmt { } * _popPendingMessage;
    struct sqlite3_stmt { } * _pushPendingMessage;
    struct sqlite3_stmt { } * _removeMessageInFlight;
    _SYSharedServiceDB * _sharedDB;
    NSObject<OS_dispatch_queue> * _syncQ;
}

@property (nonatomic, readonly) unsigned long long countOfAllMessagesInFlight;
@property (nonatomic, readonly) unsigned long long countOfPendingMessages;
@property (nonatomic, readonly) NSDate *dateOfNextMessageExpiry;
@property (nonatomic, readonly) NSArray *expiredMessageIDs;
@property (nonatomic, readonly) unsigned long long lengthOfAllMessagesInFlight;

- (void).cxx_destruct;
- (void)_ensureSchema;
- (int)_getSchemaVersion;
- (bool)_openDBForceRecreate:(bool)arg1;
- (void)_prepareStatements;
- (bool)_syncTransaction:(bool)arg1 block:(id /* block */)arg2;
- (void)_withDB:(id /* block */)arg1;
- (void)addMessageWithID:(id)arg1 ofLength:(unsigned long long)arg2 timeoutTime:(double)arg3;
- (unsigned long long)countOfAllMessagesInFlight;
- (unsigned long long)countOfPendingMessages;
- (id)dateOfNextMessageExpiry;
- (struct sqlite3 { }*)dbRef;
- (void)dealloc;
- (id)expiredMessageIDs;
- (id)init;
- (id)initWithPath:(id)arg1 logFacility:(struct __CFString { }*)arg2;
- (id)initWithSharedDBForServiceName:(id)arg1;
- (unsigned long long)lengthOfAllMessagesInFlight;
- (id)popPendingMessage;
- (void)pushPendingMessageData:(id)arg1 timeToLive:(double)arg2;
- (void)removeAllMessages;
- (unsigned long long)removeAndReturnLengthOfMessageWithID:(id)arg1;
- (unsigned long long)removeAndReturnLengthOfMessagesWithIDs:(id)arg1;

@end
