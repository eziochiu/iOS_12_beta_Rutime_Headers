/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKAbstractBackingStore : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)directoryPath;
+ (id)instanceNamed:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)setConnection:(id)arg1;

@end
