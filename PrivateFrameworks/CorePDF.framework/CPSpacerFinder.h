/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPSpacerFinder : NSObject <CPDisposable> {
    CPZone * contentZone;
    struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { double x_15_1_1; double x_15_1_2; } x15; struct { double x_16_1_1; double x_16_1_2; } x16; struct { double x_17_1_1; double x_17_1_2; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; double x19; double x20; bool x21; bool x22; bool x23; } * qualityEntries;
    unsigned int  segmentationCount;
    struct { id x1; struct { /* ? */ } *x2; } * segmentations;
    struct { 
        unsigned int allocatedSize; 
        unsigned int size; 
        unsigned int count; 
        struct { /* ? */ } *stats; 
        struct { /* ? */ } **ordered; 
    }  spacerSequence;
    NSMutableArray * spacers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  textBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  zoneBounds;
}

- (void)assessQuality;
- (void)dealloc;
- (void)determineValidity;
- (void)dispose;
- (void)finalize;
- (void)findSpacers;
- (id)initWithContentZone:(id)arg1;
- (void)initializeJunctions;
- (void)initializeSegmentations;
- (id)spacers;
- (void)splitTextLines;

@end
