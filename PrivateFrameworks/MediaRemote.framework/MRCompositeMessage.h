/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray * _messages;
}

@property (nonatomic, readonly) NSArray *messages;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (id)messages;

@end
