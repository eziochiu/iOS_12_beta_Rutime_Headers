/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTCPIPConnection : NSObject {
    unsigned int  _bytesReceived;
    unsigned int  _bytesSent;
    struct __CFReadStream { } * _inStream;
    NSTimer * _inactivityTimer;
    struct __CFWriteStream { } * _outStream;
    NSObject<OS_dispatch_semaphore> * _receiveBufferSemaphore;
    NSTimer * _receiveTimer;
    NSMutableData * _recieveBuffer;
    NSMutableData * _transmitBuffer;
    NSObject<OS_dispatch_semaphore> * _transmitBufferSemaphore;
    NSTimer * _transmitTimer;
    PTPTCPIPTransport * _transport;
}

- (void)close;
- (void)dealloc;
- (void)handleCanAcceptBytes;
- (void)handleEndEncountered;
- (void)handleErrorOccurred:(struct { long long x1; int x2; })arg1;
- (void)handleHasBytesAvailable;
- (void)inactivityTimerCallBack:(id)arg1;
- (id)initWithNativeSocket:(int)arg1 transport:(id)arg2;
- (id)initWithSocketToHost:(id)arg1 port:(unsigned int)arg2 transport:(id)arg3;
- (bool)open;
- (bool)writeData:(id)arg1;

@end
