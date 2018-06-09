/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageRangePrivate : NSObject {
    PDFPage * page;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  range;
}

- (void).cxx_destruct;

@end
