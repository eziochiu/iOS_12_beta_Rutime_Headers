/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKZipArchiveExtractor : NSObject {
    struct archive { } * _archive;
    NSData * _archiveData;
    NSData * _data;
    bool  _dataRead;
    struct archive_entry { } * _entry;
    bool  _hasCalculatedNumberOfEntries;
    NSError * _lastError;
    unsigned long long  _numberOfEntries;
    NSString * _pathname;
}

- (void).cxx_destruct;
- (void)_clearState;
- (id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1;
- (id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1;
- (void)_logError:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (id)getDataForCurrentEntry;
- (id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPathname:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)lastError;
- (unsigned long long)numberOfEntries;

@end
