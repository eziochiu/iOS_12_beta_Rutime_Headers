/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPortMessage : NSObject {
    NSMutableArray * components;
    NSPort * localPort;
    unsigned int  msgid;
    NSPort * remotePort;
    void * reserved;
    void * reserved2;
}

@property (readonly, copy) NSArray *components;
@property unsigned int msgid;
@property (readonly, retain) NSPort *receivePort;
@property (readonly, retain) NSPort *sendPort;

- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;
- (unsigned int)msgid;
- (id)receivePort;
- (bool)sendBeforeDate:(id)arg1;
- (id)sendPort;
- (void)setMsgid:(unsigned int)arg1;

@end
