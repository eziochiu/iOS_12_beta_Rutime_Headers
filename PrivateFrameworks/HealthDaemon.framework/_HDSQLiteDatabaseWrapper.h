/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSQLiteDatabaseWrapper : NSObject {
    HDSQLiteDatabase * _database;
    unsigned long long  _generation;
    unsigned long long  _options;
    unsigned long long  _threadID;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic, readonly, copy) NSString *typeString;

- (void).cxx_destruct;
- (void)captureThreadInfo;
- (id)database;
- (unsigned long long)generation;
- (id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (unsigned long long)threadID;
- (id)typeString;

@end
