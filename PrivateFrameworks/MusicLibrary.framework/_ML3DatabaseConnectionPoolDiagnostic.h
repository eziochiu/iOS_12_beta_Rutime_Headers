/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3DatabaseConnectionPoolDiagnostic : NSObject <NSMutableCopying> {
    NSArray * _readerAvailableConnections;
    NSArray * _readerBusyConnections;
    NSArray * _writerAvailableConnections;
    NSArray * _writerBusyConnections;
}

@property (nonatomic, readonly) NSArray *readerAvailableConnections;
@property (nonatomic, readonly) NSArray *readerBusyConnections;
@property (nonatomic, readonly) NSArray *writerAvailableConnections;
@property (nonatomic, readonly) NSArray *writerBusyConnections;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)readerAvailableConnections;
- (id)readerBusyConnections;
- (id)writerAvailableConnections;
- (id)writerBusyConnections;

@end
