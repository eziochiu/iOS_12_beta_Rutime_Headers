/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxRequest : NSObject {
    int  _bodyFormat;
    NSString * _messageID;
    int  _requestType;
}

@property (nonatomic) int bodyFormat;
@property (nonatomic, copy) NSString *messageID;
@property (nonatomic) int requestType;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (void).cxx_destruct;
- (int)bodyFormat;
- (id)init;
- (id)messageID;
- (int)requestType;
- (void)setBodyFormat:(int)arg1;
- (void)setMessageID:(id)arg1;
- (void)setRequestType:(int)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)mf_alwaysReportFailures;

@end
