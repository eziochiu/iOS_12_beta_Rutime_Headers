/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFRenderingPropertiesPrivate : NSObject {
    struct CGColorSpace { } * deviceColorSpace;
    long long  displayBox;
    bool  enableAccessibilityDrawing;
    bool  enablePageShadows;
    bool  enableTileEdgeColoring;
    bool  enableTileUpdates;
    bool  forceWebKitMainThread;
    double  greekingThreshold;
    long long  interpolationQuality;
    bool  isUsingPDFExtensionView;
    double  lineWidthThreshold;
    UIColor * pageColor;
    PDFLayerController * pdfLayerController;
    PDFView * pdfView;
    double  screenScaleFactor;
    bool  shouldAntiAlias;
}

- (void).cxx_destruct;

@end
