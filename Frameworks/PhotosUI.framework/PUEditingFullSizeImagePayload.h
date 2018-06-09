/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditingFullSizeImagePayload : NSObject <NSSecureCoding> {
    long long  _imageOrientation;
    NSString * _sandboxExtensionToken;
    NSURL * _url;
}

@property (nonatomic) long long imageOrientation;
@property (nonatomic, retain) NSString *sandboxExtensionToken;
@property (setter=setURL:, nonatomic, retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)imageOrientation;
- (id)initWithCoder:(id)arg1;
- (id)sandboxExtensionToken;
- (void)setImageOrientation:(long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
