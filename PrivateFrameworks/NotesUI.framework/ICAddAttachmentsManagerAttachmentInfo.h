/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAddAttachmentsManagerAttachmentInfo : NSObject {
    ICAttachment * _attachment;
    NSAttributedString * _attributedContentText;
    struct UIImage { Class x1; } * _image;
    NSData * _mediaData;
    NSString * _mediaFilenameExtension;
    NSURL * _mediaURL;
    NSString * _mediaUTI;
    NSDictionary * _metadata;
    NSString * _title;
    NSDictionary * _webScrapeResults;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSAttributedString *attributedContentText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSData *mediaData;
@property (nonatomic, retain) NSString *mediaFilenameExtension;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic, retain) NSString *mediaUTI;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDictionary *webScrapeResults;

- (void).cxx_destruct;
- (id)attachment;
- (id)attributedContentText;
- (id)description;
- (struct UIImage { Class x1; }*)image;
- (id)initWithFileURL:(id)arg1;
- (id)mediaData;
- (id)mediaFilenameExtension;
- (unsigned long long)mediaSize;
- (id)mediaURL;
- (id)mediaUTI;
- (id)metadata;
- (void)setAttachment:(id)arg1;
- (void)setAttributedContentText:(id)arg1;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaFilenameExtension:(id)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setMediaUTI:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWebScrapeResults:(id)arg1;
- (id)title;
- (id)webScrapeResults;

@end
