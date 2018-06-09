/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    <MFRequestQueueResponseConsumer> * consumer;
    MFMessage * message;
    MFDAMessageStore * store;
}

@property (nonatomic, readonly) bool isUserRequested;
@property (nonatomic, readonly) bool shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
