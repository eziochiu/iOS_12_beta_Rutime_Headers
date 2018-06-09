/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTCPIPTransport : PTPTransport {
    PTPTCPIPConnection * _cdConnection;
    NSMutableData * _cdData;
    unsigned int  _connectionNumber;
    id  _connectionRequestResponse;
    bool  _delegateNeedsData;
    PTPTCPIPConnection * _eventConnection;
    NSMutableData * _eventData;
    NSString * _hostGUID;
    NSString * _hostName;
    unsigned short  _hostPort;
    struct __CFSocket { } * _socket;
    NSString * _targetAddress;
    NSString * _targetGUID;
    NSString * _targetName;
    unsigned int  _targetPort;
    PTPTCPIPConnection * _tempConnection;
    NSMutableData * _tempData;
}

- (void)acceptConnectionFromSocket:(int)arg1;
- (void)cancelTransaction:(id)arg1;
- (bool)connected;
- (void)dealloc;
- (id)description;
- (void)didCloseConnection:(id)arg1 withError:(struct { long long x1; int x2; })arg2;
- (void)handleData:(id)arg1 from:(id)arg2;
- (id)initWithHostPort:(unsigned int)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 delegate:(id)arg6;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned int)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 delegate:(id)arg7;
- (void)releaseConnections;
- (bool)sendCancel:(id)arg1;
- (void)sendData:(id)arg1;
- (void)sendDataPackets:(id)arg1;
- (bool)sendEvent:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned int)arg3;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned int)arg3;
- (bool)sendResponse:(id)arg1;
- (bool)sendStartData:(id)arg1;
- (bool)startInitiator;
- (bool)startResponder;
- (void)stop;
- (id)targetAddress;
- (id)targetGUID;
- (id)targetName;
- (unsigned int)targetPort;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long long)arg1;
- (int)waitForCallbackThreadConditionSignalWithTimeoutForConnection:(long long)arg1;
- (bool)waitForConnectionWithTimeout:(double)arg1;

@end
