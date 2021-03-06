/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISIconIOS : ISIcon {
    LSResourceProxy * _resourceProxy;
}

@property (retain) LSResourceProxy *resourceProxy;

+ (id)backgroundQueue;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImageForImageDescriptor:(id)arg1;
- (double)_aspectRatio;
- (id)_prepareImageForImageDescriptor:(id)arg1;
- (bool)_shouldInvalidate;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)getImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)imageForImageDescriptor:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithResourceProxy:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIcon:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (id)resourceProxy;
- (void)setResourceProxy:(id)arg1;
- (int)variantForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(unsigned long long)arg3;

@end
