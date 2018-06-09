/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPJournal : NSObject {
    bool  _analyticsEnabled;
    NSISO8601DateFormatter * _dateFormatter;
    <MSPJournaling> * _delegate;
    bool  _journalEnabled;
    bool  _loggingEnabled;
    NSString * _name;
    NSString * _path;
    NSFileHandle * _writeHandle;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic) <MSPJournaling> *delegate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)appendToJournal:(id)arg1 format:(id)arg2;
- (void)appendToLog:(id)arg1 format:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)filename;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;
- (id)name;
- (void)noteChangeWithState:(id)arg1;
- (void)noteChangeWithState:(id)arg1 affectedObject:(id)arg2;
- (void)noteChangeWithState:(id)arg1 error:(id)arg2;
- (void)noteChangeWithState:(id)arg1 format:(id)arg2;
- (void)noteChangeWithState:(id)arg1 payload:(id)arg2;
- (id)path;
- (void)rotateLogIfNeeded;
- (id)rotatedPath;
- (void)sendTelemetryForState:(id)arg1 affectedObject:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
