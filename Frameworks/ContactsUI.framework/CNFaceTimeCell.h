/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate> {
    CNActionView * _actionView1;
    CNActionView * _actionView2;
    CNUIUserActionListDataSource * _actionsDataSource;
    <CNPropertyCellDelegate> * _delegate;
    UILabel * _faceTimeLabel;
    bool  _isFaceTimeAudioAvailable;
}

@property (nonatomic, readonly) CNActionView *actionView1;
@property (nonatomic, readonly) CNActionView *actionView2;
@property (nonatomic, retain) CNUIUserActionListDataSource *actionsDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *faceTimeLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFaceTimeAudioAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionView1;
- (id)actionView2;
- (id)actionsDataSource;
- (id)constantConstraints;
- (id)delegate;
- (void)didPressActionView:(id)arg1 longPress:(bool)arg2;
- (id)faceTimeLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isFaceTimeAudioAvailable;
- (id)labelView;
- (double)minCellHeight;
- (void)performDefaultAction;
- (id)rightMostView;
- (void)setActionsDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFaceTimeAudioAvailable:(bool)arg1;
- (void)tintColorDidChange;
- (id)variableConstraints;

@end
