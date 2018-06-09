/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIDocumentState : NSObject <NSSecureCoding> {
    NSMutableDictionary * __selectionRects;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _caretRectInWindow;
    TIDocumentState * _documentState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _firstSelectionRectInWindow;
}

@property (nonatomic, retain) NSMutableDictionary *_selectionRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectInWindow;
@property (nonatomic, retain) TIDocumentState *documentState;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } firstSelectionRectInWindow;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } markedTextRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedTextRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_selectionRects;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectInWindow;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })deltaForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstSelectionRectInWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedTextRange;
- (void)resetTextRects;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedTextRange;
- (void)setCaretRectInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentState:(id)arg1;
- (void)setFirstSelectionRectInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)set_selectionRects:(id)arg1;

@end
