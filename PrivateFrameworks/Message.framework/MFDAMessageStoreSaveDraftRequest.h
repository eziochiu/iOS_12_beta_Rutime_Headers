/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {
    NSString * _folderID;
    NSString * _messageIDHeader;
}

@property (nonatomic, readonly) bool isUserRequested;
@property (nonatomic, readonly) bool shouldSend;

- (void)dealloc;
- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (id)initWithMessage:(id)arg1 mailbox:(id)arg2;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
