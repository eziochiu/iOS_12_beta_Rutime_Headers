/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIActionDonationsListViewController : UIViewController <UITableViewDelegate> {
    VCUIUserActivityDonationDataSource * _activityDataSource;
    UITableView * _activityTableView;
    VCUIInteractionDonationDataSource * _interactionDataSource;
    UITableView * _interactionTableView;
    VCUIActionDonationCell * _prototypeCell;
    UISegmentedControl * _segmentedControl;
}

@property (nonatomic, readonly) VCUIUserActivityDonationDataSource *activityDataSource;
@property (nonatomic, readonly) UITableView *activityTableView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCUIInteractionDonationDataSource *interactionDataSource;
@property (nonatomic, readonly) UITableView *interactionTableView;
@property (nonatomic, retain) VCUIActionDonationCell *prototypeCell;
@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)activityDataSource;
- (id)activityTableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)interactionDataSource;
- (id)interactionTableView;
- (void)loadView;
- (id)prototypeCell;
- (id)segmentedControl;
- (void)segmentedControlChanged:(id)arg1;
- (void)setPrototypeCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
