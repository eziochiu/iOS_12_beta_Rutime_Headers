/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPSecSAKernelSession : NEIPSecSASession {
    struct NEIPSecDB_s { } * _internalSession;
}

@property (nonatomic) struct NEIPSecDB_s { }*internalSession;

- (bool)addLarvalSA:(id)arg1;
- (bool)addSA:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3;
- (struct NEIPSecDB_s { }*)internalSession;
- (void)invalidate;
- (bool)migrateSA:(id)arg1;
- (void)removeAllSAs;
- (bool)removeSA:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInternalSession:(struct NEIPSecDB_s { }*)arg1;
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (bool)updateSA:(id)arg1;

@end
