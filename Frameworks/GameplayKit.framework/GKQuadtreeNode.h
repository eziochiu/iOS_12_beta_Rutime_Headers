/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKQuadtreeNode : NSObject {
    struct GKCQuadTreeNode<NSObject> { int (**x1)(); float x2; struct GKCQuadTreeNode<NSObject> {} *x3; struct GKCQuadTreeNode<NSObject> {} *x4[4]; struct vector<NSObject *, std::__1::allocator<NSObject *> > { id *x_5_1_1; id x_5_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_5_1_3; void*x_5_1_4; BOOL x_5_1_5; out void*x_5_1_6; void*x_5_1_7; const void*x_5_1_8; short x_5_1_9; short x_5_1_10; void*x_5_1_11; double x_5_1_12; void*x_5_1_13; void*x_5_1_14; void*x_5_1_15; int x_5_1_16; const void*x_5_1_17; inout unsigned short x_5_1_18; bycopy unsigned int x_5_1_19/* : ? */; void*x_5_1_20; void*x_5_1_21; BOOL x_5_1_22; void*x_5_1_23; void*x_5_1_24; char *x_5_1_25; void*x_5_1_26; void*x_5_1_27; short x_5_1_28; void*x_5_1_29; const out in void*x_5_1_30; void*x_5_1_31; char *x_5_1_32; void*x_5_1_33; void*x_5_1_34; short x_5_1_35; void*x_5_1_36; double x_5_1_37; SEL x_5_1_38; SEL x_5_1_39; void*x_5_1_40; void*x_5_1_41; void*x_5_1_42; SEL x_5_1_43; SEL x_5_1_44; void*x_5_1_45; long x_5_1_46; long x_5_1_47; out BOOL x_5_1_48; void*x_5_1_49; void*x_5_1_50; out const void*x_5_1_51; inout unsigned short x_5_1_52; bycopy unsigned int x_5_1_53/* : ? */; void*x_5_1_54; void*x_5_1_55; BOOL x_5_1_56; void*x_5_1_57; } x5; } * _cQuadTreeNode;
    struct GKQuad { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*quadMin; 
    }  _quad;
}

@property (nonatomic, readonly) struct GKQuad { } quad;

- (void*)cQuadTreeNode;
- (void)max;
- (void)min;
- (struct GKQuad { })quad;
- (void)setCQuadTreeNode:(void*)arg1;

@end
