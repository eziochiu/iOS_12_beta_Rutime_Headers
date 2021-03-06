/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendCommandResultMessage : MRProtocolMessage {
    NSArray * _results;
}

@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) unsigned int sendError;

- (void).cxx_destruct;
- (id)initWithCommandID:(id)arg1 sendError:(unsigned int)arg2 results:(id)arg3;
- (id)results;
- (unsigned int)sendError;
- (unsigned long long)type;

@end
