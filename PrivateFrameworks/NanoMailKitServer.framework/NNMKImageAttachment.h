/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _renderOnClient;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool renderOnClient;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithCoder:(id)arg1;
- (bool)renderOnClient;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRenderOnClient:(bool)arg1;

@end
