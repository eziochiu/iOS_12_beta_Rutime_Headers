/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFSelectionPrivate : NSObject {
    UIColor * activeColor;
    struct __CFArray { } * cgSelections;
    double  cornerRadius;
    PDFDocument * document;
    bool  forceBreaks;
    UIColor * inactiveColor;
    NSMutableArray * pageRanges;
    NSMutableArray * pages;
    NSUUID * pdfSelectionUUID;
}

- (void).cxx_destruct;

@end
