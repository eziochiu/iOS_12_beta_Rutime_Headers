/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSQLiteConnectionWrapper : NSObject {
    MFSQLiteConnection * _connection;
    unsigned long long  _generation;
    unsigned long long  _type;
}

@property (nonatomic, readonly) MFSQLiteConnection *connection;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic) unsigned long long type;

- (id)connection;
- (void)dealloc;
- (unsigned long long)generation;
- (id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end