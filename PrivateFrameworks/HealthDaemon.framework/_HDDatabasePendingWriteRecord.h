/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDatabasePendingWriteRecord : NSObject {
    id /* block */  _completion;
    id /* block */  _writeBlock;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly, copy) id /* block */ writeBlock;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)init;
- (id)initWithWriteBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id /* block */)writeBlock;

@end
