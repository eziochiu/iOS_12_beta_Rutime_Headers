/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBL2CAPChannel : NSObject {
    unsigned short  _PSM;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    CBPeer * _peer;
    int  _socketFD;
}

@property (nonatomic, readonly) unsigned short PSM;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) CBPeer *peer;
@property (nonatomic, readonly) int socketFD;

- (void).cxx_destruct;
- (unsigned short)PSM;
- (void)dealloc;
- (id)description;
- (id)initWithPeer:(id)arg1 info:(id)arg2;
- (id)inputStream;
- (id)outputStream;
- (id)peer;
- (int)socketFD;

@end
