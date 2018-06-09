/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreAceSerialization : NSObject

+ (id)_insufficientDataErrorForBytesNeeded:(unsigned long long)arg1 available:(unsigned long long)arg2;
+ (id)_tryParsingPlistPacketBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)_tryParsingSpeechPacketBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)aceDataForNop;
+ (id)aceDataForObject:(id)arg1 error:(id*)arg2;
+ (id)aceDataForPing:(unsigned int)arg1;
+ (id)aceDataForPong:(unsigned int)arg1;
+ (id)aceDataForSpeechPacket:(id)arg1 error:(id*)arg2;
+ (id)aceDataForStreamEnd;
+ (id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1;
+ (id)dataForNop;
+ (id)dataForObject:(id)arg1 error:(id*)arg2;
+ (id)dataForPing:(unsigned int)arg1;
+ (id)dataForPong:(unsigned int)arg1;
+ (id)dataForSpeechPacket:(id)arg1 error:(id*)arg2;
+ (id)dataForStreamEnd;
+ (id)dataForStreamHeaderWithCompressionType:(unsigned char)arg1;
+ (bool)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char*)arg2 bytesRead:(unsigned long long*)arg3 error:(id*)arg4;
+ (bool)tryParsingPacketWithBytes:(const void*)arg1 length:(unsigned long long)arg2 rawPacket:(struct { unsigned char x1; unsigned int x2; }*)arg3 object:(id*)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;

@end
