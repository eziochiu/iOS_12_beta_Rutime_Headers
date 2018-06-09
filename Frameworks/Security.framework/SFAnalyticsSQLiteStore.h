/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray *allEvents;
@property (readonly) NSArray *hardFailures;
@property (readonly) NSArray *samples;
@property (readonly) NSArray *softFailures;
@property (retain) NSDate *uploadDate;

+ (id)storeWithPath:(id)arg1 schema:(id)arg2;

- (void)addEventDict:(id)arg1 toTable:(id)arg2;
- (void)addSample:(id)arg1 forName:(id)arg2;
- (id)allEvents;
- (void)clearAllData;
- (void)dealloc;
- (id)deserializedRecords:(id)arg1;
- (long long)hardFailureCountForEventType:(id)arg1;
- (id)hardFailures;
- (void)incrementHardFailureCountForEventType:(id)arg1;
- (void)incrementSoftFailureCountForEventType:(id)arg1;
- (void)incrementSuccessCountForEventType:(id)arg1;
- (void)removeAllSamplesForName:(id)arg1;
- (id)samples;
- (void)setUploadDate:(id)arg1;
- (long long)softFailureCountForEventType:(id)arg1;
- (id)softFailures;
- (long long)successCountForEventType:(id)arg1;
- (id)summaryCounts;
- (bool)tryToOpenDatabase;
- (id)uploadDate;

@end
