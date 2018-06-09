/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUCanvasMaskProvider : SUMaskProvider {
    SUScriptCanvasFunction * _function;
}

- (id)copyMaskImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPath { }*)copyPathForMaskWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)initWithFunction:(id)arg1;

@end
