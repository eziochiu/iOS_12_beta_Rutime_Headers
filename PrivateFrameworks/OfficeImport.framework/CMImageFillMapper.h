/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMImageFillMapper : CMMapper {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBounds;
    OADFill * mFill;
}

- (void).cxx_destruct;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)convertMetafileToPdf:(id)arg1 state:(id)arg2;
- (id)initWithOadFill:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 parent:(id)arg3;
- (bool)isCropped;
- (id)mainSubBlip;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)mapImageFill:(id)arg1 withState:(id)arg2;
- (void)mapImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (void)mapNonImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uncroppedBox;

@end
