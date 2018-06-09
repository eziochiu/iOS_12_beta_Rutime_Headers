/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPeopleStripViewController : UIViewController <PXPeopleBootstrapFlowDelegate, PXSectionedDataSourceManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    PXCMMPeopleSuggestionsDataSource * __peopleSuggestionsDataSource;
    PXCMMPeopleSuggestionsDataSourceManager * __peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider * __peopleSuggestionsMediaProvider;
    <PXCMMPeopleStripViewControllerDelegate> * _delegate;
    struct { 
        bool didSelectPersonSuggestion; 
    }  _delegateRespondsTo;
    PXCMMSession * _session;
}

@property (setter=_setPeopleSuggestionsDataSource:, nonatomic, retain) PXCMMPeopleSuggestionsDataSource *_peopleSuggestionsDataSource;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMPeopleStripViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXCMMSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXCMMPeopleStripView *view;

- (void).cxx_destruct;
- (void)_didSelectPersonSuggestion:(id)arg1;
- (id)_peopleSuggestionsDataSource;
- (id)_peopleSuggestionsDataSourceManager;
- (id)_peopleSuggestionsMediaProvider;
- (void)_presentBootStrapUIForPersonSuggestion:(id)arg1;
- (void)_setPeopleSuggestionsDataSource:(id)arg1;
- (void)bootstrapFlowController:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
