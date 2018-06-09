/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageResult : NSObject {
    short  _exifOrientation;
    NSData * _imageData;
    struct CGImage { } * _imageRef;
    NSURL * _imageURL;
    bool  _isDegraded;
    NSString * _uti;
    NSURL * _videoURL;
}

@property (nonatomic) short exifOrientation;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) struct CGImage { }*imageRef;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic) bool isDegraded;
@property (nonatomic, copy) NSString *uti;
@property (nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (short)exifOrientation;
- (id)imageData;
- (struct CGImage { }*)imageRef;
- (id)imageURL;
- (bool)isDegraded;
- (void)setExifOrientation:(short)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setImageURL:(id)arg1;
- (void)setIsDegraded:(bool)arg1;
- (void)setUti:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)uti;
- (id)videoURL;

@end
