/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBarcodeDetector : CIDetector {
    double  _height;
    double  _width;
    CIContext * context;
    NSMutableDictionary * featureOptions;
}

@property (nonatomic, retain) CIContext *context;

- (id)context;
- (void)dealloc;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (void)setContext:(id)arg1;

@end
