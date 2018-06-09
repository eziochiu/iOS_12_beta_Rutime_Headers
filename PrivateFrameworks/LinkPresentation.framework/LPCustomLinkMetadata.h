/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCustomLinkMetadata : NSObject {
    NSURL * _URL;
    LPImage * _icon;
    LPImage * _image;
    NSString * _title;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (id)dataRepresentation;
- (id)icon;
- (id)image;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
