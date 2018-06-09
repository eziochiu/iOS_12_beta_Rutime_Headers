/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBScalablePipe : NSObject {
    CBCentral * _central;
    void * _channel;
    NSInputStream * _input;
    long long  _mtu;
    NSString * _name;
    NSOutputStream * _output;
    CBPeer * _peer;
    CBScalablePipeManager * _pipeManager;
    long long  _priority;
    bool  _reliablePipe;
    int  _socket;
    long long  _type;
}

@property (nonatomic, readonly) CBCentral *central;
@property (nonatomic, readonly) void*channel;
@property (nonatomic, readonly) NSInputStream *input;
@property (nonatomic, readonly) long long mtu;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSOutputStream *output;
@property (nonatomic, readonly) CBPeer *peer;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) bool reliablePipe;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)central;
- (void*)channel;
- (void)dealloc;
- (id)description;
- (id)initWithPipeManager:(id)arg1 info:(id)arg2;
- (id)input;
- (long long)mtu;
- (id)name;
- (id)output;
- (id)peer;
- (long long)priority;
- (bool)reliablePipe;
- (void)setOrphan;
- (long long)type;

@end
