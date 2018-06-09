/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCImage : NSObject {
    NSString * _identifier;
    NSData * _imageData;
    NSString * _imageDescription;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSString *imageDescription;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)identifier;
- (id)image;
- (id)imageData;
- (id)imageDescription;
- (id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3;
- (void)setIdentifier:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageDescription:(id)arg1;

@end
