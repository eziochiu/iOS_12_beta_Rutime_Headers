/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBusinessDescriptionViewController : CKViewController <UITextViewDelegate> {
    UITextView * _businessDetailsTextView;
}

@property (nonatomic, retain) UITextView *businessDetailsTextView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)businessDetailsTextView;
- (void)didReceiveMemoryWarning;
- (void)doneButtonTapped;
- (void)setBusinessDetailsTextView:(id)arg1;
- (void)setup;
- (void)setupBusinessDetailsText;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
