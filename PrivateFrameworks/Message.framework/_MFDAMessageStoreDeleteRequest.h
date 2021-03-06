/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreDeleteRequest : DAMailboxDeleteMessageRequest <MFDAMailAccountRequest>

@property (nonatomic, readonly) bool isUserRequested;
@property (nonatomic, readonly) bool shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
