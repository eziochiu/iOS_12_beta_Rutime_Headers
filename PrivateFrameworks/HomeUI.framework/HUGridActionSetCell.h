/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol> {
    UIView * _accessoryView;
    NSArray * _actionSetCellConstraints;
    NAFuture * _executeActionSetFuture;
    HUIconView * _iconView;
    NAFuture * _internalExecuteActionSetFuture;
    HFItem * _item;
    HUPieProgressView * _progressView;
    HUGridSceneCellLayoutOptions * _sceneCellLayoutOptions;
    _HUGridActionSetTitleAndDescriptionView * _titleAndDescriptionView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) NSArray *actionSetCellConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NAFuture *executeActionSetFuture;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic, retain) NAFuture *internalExecuteActionSetFuture;
@property (nonatomic, retain) HUPieProgressView *progressView;
@property (nonatomic) HUGridSceneCellLayoutOptions *sceneCellLayoutOptions;
@property (readonly) Class superclass;
@property (nonatomic, retain) _HUGridActionSetTitleAndDescriptionView *titleAndDescriptionView;

+ (Class)layoutOptionsClass;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (void)_setupActionSetCell;
- (void)_updateLabels;
- (void)_updateLabelsWithTitle:(id)arg1 description:(id)arg2;
- (id)accessoryView;
- (id)actionSetCellConstraints;
- (id)executeActionSetFuture;
- (id)iconView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)internalExecuteActionSetFuture;
- (id)item;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (id)progressView;
- (id)sceneCellLayoutOptions;
- (void)setAccessoryView:(id)arg1;
- (void)setActionSetCellConstraints:(id)arg1;
- (void)setExecuteActionSetFuture:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInternalExecuteActionSetFuture:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSceneCellLayoutOptions:(id)arg1;
- (void)setTitleAndDescriptionView:(id)arg1;
- (id)titleAndDescriptionView;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
