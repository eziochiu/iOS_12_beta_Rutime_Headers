/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionsRowViewController : UIViewController <MKActionRowItemViewDelegate, MKModuleViewControllerProtocol> {
    NSArray * _actionButtons;
    MKPlaceActionManager * _actionManager;
    NSArray * _actionRowsArray;
    NSArray * _constraints;
    MKPlaceSectionItemView * _hairlineView;
    NSArray * _items;
    UILayoutGuide * _marginLayoutguide;
    unsigned long long  _maxButtonsPerRow;
    unsigned long long  _style;
}

@property (nonatomic) MKPlaceActionManager *actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionManager;
- (void)actionRowSelected:(id)arg1;
- (void)createActionViews;
- (void)createActions;
- (void)createConstraints;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)items;
- (void)layoutButtons;
- (void)loadView;
- (unsigned long long)maxButtonsPerRow;
- (void)setActionManager:(id)arg1;
- (void)setItems:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
