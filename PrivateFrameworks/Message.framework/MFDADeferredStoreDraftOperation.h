/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADeferredStoreDraftOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
    NSString * _folderID;
    NSString * _messageIDHeader;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end