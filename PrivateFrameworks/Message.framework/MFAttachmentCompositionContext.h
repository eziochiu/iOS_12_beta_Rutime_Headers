/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentCompositionContext : NSObject {
    NSURL * _attachmentsBaseURL;
    NSString * _contextID;
}

@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, copy) NSURL *attachmentsBaseURL;
@property (nonatomic, readonly) NSString *contextID;

- (id)attachments;
- (id)attachmentsBaseURL;
- (id)contextID;
- (void)dealloc;
- (id)init;
- (id)initWithContextID:(id)arg1;
- (void)setAttachmentsBaseURL:(id)arg1;

@end
