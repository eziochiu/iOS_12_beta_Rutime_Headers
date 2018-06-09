/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface UITextViewDrawingInfo : NSObject <UIGestureRecognizerDelegate> {
    bool  _addBottomPadding;
    <UITextViewDrawingDelegate> * _delegate;
    UILongPressGestureRecognizer * _insertLongPressGestureRecognizer;
    UITextView * _textView;
    PKTiledView * _tiledView;
}

@property (nonatomic) bool addBottomPadding;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextViewDrawingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *insertLongPressGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic) UITextView *textView;
@property (nonatomic, retain) PKTiledView *tiledView;

- (void).cxx_destruct;
- (bool)addBottomPadding;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initForTextView:(id)arg1;
- (id)insertLongPressGestureRecognizer;
- (void)setAddBottomPadding:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInsertLongPressGestureRecognizer:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTiledView:(id)arg1;
- (id)textView;
- (id)tiledView;

@end
