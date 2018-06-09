/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFaceTemplate : NSObject {
    double  _barcodeBottomInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _barcodeMaxSize;
    NSMutableArray * _bucketTemplates;
    PKPassFieldTemplate * _defaultFieldTemplate;
}

@property (nonatomic) double barcodeBottomInset;
@property (nonatomic) struct CGSize { double x1; double x2; } barcodeMaxSize;
@property (nonatomic, retain) NSMutableArray *bucketTemplates;
@property (nonatomic, retain) PKPassFieldTemplate *defaultFieldTemplate;

- (void).cxx_destruct;
- (void)addBucketTemplate:(id)arg1;
- (double)barcodeBottomInset;
- (struct CGSize { double x1; double x2; })barcodeMaxSize;
- (id)bucketTemplates;
- (id)defaultFieldTemplate;
- (void)setBarcodeBottomInset:(double)arg1;
- (void)setBarcodeMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBucketTemplates:(id)arg1;
- (void)setDefaultFieldTemplate:(id)arg1;
- (id)templateForBucketAtIndex:(unsigned long long)arg1;

@end
