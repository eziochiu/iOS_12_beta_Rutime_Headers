/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUActivityViewController : UIActivityViewController {
    NSMutableDictionary * _customTitles;
    NSArray * _suActivityItems;
    long long  _transitionSafetyCount;
}

- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
