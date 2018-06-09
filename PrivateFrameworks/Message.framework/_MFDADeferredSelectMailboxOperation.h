/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDADeferredSelectMailboxOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
    NSString * _folderID;
}

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end
