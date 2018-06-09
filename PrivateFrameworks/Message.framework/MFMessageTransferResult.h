/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageTransferResult : NSObject {
    NSArray * _failedMessages;
    unsigned long long  _resultCode;
    NSArray * _transferedMessages;
}

@property (nonatomic, readonly) NSArray *failedMessages;
@property (nonatomic, readonly) unsigned long long resultCode;
@property (nonatomic, readonly) NSArray *transferedMessages;

- (void)dealloc;
- (id)debugDescription;
- (id)failedMessages;
- (id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3;
- (unsigned long long)resultCode;
- (id)transferedMessages;

@end
