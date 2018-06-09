/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPdfHyperlinkController : TSAPdfHyperlinkController {
    TSWPStorage * mBodyStorage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCanvasRect;
    NSIndexSet * mParagraphIndicesInTOCs;
}

+ (id)URLWithDestinationName:(id)arg1;
+ (id)footnoteMarkNameForIndex:(unsigned long long)arg1;
+ (id)footnoteRefNameForIndex:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addHyperlinksForRep:(id)arg1 context:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasRect;
- (id)destinationFromUrl:(id)arg1;
- (bool)ignoreUrl:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isDestination:(id)arg1;
- (id)p_paragraphIndicesInTOCs;
- (void)setCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
