/* made by EzioChiu
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EASession : NSObject {
    EAAccessory * _accessory;
    NSString * _eaSessionUUIDFromCoreAccessories;
    NSInputStream * _inputStream;
    bool  _openCompleted;
    NSOutputStream * _outputStream;
    NSString * _protocolString;
    unsigned int  _sessionID;
    int  _sock;
    bool  _useSocketInterfaceForEASession;
}

@property (nonatomic, readonly) EAAccessory *accessory;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) NSString *protocolString;

- (id)EASessionUUID;
- (void)_endStreams;
- (void)_handleIncomingEAData:(id)arg1;
- (unsigned int)_sessionID;
- (id)_shortDescription;
- (void)_streamClosed;
- (id)accessory;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (id)inputStream;
- (bool)isOpenCompleted;
- (id)outputStream;
- (id)protocolString;
- (void)setOpenCompleted:(bool)arg1;

@end
