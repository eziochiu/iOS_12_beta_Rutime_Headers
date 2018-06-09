/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportResults : PHImportExceptionRecorder {
    NSDate * _endTime;
    NSMutableArray * _importRecords;
    PHImportSource * _importSource;
    NSMutableDictionary * _pmrInfo;
    unsigned long long  _result;
    NSDate * _startTime;
}

@property (nonatomic, retain) NSDate *endTime;
@property (readonly) NSError *error;
@property (readonly) unsigned long long failedToImportCount;
@property (nonatomic, retain) NSMutableArray *importRecords;
@property (readonly) PHImportSource *importSource;
@property (readonly) unsigned long long importedCount;
@property (nonatomic, retain) NSMutableDictionary *pmrInfo;
@property (readonly) unsigned long long result;
@property (nonatomic, retain) NSDate *startTime;

+ (id)resultsWithException:(id)arg1;

- (void).cxx_destruct;
- (void)addImportRecord:(id)arg1;
- (void)addUnsupportedPath:(id)arg1;
- (id)criticalExceptions;
- (id)endTime;
- (id)error;
- (unsigned long long)failedToImportCount;
- (id)generatePMRInfo;
- (id)importRecordExceptionsOfImportance:(unsigned long long)arg1;
- (id)importRecords;
- (id)importSource;
- (unsigned long long)importedCount;
- (id)init;
- (void)insertStart:(id)arg1 end:(id)arg2 intoGroups:(id)arg3 ofType:(unsigned long long)arg4;
- (void)log:(id)arg1 activity:(id)arg2 description:(id)arg3 digits:(unsigned long long)arg4;
- (void)logPMR;
- (id)pmrInfo;
- (unsigned long long)result;
- (double)runTime;
- (void)setEndTime:(id)arg1;
- (void)setImportRecords:(id)arg1;
- (void)setPmrInfo:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (void)verifyGroups:(id)arg1;

@end
