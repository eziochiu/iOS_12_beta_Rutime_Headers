/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIActivityItemURLRep : NSObject {
    NSURL * _URL;
    long long  _attachmentURLType;
    UIImage * _thumbnail;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) long long attachmentURLType;
@property (nonatomic, retain) UIImage *thumbnail;

- (void).cxx_destruct;
- (id)URL;
- (long long)attachmentURLType;
- (bool)isFileURL;
- (id)scheme;
- (void)setAttachmentURLType:(long long)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setURL:(id)arg1;
- (id)thumbnail;

@end
