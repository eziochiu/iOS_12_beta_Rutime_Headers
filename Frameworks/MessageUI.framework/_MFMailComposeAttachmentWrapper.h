/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMailComposeAttachmentWrapper : NSObject {
    NSData * _data;
    NSString * _fileName;
    NSURL * _fileURL;
    NSString * _identifier;
    NSString * _mimeType;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *mimeType;

+ (id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
+ (id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2;

- (id)data;
- (void)dealloc;
- (id)description;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)identifier;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)initWithFileURL:(id)arg1 mimeType:(id)arg2;
- (id)mimeType;

@end
