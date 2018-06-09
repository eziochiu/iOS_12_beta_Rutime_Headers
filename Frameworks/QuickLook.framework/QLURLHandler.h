/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLURLHandler : NSObject <NSSecureCoding> {
    long long  _fileExtensionHandle;
    NSString * _fileExtensionToken;
    NSURL * _fileURL;
    bool  _isAccessingSecurityScope;
    long long  _physicalFileExtensionHandle;
    NSString * _physicalFileExtensionToken;
    const char * _sandboxType;
}

@property (nonatomic) long long fileExtensionHandle;
@property (nonatomic, retain) NSString *fileExtensionToken;
@property (retain) NSURL *fileURL;
@property (nonatomic) long long physicalFileExtensionHandle;
@property (nonatomic, retain) NSString *physicalFileExtensionToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_consumeFileExtension;
- (void)_issueFileExtension;
- (id)_issueFileExtensionForURL:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (long long)fileExtensionHandle;
- (id)fileExtensionToken;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sandboxType:(const char *)arg2;
- (long long)physicalFileExtensionHandle;
- (id)physicalFileExtensionToken;
- (long long)sandboxExtensionConsume:(const char *)arg1;
- (char *)sandboxExtensionIssueFileWithClass:(const char *)arg1 path:(const char *)arg2 flags:(unsigned int)arg3;
- (void)sandboxExtensionRelease:(long long)arg1;
- (void)setFileExtensionHandle:(long long)arg1;
- (void)setFileExtensionToken:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setPhysicalFileExtensionHandle:(long long)arg1;
- (void)setPhysicalFileExtensionToken:(id)arg1;

@end
