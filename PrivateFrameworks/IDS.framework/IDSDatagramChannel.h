/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDatagramChannel : NSObject {
    _IDSDatagramChannel * _internal;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;

- (void).cxx_destruct;
- (void)_logReceivingStats:(unsigned long long)arg1;
- (void)_logSendingStats:(unsigned long long)arg1;
- (void)_reportFirstPacketTimeForMKI:(id)arg1;
- (void)_writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; }*)arg4 completionHandler:(id /* block */)arg5;
- (void)addNewIDSDataChannelLinkWithAttributes:(char *)arg1 linkAttributesLength:(unsigned short)arg2;
- (id)cachedMetadata;
- (void)close;
- (id)connectedLinks;
- (void)dealloc;
- (id)defaultLink;
- (id)description;
- (unsigned short)generateMetadata:(char *)arg1 maxSize:(unsigned long long)arg2 withDatagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; }*)arg4 currentDatagramCount:(unsigned char)arg5 totalDatagramCount:(unsigned char)arg6;
- (id)initWithDestination:(id)arg1;
- (id)initWithSocketDescriptor:(int)arg1;
- (void)invalidate;
- (void)optinStreamIDs:(id)arg1;
- (void)optoutStreamIDs:(id)arg1;
- (void)processMetadataForDatagram:(char *)arg1 size:(unsigned long long)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; }*)arg3 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; }*)arg4;
- (void)readDatagramWithCompletionHandler:(id /* block */)arg1;
- (void)readDatagramsWithCompletionHandler:(id /* block */)arg1;
- (void)readyToRead;
- (void)removeIDSDataChannelLinkContext:(BOOL)arg1 linkUUID:(id)arg2;
- (void)reportFirstPacketTimeForMKI:(id)arg1;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)requestStatsWithOptions:(id)arg1;
- (void)selectDefaultLink:(BOOL)arg1;
- (void)sendEventConnectedWithDummyLinkInfo;
- (void)sendMediaEncryptionInfoWithMKM:(id)arg1 MKS:(id)arg2 MKI:(id)arg3 isLocallyGenerated:(bool)arg4;
- (void)sendMediaMembershipChangedInfo:(unsigned char)arg1;
- (void)sendMetadata;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (void)setReadHandlerWithOptions:(id /* block */)arg1;
- (void)start;
- (int)underlyingFileDescriptor;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; }*)arg4 completionHandler:(id /* block */)arg5;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 flags:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)writeDatagrams:(const void**)arg1 datagramSizes:(unsigned int*)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 datagramCount:(int)arg4 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; }*)arg5 completionHandler:(id /* block */)arg6;
- (void)writeDatagrams:(const void**)arg1 datagramsSize:(unsigned int*)arg2 datagramsInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; }*)arg3 datagramsCount:(int)arg4 options:(struct { /* ? */ }**)arg5 completionHandler:(id /* block */)arg6;

@end
