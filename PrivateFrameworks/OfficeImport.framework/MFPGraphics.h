/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphics : NSObject {
    NSMutableDictionary * mAvailableFonts;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCanvas;
    MFPGraphicsState * mCurrentState;
    int  mHorzDpi;
    MFPObjectTable * mObjectTable;
    NSMutableArray * mStateStack;
    int  mVertDpi;
}

+ (float)unitsPerInch:(int)arg1;

- (bool)areThereOpenContainers;
- (void)beginContainerNoParamsWithId:(unsigned int)arg1;
- (void)beginContainerWithId:(unsigned int)arg1 boundsInParent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 boundsUnit:(int)arg4;
- (void)beginContainerWithId:(unsigned int)arg1 containerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvas;
- (id)currentState;
- (void)dealloc;
- (void)fillPath:(id)arg1 brush:(id)arg2;
- (id)fontNameForUppercaseFontName:(id)arg1;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)objectTable;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pageTransformWithScale:(float)arg1 unit:(int)arg2;
- (float)pixelsPerUnit:(int)arg1 direction:(int)arg2;
- (void)restoreGraphicsStateOrEndContainerWithId:(unsigned int)arg1;
- (void)saveGraphicsStateWithId:(unsigned int)arg1;
- (void)setHorizontalDpi:(int)arg1 verticalDpi:(int)arg2;
- (void)strokePath:(id)arg1 pen:(id)arg2;

@end
