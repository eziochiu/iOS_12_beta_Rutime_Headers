/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouAvatarView : PXPeopleScalableAvatarView <PXSectionedDataSourceManagerObserver> {
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultContactImage;
- (void)_handleContactCompletionWithContact:(id)arg1;
- (void)_requestMeContactWithCompletion:(id /* block */)arg1;
- (id)fetchAndObservePersonWithUri:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleSuggestionsDataSourceManager;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (void)updateImageForCurrentUser;

@end
