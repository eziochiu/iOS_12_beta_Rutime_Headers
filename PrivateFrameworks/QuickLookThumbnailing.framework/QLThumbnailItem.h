/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailItem : NSObject <NSSecureCoding> {
    NSString * _contentType;
    NSData * _data;
    unsigned long long  _downloadStatus;
    long long  _fileExtensionHandle;
    NSString * _fileExtensionToken;
    NSURL * _url;
    FPSandboxingURLWrapper * _urlWrapperForExtension;
}

@property (nonatomic, readonly) NSString *contentType;
@property (readonly) NSData *data;
@property unsigned long long downloadStatus;
@property (readonly) NSURL *url;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForExtension;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_issueFileExtensionForURL:(id)arg1;
- (void)consumeFileExtension;
- (id)contentType;
- (id)data;
- (void)dealloc;
- (unsigned long long)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2;
- (void)issueFileExtension;
- (bool)needsDownload;
- (void)setDownloadStatus:(unsigned long long)arg1;
- (id)url;
- (id)urlWrapperForExtension;

@end
