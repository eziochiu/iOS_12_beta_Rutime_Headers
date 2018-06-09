/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWRemoteConnectionDirector : NSObject {
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _defaultOutputHandler;
    NSObject<NWRemoteConnectionDirectorDelegate> * _delegate;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _directorProtocol;
    unsigned long long  _maximumDataChunkSize;
    struct nw_hash_table { } * _protocolHashTable;
    NSMutableArray * _writeRequests;
}

@property struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*defaultOutputHandler;
@property NSObject<NWRemoteConnectionDirectorDelegate> *delegate;
@property struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*directorProtocol;
@property (nonatomic) unsigned long long maximumDataChunkSize;
@property (nonatomic, readonly) struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*protocol;
@property struct nw_hash_table { }*protocolHashTable;
@property (retain) NSMutableArray *writeRequests;

- (void).cxx_destruct;
- (id)createCloseConnectionMessageForClientID:(id)arg1;
- (id)createOpenConnectionMessageForClientID:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (id)createSendDataMessageForClientID:(id)arg1 data:(id)arg2 receiveWindow:(unsigned int)arg3;
- (id)createStartBrowseMessageForClientID:(id)arg1 descriptor:(id)arg2 parameters:(id)arg3;
- (id)createStopBrowseMessageForClientID:(id)arg1;
- (unsigned long long)dataModeForFlowID:(id)arg1;
- (void)dealloc;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)defaultOutputHandler;
- (id)delegate;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)directorProtocol;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)maximumDataChunkSize;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)outputHandlerForFlowID:(id)arg1;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)protocol;
- (struct nw_hash_table { }*)protocolHashTable;
- (void)receiveData:(id)arg1 forClient:(id)arg2;
- (bool)receiveRemoteReply:(id)arg1;
- (void)setDefaultOutputHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectorProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setMaximumDataChunkSize:(unsigned long long)arg1;
- (void)setOutputProtocolHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1 forFlowID:(id)arg2 dataMode:(unsigned long long)arg3;
- (void)setProtocolHashTable:(struct nw_hash_table { }*)arg1;
- (void)setWriteRequests:(id)arg1;
- (id)writeRequests;

@end
