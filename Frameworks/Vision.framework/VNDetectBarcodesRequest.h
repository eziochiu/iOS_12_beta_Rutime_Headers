/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectBarcodesRequest : VNImageBasedRequest {
    NSString * _locateMode;
    NSArray * _symbologies;
}

@property (nonatomic, copy) NSString *locateMode;
@property (nonatomic, copy) NSArray *symbologies;

+ (id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg1;
+ (id)_allBarcodeSymbologies;
+ (id)availableLocateModes;
+ (id)barcodeSymbologyForACBSBarcodeType:(id)arg1;
+ (void)initialize;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)supportedSymbologies;

- (void).cxx_destruct;
- (int)_ACBarcodeRecognizerLocateMode;
- (id)_barcodesDetectedInImageBuffer:(id)arg1 usingACBSConfig:(struct ACBSConfig { }*)arg2 requestRevision:(unsigned long long)arg3 error:(id*)arg4;
- (struct ACBSConfig { }*)_createACBSConfigAndReturnError:(id*)arg1;
- (bool)_getCornerPointsFromCodeLocationPoints:(id)arg1 bottomLeft:(struct CGPoint { double x1; double x2; }*)arg2 topLeft:(struct CGPoint { double x1; double x2; }*)arg3 topRight:(struct CGPoint { double x1; double x2; }*)arg4 bottomRight:(struct CGPoint { double x1; double x2; }*)arg5;
- (id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg1;
- (id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg1;
- (id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)locateMode;
- (id)newBarcodeObservationForACBSBarcodeInfo:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 roiCroppingPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 scanConfidence:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id*)arg7;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setLocateMode:(id)arg1;
- (void)setSymbologies:(id)arg1;
- (id)symbologies;

@end
