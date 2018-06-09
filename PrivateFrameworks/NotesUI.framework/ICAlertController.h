/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAlertController : UIAlertController {
    bool  _didPerformAction;
    id /* block */  _dissmissWithoutActionBlock;
}

@property (nonatomic) bool didPerformAction;
@property (nonatomic, copy) id /* block */ dissmissWithoutActionBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)didPerformAction;
- (id /* block */)dissmissWithoutActionBlock;
- (void)setDidPerformAction:(bool)arg1;
- (void)setDissmissWithoutActionBlock:(id /* block */)arg1;

@end
