/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface iAUPServer : NSObject {
    bool  _byteEscape;
    <iAUPServerDelegate> * _delegate;
    bool  _escapeInProgress;
    unsigned int  _firmwareImageBaseTransferAddress;
    int  _parserState;
    unsigned char  _telegramChecksum;
    NSMutableData * _telegramDataIn;
    unsigned int  _telegramLength;
    FirmwareBundle * firmwareBundle;
    unsigned short  objectBlockTransferSizes;
}

@property (nonatomic) bool byteEscape;
@property <iAUPServerDelegate> *delegate;
@property (retain) FirmwareBundle *firmwareBundle;
@property (nonatomic) int parserState;

+ (id)sharedServer;

- (unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id*)arg2;
- (void)appendToLog:(id)arg1;
- (bool)byteEscape;
- (void)dealloc;
- (id)delegate;
- (id)firmwareBundle;
- (id)init;
- (void)logCommand:(unsigned char)arg1 payload:(char *)arg2 length:(unsigned int)arg3;
- (int)parserState;
- (char *)parserStateString:(int)arg1;
- (void)processDataFromAccessory:(id)arg1;
- (void)processInByte:(unsigned char)arg1;
- (void)processInTelegram;
- (void)resetParser;
- (void)sendCommand:(unsigned char)arg1 payload:(char *)arg2 payload_length:(unsigned short)arg3;
- (void)setBootloaderEntry;
- (void)setByteEscape:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirmwareBundle:(id)arg1;
- (void)setParserState:(int)arg1;
- (unsigned int)supportedTargetProductIDCode;

@end
