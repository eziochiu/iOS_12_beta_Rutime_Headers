/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController {
    unsigned long long  _initialPaperStyleType;
    <ICPaperStyleSheetCollectionViewControllerDelegate> * _paperStyleDelegate;
}

@property (nonatomic) unsigned long long initialPaperStyleType;
@property (nonatomic) <ICPaperStyleSheetCollectionViewControllerDelegate> *paperStyleDelegate;

- (void).cxx_destruct;
- (bool)accessibilityPerformEscape;
- (void)cancelAction:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)indexPathForInitialSelection;
- (id)initWithInitialPaperStyleType:(unsigned long long)arg1 delegate:(id)arg2;
- (unsigned long long)initialPaperStyleType;
- (id)paperStyleDelegate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setInitialPaperStyleType:(unsigned long long)arg1;
- (void)setPaperStyleDelegate:(id)arg1;
- (void)viewDidLoad;

@end
