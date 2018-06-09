/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLocalContactStore : NSObject {
    PPContactScorer * _contactScorer;
    _PASLock * _diskCacheLock;
    CNContactStore * _store;
    <SGSuggestionsServiceContactsProtocol> * _suggestionsContactService;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_allCNNameRecordsFromDiskCache:(id)arg1;
- (id)_allNameRecordsFromAllSources;
- (id)_changeHistoryIdentifierForClient:(id)arg1;
- (bool)_clearChangeHistoryForClient:(id)arg1 history:(id)arg2;
- (id)_cnNameRecordsForAllContacts;
- (id)_cnNameRecordsForAllContactsFromSource;
- (id)_contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2;
- (id)_nameRecordFromCNContactChange:(id)arg1;
- (id)_nameRecordKeysToFetch;
- (void)_namesRecordsForAllFoundInAppsContactsWithCompletion:(id /* block */)arg1;
- (void)_registerContactsChangeHistoryForClient:(id)arg1;
- (bool)_writeCNNameRecords:(id)arg1 history:(id)arg2 diskCache:(id)arg3;
- (id)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2;
- (id)contactNameRecordsForClient:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;

@end
