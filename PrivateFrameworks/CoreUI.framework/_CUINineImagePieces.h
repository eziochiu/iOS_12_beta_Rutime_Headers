/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUINineImagePieces : NSObject {
    CUIImage * _bottom;
    CUIImage * _bottomLeft;
    CUIImage * _bottomRight;
    CUIImage * _center;
    CUIImage * _left;
    CUIImage * _right;
    bool  _tileCenterAndEdges;
    CUIImage * _top;
    CUIImage * _topLeft;
    CUIImage * _topRight;
}

- (id)bottom;
- (id)bottomLeft;
- (id)bottomRight;
- (id)center;
- (void)dealloc;
- (id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(bool)arg10;
- (id)left;
- (id)right;
- (bool)tileCenterAndEdges;
- (id)top;
- (id)topLeft;
- (id)topRight;

@end
