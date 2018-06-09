/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICommentDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUICommentDelegate, SKUIDocumentViewController, SKUILayoutCacheDelegate> {
    SKUIMediaSocialAuthor * _authorForActiveAccount;
    SKUIStackDocumentViewController * _childViewController;
    NSArray * _commenters;
    bool  _didShowKeyboard;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardRect;
    bool  _keyboardVisible;
    SKUIViewElementLayoutContext * _layoutContext;
    NSMutableSet * _observedArtworkRequestIDs;
    SKUICommentPostBarView * _postView;
    bool  _scrollNewCommentToView;
    long long  _selectedCommenter;
    SKUIStackTemplateElement * _stackTemplateElement;
    SKUICommentTemplateViewElement * _templateElement;
    SKUILayoutCache * _textLayoutCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_changeCommenter;
- (void)_checkAdminStatus;
- (id)_getSelectedCommenter;
- (void)_keyboardDidHideChangeNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(bool)arg2 applyKeyboardOffset:(bool)arg3;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (id)_layoutContext;
- (void)_layoutKeyboard;
- (void)_layoutScrollView:(double)arg1;
- (bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)_preloadCommenterImages;
- (void)_reloadContentSize:(double)arg1;
- (void)_setSelectedCommenter:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2;
- (void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)updateStackElement:(id)arg1 withView:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
