/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {
    long long  _deferredClearButtonMode;
    id  _deferredFont;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _deferredFrame;
    float  _deferredPaddingLeft;
    float  _deferredPaddingTop;
    NSString * _deferredPlaceholder;
    NSString * _deferredText;
    bool  _isDeferringInterfaceUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeferringInterfaceUpdates, nonatomic) bool deferringInterfaceUpdates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (long long)clearButtonMode;
- (void)dealloc;
- (id)font;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)isDeferringInterfaceUpdates;
- (float)paddingLeft;
- (float)paddingTop;
- (id)placeholder;
- (void)setClearButtonMode:(long long)arg1;
- (void)setDeferringInterfaceUpdates:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
