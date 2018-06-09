/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageData : NSObject {
    unsigned long long  _count;
    NSData * _data;
    UIImage * _image;
    struct CGImageSource { } * _imageSource;
    bool  _initializedProperties;
    long long  _orientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _pxSize;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly, copy) NSString *UTIType;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } ptSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pxSize;
@property (nonatomic, retain) NSURL *url;

+ (id)UTITypeForData:(id)arg1;
+ (bool)supportsASTC;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)UTIType;
- (void)_initializeProperties;
- (id)_thumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 atIndex:(unsigned long long)arg2;
- (id)_thumbnailFitToSize:(struct CGSize { double x1; double x2; })arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)count;
- (id)data;
- (void)dealloc;
- (id)durationsWithMaxCount:(unsigned long long)arg1;
- (id)image;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (long long)orientation;
- (struct CGSize { double x1; double x2; })ptSize;
- (struct CGSize { double x1; double x2; })pxSize;
- (void)setData:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)thumbnailAtIndex:(unsigned long long)arg1 fillToSize:(struct CGSize { double x1; double x2; })arg2 maxCount:(unsigned long long)arg3;
- (id)thumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailFillToSizeCropping:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailFitToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailsFillToSize:(struct CGSize { double x1; double x2; })arg1 maxCount:(unsigned long long)arg2;
- (id)thumbnailsFitToSize:(struct CGSize { double x1; double x2; })arg1 maxCount:(unsigned long long)arg2;
- (id)url;

@end
