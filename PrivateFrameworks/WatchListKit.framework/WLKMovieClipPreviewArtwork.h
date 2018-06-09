/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKMovieClipPreviewArtwork : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    NSString * _bgColor;
    bool  _supportsLayeredImage;
    NSString * _textColor1;
    NSString * _textColor2;
    NSString * _textColor3;
    NSString * _textColor4;
    NSString * _url;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, readonly) WLKArtworkVariant *artworkVariant;
@property (nonatomic, readonly, copy) NSString *bgColor;
@property (nonatomic, readonly) bool supportsLayeredImage;
@property (nonatomic, readonly, copy) NSString *textColor1;
@property (nonatomic, readonly, copy) NSString *textColor2;
@property (nonatomic, readonly, copy) NSString *textColor3;
@property (nonatomic, readonly, copy) NSString *textColor4;
@property (nonatomic, readonly, copy) NSString *url;

- (void).cxx_destruct;
- (id)_init;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)artworkVariant;
- (id)bgColor;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)supportsLayeredImage;
- (id)textColor1;
- (id)textColor2;
- (id)textColor3;
- (id)textColor4;
- (id)url;

@end
