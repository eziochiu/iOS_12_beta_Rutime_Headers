/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDCloudKitAttachment : NSObject {
    NSNumber * _fileSize;
    NSURL * _url;
}

@property (retain) NSNumber *fileSize;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (id)fileSize;
- (id)initWithURL:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
