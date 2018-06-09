/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFWebAttachmentSource : NSObject {
    NSMutableDictionary * _attachmentsByURL;
    MFLock * _attachmentsLock;
}

+ (id)_setOfAllSources;
+ (id)allSources;

- (id)attachmentForURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeAttachmentForURL:(id)arg1;
- (bool)setAttachment:(id)arg1 forURL:(id)arg2;

@end
