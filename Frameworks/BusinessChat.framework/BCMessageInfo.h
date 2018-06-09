/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCMessageInfo : NSObject <BCDictionaryImageSerializable> {
    NSString * __style;
    NSString * _alternateTitle;
    UIImage * _image;
    NSString * _imageDescription;
    NSString * _imageIdentifier;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) NSString *_style;
@property (nonatomic, retain) NSString *alternateTitle;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *imageDescription;
@property (nonatomic, retain) NSString *imageIdentifier;
@property (nonatomic, readonly) NSString *style;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_style;
- (id)alternateTitle;
- (id)dictionaryValue;
- (id)image;
- (id)imageDescription;
- (id)imageIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 style:(id)arg3 alternateTitle:(id)arg4 imageIdentifier:(id)arg5 imageDescription:(id)arg6;
- (void)setAlternateTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageDescription:(id)arg1;
- (void)setImageIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)set_style:(id)arg1;
- (id)style;
- (id)subtitle;
- (id)title;

@end
