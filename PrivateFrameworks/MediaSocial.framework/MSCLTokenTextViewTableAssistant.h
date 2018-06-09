/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTokenTextViewTableAssistant : NSObject <MSCLTagListDelegate, NSLayoutManagerDelegate, UITextViewDelegate> {
    MSCLConfiguration * _configuration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    UIViewController * _parentViewController;
    UITableView * _tableView;
    MSCLTagListViewController * _tagCompletionViewController;
    NSMutableOrderedSet * _textViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)_activeTextView;
- (id)_indexPathForTextView:(id)arg1;
- (void)_positionTagCompletionsBelowCellForIndexPath:(id)arg1 animated:(bool)arg2;
- (void)_removeTagCompletionsAnimated:(bool)arg1;
- (void)_showTagCompletionsAnimated:(bool)arg1;
- (id)_tagCompletionViewController;
- (void)addTextView:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (void)layoutTagCompletionView;
- (id)parentViewController;
- (void)setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParentViewController:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tagList:(id)arg1 didSelectTag:(id)arg2;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end
