/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    MKPlaceReviewAvatarGenerator * _avatarGenerator;
    NSMutableArray * _cells;
    MKMapItem * _mapItem;
    <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> * _reviewsControllerDelegate;
    NSArray * _userSnippets;
}

@property (nonatomic, retain) MKPlaceReviewAvatarGenerator *avatarGenerator;
@property (nonatomic, retain) NSMutableArray *cells;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> *reviewsControllerDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *userSnippets;

- (void).cxx_destruct;
- (void)_showReview:(id)arg1 index:(unsigned long long)arg2;
- (void)_updateAttribution;
- (void)_viewAllReviews;
- (id)avatarGenerator;
- (id)cells;
- (id)infoCardChildPossibleActions;
- (void)loadCells;
- (id)mapItem;
- (id)reviewAtIndex:(unsigned long long)arg1;
- (id)reviewsControllerDelegate;
- (unsigned long long)reviewsCount;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setAvatarGenerator:(id)arg1;
- (void)setCells:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setReviewsControllerDelegate:(id)arg1;
- (void)setUserSnippets:(id)arg1;
- (id)userSnippets;
- (void)viewDidLoad;

@end
