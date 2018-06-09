/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface __UIAtomAttachment : NSTextAttachment {
    __UIAtomLayoutView * _atomView;
    id  _representedObject;
}

@property (nonatomic, readonly) __UIAtomLayoutView *atomView;
@property (nonatomic, readonly) id representedObject;

+ (id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;

- (void).cxx_destruct;
- (id)atomView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;
- (id)representedObject;

@end
